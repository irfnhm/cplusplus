//
//  Checkout.cpp
//  googletest
//
//  Created by Irfan on 24/10/21.
//

#include "Checkout.hpp"

Checkout::Checkout():total(0){}
Checkout::~Checkout(){}

void Checkout::addItemPrice(std::string item, int price){
    prices[item] = price;
}

void Checkout::addItem(std::string item){
    items[item]++;
}

int Checkout::calculateTotal(){
    total = 0;
    for (std::map<std::string, int>::iterator itemIterator = items.begin(); itemIterator != items.end(); itemIterator++){
        std::string item = itemIterator->first;
        int itemCount = itemIterator->second;
        calculateItem(item, itemCount);
    }
    return total;
}

void Checkout::calculateItem(std::string item, int itemCount){
    std::map< std::string, Discount>::iterator discountIterator;
    discountIterator = discounts.find(item);
    if(discountIterator != discounts.end()){
        Discount discount = discountIterator->second;
        calculateDiscount(item, itemCount, discount);
    }
    else{
        total += itemCount * prices[item];
    }
}

void Checkout::calculateDiscount(std::string item, int itemCount, Discount discount){
    if(itemCount >= discount.numberOfItems){
        int numberOfDiscounts = itemCount / discount.numberOfItems;
        total += numberOfDiscounts * discount.discountPrice;
        int remainingItems = itemCount % discount.numberOfItems;
        total += remainingItems * prices[item];
    }
    else {
        total += itemCount * prices[item];
    }
}

void Checkout::addDiscount(std::string item, int numberOfItems, int discountPrice){
    Discount discount;
    discount.numberOfItems = numberOfItems;
    discount.discountPrice = discountPrice;
    discounts[item] = discount;
}
