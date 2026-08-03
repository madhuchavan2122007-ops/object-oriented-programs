#include<iostream>
using namespace std;
class evenodd
{
public:
    int num;
    void input(){
    cout<<"enter num"<<endl;
    cin>>num;
    }
    void check(){
    if(num%2==0){
    cout<<"num is even"<<endl;
    }else{
    cout<<"num is odd"<<endl;
    }
    
    }
};
int main(){
evenodd n1;
n1.input();
n1.check();
return 0;

}
