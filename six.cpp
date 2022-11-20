#include <iostream>
using namespace std;
class A{
    protected:
string name;
public:
A(){
    cout<<"I am Default of parent "<<endl;
}
A(string s){
    name=s;
    cout<<"I am parameterised of parent "<<endl;
}
};
class B:public A{
// protected:
int age;
public:
B():A(){
cout<<"I am default of child "<<endl;
}
B(string a,int ag):A(a){
age=ag;
cout<<"I am parameterised of child "<<endl;
}
void show(){
    cout<<"Name is -> "<<name<<" Age is -> "<<age<<endl;
}
};
class C:public B{
long long phone;
public:
C():B(){
    cout<<" Default of child of child called \n";
}
C(string s,int a,int pho):B(s,a){
phone=pho;
cout<<" Parameterised of child of child called \n";
}
};
int main(){
    B b,b1("ansh",20);
    b1.show();
    C c,c1("yashu",21,2346498629);
return 0;
}
// sabse phle c ne b k constructor ko call kia fir b ne a ko call kia 
// or sbse last m c ka constructor chlega