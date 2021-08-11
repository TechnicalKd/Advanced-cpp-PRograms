#include<iostream>
using namespace std;

class student
{
    public:
    static int addNo;
    int roll;
    string name;
    student(string n){
        addNo++;
        roll= addNo;
        name=n;
    }
    void display(){
        cout<<"Name =>"<<name<<endl<<"ROll No"<<addNo;
    }
};

int student::addNo=0;

int main(){ 
    student s1("kd");
    student s2("Kiran");
    student s3("Kiran");
    student s4("Kiran");
    student s5("Kiran");
    s1.display();
    s5.display();

    cout<<"Total admission"<<student::addNo<<endl;
    return 0;
}