#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(int x,int y){
a=x;
b=y;
cout<<a<<b;

    }
Complex(int k){
a=k;}
Complex(){
cout<<"Default constructor";
}
Complex(Complex &c)//this is copy constructor     for reference:https://www.javatpoint.com/cpp-copy-constructor
{
a=c.a;
b=c.b;
cout<<a<<b;
}
};
int main(){
Complex c1(4,5);
Complex c2(c1);
return 0;
}
