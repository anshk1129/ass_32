#include<iostream>
using namespace std;
class Player{
int player_no,nom;
string name;
int *goal;
public:
Player(){
    cout<<"Enter the player no\n";
    cin>>player_no;
    cout<<"Enter the player name \n";
    fflush(stdin);
    cin>>name;
    cout<<"Enter the number of matches\n";
    cin>>nom;
    goal=new int [nom];
    for(int i=0;i<nom;i++){
        cout<<"Enter the goal for match "<<i+1<<endl;
        cin>>goal[i];
    }
}
void display(){
    cout<<"Player no -> "<<player_no<<endl;
    cout<<"Player name -> "<<name<<endl;
    cout<<"Number of matches "<<nom<<endl;
    for(int i=0;i<nom;i++){
        cout<<"Number of goal in match "<<i+1<<" = "<<goal[i]<<endl;
    }
}
};
int main(){
    Player p;
    p.display();
    return 0;
}