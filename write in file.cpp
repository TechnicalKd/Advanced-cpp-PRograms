#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream obj("m.txt",ios::app);
    obj<<"Kiran devkar"<<endl;
    obj<<"kdtech"<<endl;
    obj.close();
}