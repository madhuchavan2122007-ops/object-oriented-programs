#include<iostream>
#include<string>
using namespace std;
 class Box{
 double l;
 double w;
 double h;
 public:
  Box(){
  l=w=h=1.0;
  }
  Box(double len,double wid,double hig){
  l=len;
  w=wid;
  h=hig;
  }
  Box(const Box &obj){
  l=obj.l;
  w=obj.w;
  h=obj.h;
  }
  double volume(){
  return l*w*h;
  }
  void display(){
  cout<<"[Box Dimensions]"<<endl;
  cout<<"Length="<<l<<endl;
  cout<<"Width="<<w<<endl;
  cout<<"Height="<<h<<endl;
  cout<<"Volume of Box="<<volume()<<endl;
  }
  ~Box(){
  cout<<"__[Destructor Called]__"<<endl;
  }
 };
 int main(){
 cout<<"__Default Constructor__"<<endl;
 Box b1;
 b1.display();
  cout<<"__Parameterised Constructor__"<<endl;
 Box b2(2.0,3.0,5.0);
 b2.display();
 cout<<"__Copy Constructor__"<<endl;
 Box b3=b2;
 b3.display();
 return 0;
 }
 
