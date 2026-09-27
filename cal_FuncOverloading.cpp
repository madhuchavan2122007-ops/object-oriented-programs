#include<iostream>
using namespace std;
class calculator{
public:
int a,b;
int n1,n2,n3;
float num1,num2;
public:
   void getinfo(){
    cout<<"Enter two integer numbers: ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Enter three integer numbers: ";
    cin>>n1>>n2>>n3;
    cout<<endl;
    cout<<"Enter two floating point numbers: ";
    cin>>num1>>num2;
    cout<<endl;
   }
   int add(int a,int b){
    return a+b;
   }
   int add(int n1,int n2,int n3){
    return n1+n2+n3;
   }
   float add(float num1,float num2){
    return num1+num2;
   }
   void display(){
     cout<<"Addition of 2 inte num: "<<add(a,b)<<endl;
     cout<<"Addition of 3 inte num: "<<add(n1,n2,n3)<<endl;
     cout<<"Addition of 2 floatpoint num: "<<add(num1,num2)<<endl;
   }
};
int main(){
    calculator c;
    c.getinfo();
    c.display();
    return 0;
}