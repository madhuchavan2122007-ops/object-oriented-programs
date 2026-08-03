#include<iostream>
using namespace std;
class factorial
{
public: int f=1;
        int num;
        void input(){
        cout<<"enter number"<<endl;
        cin>>num;
        }
        int fact(){
        for(int i=1;i<=num;i++){
        f*=i;
        }
        return f;
        }
      
};
int main(){
factorial f1;
f1.input();
cout<<"factorial of num :"<<f1.fact()<<endl;
return 0;

}
