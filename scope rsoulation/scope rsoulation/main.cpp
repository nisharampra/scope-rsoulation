//
//  main.cpp
//  scope rsoulation
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
    
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
   int  getLenght();
   int  getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main(){}

Rectangle::Rectangle(){
    length=1;
    breadth=1;
}

Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
