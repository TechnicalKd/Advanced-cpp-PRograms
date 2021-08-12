#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream ifs;
    ifs.open("m.txt");
    if(ifs){
        string name;
        string name1;
        string name2;
        string name3;

        ifs>>name>>name1>>name2>>name3;
        cout<<name<<endl;
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3<<endl;


    }

    return 0;
}