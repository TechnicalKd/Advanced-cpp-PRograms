#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"This is constructor";
    }
virtual ~demo(){
        cout<<"This is desturctor";
    }
};

class demo2 : public demo{
    public:
    demo2(){
        cout<<"This is  demo2 constructor";
    }
   ~demo2(){
        cout<<"This is demo2 desturctor";
    }
};



int main(){

    demo *p = new demo2();
    delete p;
    return 0;
}