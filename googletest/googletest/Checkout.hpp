//
//  Checkout.hpp
//  googletest
//
//  Created by Irfan on 24/10/21.
//

#ifndef Checkout_hpp
#define Checkout_hpp

#include <string>
#include <map>

class Checkout {
public:
    Checkout();
    virtual ~Checkout();
    
    void addItemPrice(std::string item, int price);
    
    void addItem(std::string item);
    
    int calculateTotal();
    
    void addDiscount(std::string item, int numberOfItems, int discountPrice);
    
protected:
    struct Discount{
        int numberOfItems;
        int discountPrice;
    };
    
    std::map<std::string, int> prices;
    std::map<std::string, Discount> discounts;
    std::map<std::string, int> items;
    int total;
    
    void calculateItem(std::string item, int itemCount);
    void calculateDiscount(std::string item, int itemCount, Discount discount);
};

#endif /* Checkout_hpp */
