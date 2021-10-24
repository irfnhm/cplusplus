/**
 Implmenets a simple checkout logic to demo the working of googletest
 */
//  main.cpp
//  googletest
//
//  Created by Irfan on 24/10/21.
//

#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Checkout.hpp"

using ::testing::_;
using ::testing::Return;

class CheckoutTest: public::testing::Test{
public:
    
protected:
    Checkout checkOut;
};

class QueueInterface{
public:
    virtual ~QueueInterface(){;}
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
};

class MockQueue:public QueueInterface{
public:
    MOCK_METHOD0(dequeue, int());
    MOCK_METHOD1(enqueue, void(int data));
};

class DataHolder{
public:
    DataHolder(QueueInterface *queue):queue(queue){;}
    void addData(int data){
        queue->enqueue(data);
    }
    
    int getData(){
       return queue->dequeue();
    }
protected:
    QueueInterface *queue;
};

//implement gtest
TEST_F(CheckoutTest, CalculateTotal){
    checkOut.addItemPrice("a", 1);
    checkOut.addItem("a");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(1, total);
}

TEST_F(CheckoutTest, CalculateTotalFromMultipleItems){
    checkOut.addItemPrice("a", 1);
    checkOut.addItemPrice("b", 2);
    checkOut.addItem("a");
    checkOut.addItem("b");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(3, total);
}

TEST_F(CheckoutTest, AddDiscount){
    checkOut.addDiscount("a", 3, 2);
}

TEST_F(CheckoutTest, CalculateTotalWithDiscount){
    checkOut.addItemPrice("a", 1);
    checkOut.addDiscount("a", 3, 2);
    checkOut.addItem("a");
    checkOut.addItem("a");
    checkOut.addItem("a");
    int total = checkOut.calculateTotal();
    ASSERT_EQ(2, total);
}

TEST_F(CheckoutTest, ItemWithNoPriceThrowsException){
    ASSERT_THROW(checkOut.addItem("a"), std::invalid_argument);
}

// implement gmock
TEST(GMockTest, AddData){
    MockQueue myMock;
    DataHolder dh(&myMock);
    EXPECT_CALL(myMock, enqueue(_));
    dh.addData(1);
}

TEST(GMockTest, AddAndGetData){
    MockQueue myMock;
    DataHolder dh(&myMock);
    EXPECT_CALL(myMock, enqueue(1));
    EXPECT_CALL(myMock, dequeue()).WillOnce(Return(1));
    dh.addData(1);
    int data = dh.getData();
    ASSERT_EQ(1, data);
}
