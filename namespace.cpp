#include<iostream>
using namespace std;

namespace First{
void fun(){
cout<<"First Fun";
}
}


namespace second{
void fun(){
cout<<"Second Fun";
}
}



int main(){

    First::fun();
    return 0;
}