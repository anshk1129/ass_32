#include <iostream>
using namespace std;
class Addition{
float a,b,c;
public:
Addition(){

}
void area(int a1,int b1){
a=a1;b=b1;
}
void area(int a1,double b1,int a2){
    a=a1;b=b1,c=a2;
}void area(double a1,int b1){
a=a1;b=b1;
}void area(double a1,double b1,double c1){
a=a1;b=b1,c=c1;
}
void display(){
    cout<<"\nArea is : "<<float(a+b);
}
void display1(){
    cout<<"\nArea is : "<<float(a+b+c);
}
};
int main(){
    Addition r;
    r.area(10,20);
    r.display();
    r.area(11.3,20.4);
    r.display();
    r.area(5.4,20.34,20.44);
    r.display1();

}