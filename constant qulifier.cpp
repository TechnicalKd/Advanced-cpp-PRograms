#include<iostream>
using namespace std;

int main(){

    int x=10,y=20;
     int *ptr = &x;
    ++*ptr;
    cout<<x;

    return 0;
}
