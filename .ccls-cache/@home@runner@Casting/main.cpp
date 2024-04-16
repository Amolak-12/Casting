#include <iostream>
using namespace std;

class Animal {
  public:
    virtual void speak() {
     cout << "Animal speaks" << endl;
   }
};

class Dog : public Animal{
  public:
   void speak() {
     cout << "Barking!" << endl;
   }
};
int main() {

  //Normal Function calling
    Animal* a = new Animal();
    a->speak();
    Dog* b = new Dog();
    b->speak();

  //Casting Function calling

   //Upcasting 
    Animal* c = new Dog();
    c->speak();
   //Here in the above line there is a problem
   //If you run the code it will print "Animal speaks" 
   //Without using virtual keyword in the parent class function
   //But if you use virtual keyword in the parent class function
   //Then it will print "Barking!"

   //Downcasting
    Dog* d = new Animal();
}