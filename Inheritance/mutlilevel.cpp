#include <iostream>
using namespace std;
class Animal {
   public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
   public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Bulldog : public Dog {
   public:
    void run() {
        cout << "Running..." << endl;
    }
};

int main() {
    Bulldog b;

    b.eat();
    b.bark();
    b.run();

    return 0;
}
