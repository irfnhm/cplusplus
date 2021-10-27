// C++ classes

#include <iostream>
#include <string>

class Character
{
    protected:
        int health;

    public:
        Character(){health = 100;}
        virtual int getHealth(){
            return health;
        }
        virtual void getHurt(int hurtValue){
            health -= hurtValue;
        }
};

class Monster : public Character {
    public:
        virtual void getHurt(int hurtValue){
            health -= (2 * hurtValue);
        }
};

int main()
{
    Character captain;
    Monster hulk;
    std::cout << captain.getHealth() << std::endl;
    captain.getHurt(0);
    std::cout << captain.getHealth() << std::endl;
    hulk.getHurt(100);
    std::cout << hulk.getHealth() << std::endl;
}