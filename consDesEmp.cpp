#include<iostream>
#include<string>
using namespace std;

class employee{
int empID;
string empName;
double salary;
double hra;
double da;
public:
  employee(int ID,string name,double s,double h,double d){
  empID=ID;
  empName= name;
  salary=s;
  hra=h;
  da=d;
  
  }
  double grossSalary(){
  return salary+hra+da;
  }
  void display(){
  cout<<"____Employee Details____"<<endl;
  cout<<"Employee Name:"<<empName<<endl;
  cout<<"Basic Salary:"<<salary<<endl;
  cout<<"House Rent Allowence:"<<hra<<endl;
  cout<<"Dearness Allowence:"<<da<<endl;
  cout<<"Gross Salary:"<<grossSalary()<<endl;
  }
  ~employee(){
  cout<<"__[Destructor Called]__"<<endl;
  }
};
int main(){
employee e1(102,"Saumya",80000,15000,10000);
e1.grossSalary();
e1.display();
return 0;
}
