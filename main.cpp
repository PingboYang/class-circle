#include <iostream>
using namespace std;

class Circle{
  private: int radius;
  public:
  Circle(){
    radius=0;
  }                    //constructer overloading
  Circle(int r){
    setRadius(r);
  }
  int getRadius(){
    return radius;
  }
  void setRadius(int r){
    if (r>=0){
      radius=r;
    }else{
      radius=0;
    }
    
  }
  double calcArea(){
    double area=radius*radius*3.14;
    return area;
  }
  
};

int main() {
  Circle c1;
  c1.setRadius(10);
  cout << "\nThe radius of c1 is: "<<c1.getRadius();
  cout << "\nThe area of c1 is: "<<c1.calcArea();
}