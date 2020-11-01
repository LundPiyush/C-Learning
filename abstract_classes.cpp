#include<iostream>
using namespace std;
class A{
    //1. A class is abstract if it has at least one pure virtual function.
    //2.  We can have pointers and references of abstract class type.
    //3. If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
    //4. An abstract class can have constructors.

/*Comparison with Java
In Java, a class can be made abstract by using abstract keyword. Similarly a function can be made pure virtual or
abstract by using abstract keyword.

Interface vs Abstract Classes:

An interface does not have implementation of any of its methods, it can be considered as a collection of method declarations.
In C++, an interface can be simulated by making all methods as pure virtual. In Java, there is a separate keyword for
interface.
*/
public:
   virtual void fun()=0;//pure virtual function
   void f1(){
   }
};
class B:public B{
public:
    void fun(){
    }
};
