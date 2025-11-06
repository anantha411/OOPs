#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animals can eat." << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammals can breathe air." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog can bark." << endl;
    }
};

int main() {
    Dog d;

    
    d.eat();      
    d.breathe(); 
    d.bark();     

    return 0;
}
