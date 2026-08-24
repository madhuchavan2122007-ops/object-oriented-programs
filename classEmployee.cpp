#include<iostream>
#include<string>

using namespace std;
class employee{
string name;
double id;
double salary;
public: 
employee(){
id=0;
salary=0;
name="";
}
employee(double x,double y, string n){
id=x;
salary=y;
name=n;
}
employee(const employee &e1){
id=e1.id;
salary=e1.salary;
name=e1.name;
}
void display(){
cout<<"name:"<<name<<endl;
cout<<"salary:"<<salary<<endl;
cout<<"employee ID:"<<id<<endl;

}

};
int main(){
employee e1(25252594,78920,"Pihu");
employee e2(e1);
cout<<"__Employee 1:__"<<endl;
e1.display();
cout<<"__copied Employee data:__"<<endl;
e2.display();

return 0;

}
