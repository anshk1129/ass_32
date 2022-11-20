#include <iostream>
using namespace std;
class Rectangle{
int l,b;
public:
Rectangle(){

}
void area(int a,int b1){
l=a;b=b1;
}
void area(int a,double b1){
l=a;b=b1;
}void area(double a,int b1){
l=a;b=b1;
}void area(double a,double b1){
l=a;b=b1;
}
void display(){
    cout<<"\nArea is : "<<l*b;
}
};
int main(){
    Rectangle r;
    r.area(10,20);
    r.display();
    r.area(11.3,20.4);
    r.display();
    r.area(54,20.34);
    r.display();

}