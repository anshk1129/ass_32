#include <iostream>
using namespace std;
class factorial{
int fact,n;   
public:
factorial(){

}
factorial(int n){
    this->n=n;
     fact=1;
}
factorial(factorial&f){
    fact=1;
    n=f.n;
}
void cal_fact(){
    for(int i=1;i<=n;i++){
      fact=fact*i;
    }
    cout<<"Factorial of a given number is "<<fact<<endl;
}
};
int main(){
    int x;
    cout<<"Enter the number for which you want to calculate factorial \n";
       cin>>x;
factorial f1(x);
factorial f2=f1;
f2.cal_fact();
return 0;

}