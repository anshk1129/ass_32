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
int main(){
    B b,b1("ansh",20);
    b1.show();

}