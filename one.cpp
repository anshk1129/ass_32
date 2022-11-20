// Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects of FLOAT.
#include <iostream>
using namespace std;
class Float{
float x;
public:
Float(int x){
this->x=x;
}
Float(){

}
Float operator+(Float b){
    Float temp;
temp.x=x+b.x;
return temp;
}
Float operator-(Float b){
    Float temp;
temp.x=x-b.x;
return temp;
}Float operator*(Float b){
    Float temp;
temp.x=x*b.x;
return temp;
}Float operator/(Float b){
    Float temp;
temp.x=x/b.x;
return temp;
}
void show(){
    cout<<"\nResult = "<<x;
}

};
int main(){
    Float a(12.52f),b(10.15f),c,d,e,f;
      c=a+b;
      d=a-b;
      e=a*b;
      f=a/b;
         c.show();
         d.show();
          e.show();
          f.show();
          return 0;
}