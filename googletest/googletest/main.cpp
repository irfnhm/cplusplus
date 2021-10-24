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
#include "Checkout.hpp"

class CheckoutTest: public::testing::Test{
public:
    
protected:
    Checkout checkOut;
};

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
