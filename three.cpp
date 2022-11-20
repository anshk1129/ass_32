#include <iostream>
using namespace std;
class Animal{
public:
void sound(){
    cout<<"I am a cat "<<endl;
}
};
class Dog:public Animal{
    public: 
    void sound(){
        cout<<"I am a dog "<<endl;
    }
};
int main(){
    Dog d;
    d.sound();
return 0;
}