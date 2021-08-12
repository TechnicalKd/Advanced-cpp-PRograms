#include<iostream>
#include<vector>

using namespace std;

int main(){

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // vector<int>::iterator itr;
    // for(itr=v.begin();itr!=v.end();itr++){
    //     cout<<" "<<*itr;
    // }
     list<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    list<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<" "<<*itr;
    }

    return 0;
}