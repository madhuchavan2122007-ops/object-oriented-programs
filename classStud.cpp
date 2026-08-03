#include<iostream>
using namespace std;
class student
{
public:
   string name;
   int roll_no;
   void input(){
   cout<<"enter name & roll_no:"<<endl;
   cin>>name>>roll_no;
  }
   void display(){
   cout<<"Student Info:"<<endl;
   cout<<"Name:"<<name<<endl;
   cout<<"roll_no:"<<roll_no<<endl;
   }
};
int main(){
student s1;
s1.input();
s1.display();
return 0;
}
