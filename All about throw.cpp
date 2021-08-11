#include<iostream>
using namespace std;

class myexception : exception{
    char what(){
        return 'm';
    }
};

int divion(int x,int y){
    if(y==0){
        throw myexception();
    }
    return x/y;
}
int main(){
    int a=10,b=0,c;
    try{
        c = divion(a,b);
        cout<<c;
        
    }catch(myexception e){
        cout<<"Number is not divisible";
    }

    return 0;
}