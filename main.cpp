#include <iostream>  // allows program to output data to the screen

struct Base {
  Base(){};//costructor
    virtual void do_something() const{}; //metodo virtual abstrato
  virtual~Base(){std::cout << "se destruyo clase Base!!!"<< 
       std::endl;};//destructor virtual
    
};

struct Derived1 :public Base {
 Derived1(){};
    void do_something()const override {//virtual abstrac
        std::cout << "Derived1!!!" << std::endl;
        
    }
    virtual~Derived1(){
      std::cout << "se destruyo clase Derived1!!!"<< 
       std::endl;//destructor virtual
    };
};

struct Derived2 : public Base {
 Derived2(){};
     void do_something()const override {//virtual abstrac
        std::cout << "Derived2!!!" << std::endl;
    }
     virtual ~Derived2(){
       std::cout << "se destruyo clase Derived2!!!"<< 
       std::endl;//destructor virtual
     };
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();
    
    
} 