#include<iostream>
using namespace std;

int main(){

    int a=10,b=0,c;
    try{
        if(b==0){
            throw b;
        }
        c = a/b;
        cout<<c;
        
    }catch(int e){
        cout<<"Number is not divisible"<<e;
    }

    return 0;
}