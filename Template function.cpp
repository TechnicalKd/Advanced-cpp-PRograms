#include<iostream>
using namespace std;

template <class T>
class stack
{
    private:
        int top;
        T *p;
        int size;
public:
    stack(int sz){
        size = sz;
        top=-1;
        p = new T[size];
    }
    void push(T x);
    T pop();

void display(){
    int i;
    for(i=0;i<size;i++){
        cout<<" "<<p[i];
        top--;
    }
}
};

template<class T>
void stack<T>::push(T x)
{

        if(top==size-1){
            cout<<"stack is full";
        }else{
            top++;
            p[top] = x;
        }

    }



    
template<class T>
T stack<T>::pop(){
       T x=0;
        if(top==-1){
            cout<<"Stack is empty";
        }else{
            x = p[top];
            top--;
        }
        return x;
    }




int main(){
    stack<int> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();
    return 0;
}