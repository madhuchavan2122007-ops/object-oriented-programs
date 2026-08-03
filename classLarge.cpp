#include<iostream>
using namespace std;
class largest
{
public:int a,b;
      void input(){
      cout<<"enter numbers"<<endl;
      cin>>a>>b;
      }
      void compare(){
      if(a>b){
      cout<<"num1 is largest"<<endl;
      }else{
      cout<<"num2 is largest"<<endl;
      }
      
      }

};
int main(){
largest l1;
l1.input();
l1.compare();
return 0;


}
