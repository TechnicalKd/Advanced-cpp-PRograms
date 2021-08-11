#include<iostream>
using namespace std;
class Car
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fun();
};

void fun(){
   Car  k;
   k.a=15;
}

int main(){
   fun();
}