#include<iostream>
#include<string>
using namespace std;
class student{
protected:
  int roll_n;
  string name;
public:
   void get_data(){
   cout<<"Enter Student Roll_no:";
   cin>>roll_n;
   cout<<endl;
   cout<<"ENter Student Name:";
   cin>>name;
   cout<<endl;
   }
   void display(){
   cout<<"___Student Marklist___"<<endl;
   cout<<"Roll_no="<<roll_n<<endl;
   cout<<"Name="<<name<<endl;
   
   }

};
class student_marks:public student{
protected:
  int sub1,sub2,sub3,sub4,sub5;
  float per;
public:
  void accept_data(){
  get_data();
  cout<<" Enter marks of subject 1:";
  cin>>sub1;
  cout<<"Enter marks of subject 2:";
  cin>>sub2;
  cout<<"Enter marks of subject 3:";
  cin>>sub3;
  cout<<" Enter marks of subject 4:";
  cin>>sub4;
   cout<<"Enter marks of subject 5:";
  cin>>sub5;
 
  }
  void put_data(){
  display();
  cout<<"Marks of subject 1="<<sub1<<endl;
  cout<<"Marks of subject 2="<<sub2<<endl;
  cout<<"Marks of subject 3="<<sub3<<endl;
  cout<<"Marks of subject 4="<<sub4<<endl;
  cout<<"Marks of subject 5="<<sub5<<endl;
  } 
};
class student_result:public student_marks{
public:
void cal(){
per=(sub1+sub2+sub3+sub4+sub5)/5.0;
cout<<"\n Total Percentage:"<<per<<endl;

}
};
int main(){
student_result res;
int count;
cout<<"Enter Count=";
cin>>count;
cout<<endl;
for(int i=count;i>0;i--){
res.accept_data();
res.put_data();
res.cal();
}
return 0;
}
