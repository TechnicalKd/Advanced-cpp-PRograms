#include<iostream>
using namespace std;

class base{
public:
 virtual void display(){
     cout<<"THis is base class";
 }
};

class derived : public base{
public:
    void display(){
     cout<<"THis is derived class";
    }
};

int main(){
    base *ptr = new derived();
    ptr->display();
    return 0;
}