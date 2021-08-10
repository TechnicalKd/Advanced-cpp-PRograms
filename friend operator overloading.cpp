#include<iostream>
using namespace std;

class Complex 
{
    public:
    int real;
    int img;
    friend Complex operator+(Complex c1,Complex c2);
     void display(){
        cout<<real<<"+"<<img;
    }
};
    Complex operator +(Complex c1,Complex c2){
        Complex temp;
        temp.real = c1.real +c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }

   



int main(){
    Complex c1,c2,c3;
    c1.real = 10;c1.img= 2;
    c2.real = 10;c2.img= 2; 
    c3 = operator +(c1,c2);
    c3.display();
    return 0;
}