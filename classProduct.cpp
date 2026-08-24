#include<iostream>
#include<string>

using namespace std;
class product{
string name;
double pro_ID;
double price;
public:
product(){
name="Laptop";
pro_ID=9234256;
price=90000;

}
product(const product &p1){
name=p1.name;
pro_ID=p1.pro_ID;
price=p1.price;
}
void display(){
cout<<"name of product="<<name<<endl;
cout<<"ID of product="<<pro_ID<<endl;
cout<<"Price of product="<<price<<"rupees"<<endl;

}
};
int main(){
product p1;
product p2(p1);
cout<<"__original info:__"<<endl;
p1.display();
cout<<"__copied info:__"<<endl;
p2.display();
return 0;

}
