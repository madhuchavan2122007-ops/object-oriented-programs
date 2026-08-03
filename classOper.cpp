#include<iostream>
using namespace std;
class operators
{
public:int a,b;
       void input(){
       cout<<"enter numbers"<<endl;
       cin>>a>>b;
       }
      int add(){
     return a+b;
      }
     int  sub(){
      return a-b;
      }
};
int main(){
operators o1;
o1.input();
cout<<"sum:"<<o1.add()<<endl;
cout<<"sub:"<<o1.sub()<<endl;
return 0;

}
