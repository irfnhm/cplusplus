#include <iostream>
#include <utility>

class RAII{
    public:
        explicit RAII(std::string name) : m_name(std::move(name)){
            std::cout << "RAII: " << m_name << "\n";
        }

        ~RAII(){
            std::cout << "~RAII: " << m_name << "\n";
        }

        private:
            std::string m_name;
};

void run(bool shouldThrow){
    std::cout << "Enter demo\n";
    RAII run1("alpha");
    RAII run2("beta");
    if(shouldThrow){
        throw std::runtime_error("Allocation error occurred.");
    }
    std::cout << "Exiting demo clean\n";
}

int main(){
    try{
        run(false);
    }
    catch(std::exception& e){
        std::cout << "Error: " << e.what() << "\n";
    }
}