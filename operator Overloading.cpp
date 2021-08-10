#include<iostream>
using namespace std;

class Complex 
{
    public:
    int real;
    int img;

    Complex add(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

};

int main(){
    Complex c1,c2,c3;
    c1.real = 10;c1.img= 2;
    c2.real = 10;c2.img= 2; 
    c3 = c1.add(c2);
    cout<<c3.real<<"+"<<"i"<<c3.img;
}