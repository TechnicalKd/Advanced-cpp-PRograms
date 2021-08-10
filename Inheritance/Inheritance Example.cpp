#include<iostream>
using namespace std;

class Rectangle
{
    private : 
    int length;
    int breadth;

    public:
      Rectangle(int l=5,int b=5){
          length = l;
          breadth = b;
      }
      int getLenght(){
          return length;
      }  
      int getBreadth(){
          return breadth;
      }
      void setLength(int l);
      void setBreadth(int b);
      
};

class Cuboid : public Rectangle{
    private:
    int height;
    public :
    Cuboid(int h){
        height = h;
    }
    int getHeight(){
        return height;
    }
    void setHeight(int h){
        height = h;
    }
    int volume(){
        return getBreadth()*getLenght()*height;
    }
}; 



int main(){

  Cuboid c(5);
  cout<<c.volume();

    return 0;
}