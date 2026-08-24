#include<iostream>
#include<string>

using namespace std;
class rectangle{
float l,b;
public:
rectangle(){
l=b=0;
}
rectangle(float length,float breadth){
l=length;
b=breadth;

}
rectangle(const rectangle &r1){
l=r1.l;
b=r1.b;

}
int area(){
return l*b;
}
void display(){
cout<<"area="<<area();
}

};
int main(){
rectangle r1(20,30);
rectangle r2(r1);
cout<<"original rec area:"<<endl;
r1.area();
r1.display();
cout<<"copied rec area:"<<endl;
r2.area();
r2.display();
return 0;
}
