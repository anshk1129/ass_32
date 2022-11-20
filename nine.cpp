#include<iostream>
#include<stdlib.h>
using namespace std;
class Area{
float aot=0,aor=0,aoc=0;
public:
Area(int l,int b){
aor=l*b;
}
Area(){

}
Area(int r){
aoc=3.14*r*r;
}
Area(float b,float h){
aot=1.5*b*h;
}
void showaot(){
cout<<"\nArea of triangle is "<<aot;
}
void showaoc(){
cout<<"\nArea of circle is "<<aoc;
}
void showaor(){
cout<<"\nArea of rectangle is "<<aor;
}
};
int main(){
    int ch;
   
    // cout<<"Press 1 to calculate are of circle\n";
    while(true){
         cout<<"\nPress 1 to calculate are of circle\n";
    cout<<"Press 2 to calculate are of rectangle\n";
    cout<<"Press 3 to calculate are of triangle\n";
    cout<<"Press 4 to quiet\n";
    cout<<"\nEnter you choice ";
    cin>>ch;
    system("cls");
        if(ch==1){
         int r;
         cout<<"\nEnter the radius";
        cin>>r;
        Area a(r);
        a.showaoc();
        }
        else if(ch==2){
         int l,b;
         cout<<"\nEnter the length and breadth";
        cin>>l>>b;
        Area a(l,b);
        a.showaor();
        }
        else if(ch==3){
         int b,h;
         cout<<"\nEnter the base and height";
        cin>>b>>h;
        Area a(b,h);
        a.showaot();
        }
        else{
            exit(0);
        }
    }
    return 0;
}