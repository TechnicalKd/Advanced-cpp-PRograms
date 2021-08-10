#include<iostream>
using namespace std;

class Base 
{
   public:
        void display(){
            cout<<"This is Base Class";
        }
};

class Derieved : public Base
{
    public:
void display(){
            cout<<"This is Derived Class";
        }
};

int main(){

    Derieved d;
    d.display();

return 0;  
}
