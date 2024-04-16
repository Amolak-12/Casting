#include <iostream>
using namespace std;

//Base Class
class Animal {
  public:
     void speak() {
     cout << "Animal speaks" << endl;
   }
};

//Child Class
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

      //It differs compiler to compiler 
      //In few compiler it works and in few it does not
        // Dog* d = new Animal();
        // d->speak();
      //But there is a second way in which it could work everywhere
        Dog* d = (Dog*) new Animal();
        d->speak();
}