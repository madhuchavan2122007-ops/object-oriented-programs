#include<iostream>
using namespace std;
class fraction{
public:
   float numerator;
   float denominator;
   void input(){
   cin>>numerator;
   cin>>denominator;
   }
   void add(fraction f1,fraction f2){
   numerator=(f1.numerator*f2.denominator)+(f1.denominator*f2.numerator);
   denominator=f1.denominator*f2.denominator;
   }
   void sub(fraction f1,fraction f2){
   numerator=(f1.numerator*f2.denominator)-(f1.denominator*f2.numerator);
   denominator=f1.denominator*f2.denominator;
   
   }
   void display(){
   cout<<numerator<<"/"<<denominator<<endl;
   }
};
int main(){
fraction f1,f2,f3;
cout<<"enter first fraction:";
f1.input();
cout<<"enter second fraction:";
f2.input();
cout<<"addition:";
f3.add(f1,f2);
f3.display();
cout<<"subtraction:";
f3.sub(f1,f2);
f3.display();
return 0;
}
