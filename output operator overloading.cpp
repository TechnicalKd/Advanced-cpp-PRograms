#include<iostream>
using namespace std;

class Complex 
{
    public:
    int real;
    int img;

    friend ostream & operator <<(ostream &out,Complex &c1);

    Complex(int x,int y){
         real = x;
        img = y;
    }

};

ostream & operator <<(ostream &out,Complex &c1){
    out<<c1.real <<"+"<<c1.img;
    return out;
}

int main(){
    Complex c1(10,2);

    cout<<c1;
    return 0;
}