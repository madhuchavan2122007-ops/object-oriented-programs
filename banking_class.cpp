#include<iostream>
#include<string>

using namespace std;

class saving_account{
string acco_holderName;
int acco_no;
double balance;
double interest_rate;
public:
  saving_account(string name,int accNo,double inibalance,double rate){
  acco_holderName=name;
  acco_no=accNo;
  balance=inibalance;
  interest_rate=rate;
  }
  void deposit(double amount){
  if(amount>0){
  balance+=amount;
  cout<<"deposited amount:"<<amount<<endl;
  }
  }
  void withdraw(double amount){
  if(amount>0 && amount<=balance){
  balance-=amount;
  cout<<"withdrawn amount:"<<amount<<endl;
  }else{
  cout<<"Insufficient Balance"<<endl;
  }
  }
void applyInterest(){
double interest=balance*interest_rate/100;
balance+=interest;
cout<<"interest applied:"<<interest<<endl;
}
void display(){
cout<<"__[Savings Account]__"<<endl;
cout<<"AccountHolderName:"<<acco_holderName<<endl;
cout<<"Account Number:"<<acco_no<<endl;
cout<<"balance:"<<balance<<endl;
cout<<"Interest Rate:"<<interest_rate<<"%"<<endl;
cout<<endl;
}
};

class checking_account{

string acco_holderName;
int acco_no;
double balance;
double transaction_fee;
public:
   checking_account(string name,int accNo,double inibalance,double fee){
  acco_holderName=name;
  acco_no=accNo;
  balance=inibalance;
  transaction_fee=fee;
  }
   void deposit(double amount){
  if(amount>0){
  balance+=amount;
  cout<<"deposited amount:"<<amount<<endl;
  }
  }
  void withdraw(double amount){
  double total=amount+transaction_fee;
  if(total<=balance){
  balance-=total;
  cout<<"withdrawn:"<<amount<<endl;
  }else{
  cout<<"Insufficient Amount for withdrawn"<<endl;
  
  }
  
  }
  void display(){
cout<<"__[Checking Account]__"<<endl;
cout<<"AccountHolderName:"<<acco_holderName<<endl;
cout<<"Account Number:"<<acco_no<<endl;
cout<<"balance:"<<balance<<endl;
cout<<"Transaction Fees:"<<transaction_fee<<endl;
cout<<endl;
}
  
};
int main(){
saving_account s("Tanvi",1002,10000.0,4);
checking_account c("Saumya",1005,6000.0,4);
s.display();
s.deposit(3000);
s.withdraw(1500);
s.applyInterest();
cout<<"__Updated Info:__"<<endl;
s.display();
c.display();
c.deposit(2000);
c.withdraw(1000);
cout<<"__Updated Info:__"<<endl;
c.display();
return 0;

}
