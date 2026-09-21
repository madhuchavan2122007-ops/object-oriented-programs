#include<iostream>
#include<string>
using namespace std;
class library{
public:
  library(){
  cout<<"__This is a Library__"<<endl;
  }
  
};
class Book:public library{
public:
  Book(){
  cout<<"1. Book Section"<<endl;
  }
};
class Magzine:public library{
public:
  Magzine(){
  cout<<"2. Magzine Section"<<endl;
  }
};
int main(){
Book b;
Magzine m;
return 0;
}
