#include<iostream>
using namespace std;
class complex{
public:
    float real;
    float imag;
    void getdata(){
     cin>>real;
     cin>>imag;
    }
    void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void sum(complex c1,complex c2){
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
    }
    void sub(complex c1,complex c2){
    real=c1.real-c2.real;
    imag=c1.imag-c2.imag;
    }
   
};
int main(){
complex c1,c2,c3;
cout<<"enter first complex num:";
c1.getdata();
cout<<endl;
cout<<"enter second complex num:";
c2.getdata();
cout<<"addition:";
c3.sum(c1,c2);
c3.display();
cout<<"subtraction:";
c3.sub(c1,c2);
c3.display();
return 0;
}
