#include <iostream>

using namespace std;

int main()
{
    /* Hey! I'm XanderZZ and I'm trying to learn C++. I would be happy if you help me code much more efficiently!
    Github: https://github.com/XanderZZ2! */
    char a[9],b,c,e;
    int d;
    cout<<endl<<" "<<"Welcome to Tic-Tac-Toe (Cute version)"<<endl<<" ";
    for(int i=0 ; i<9 ; i++){
        a[i]=i+49;
        if (a[i]%3==0){
            cout<<a[i]<<endl<<" ";
        }
        else {
            cout<<a[i]<<" ";
        }

    }
    //asking the character
    cout<<endl<<" First Player! Choose your character! (X/O)"<<endl<<" "<<"-> ";
    cin>>c;
    //checking the character
    if (c=='X' || c=='x'){
        c='X';
        e='O';
    }
    else{
        e='X';
        c='O';
    }
    //asking the number
    for (int j=1 ; j<=9 ; j++){
            if (j%2!=0){
                cout<<" OK! "<<c<<" choose a number!"<<endl<<" ";
                b=c;
            }
            else {
                cout<<" OK! "<<e<<" choose a number!"<<endl<<" ";
                b=e;
            }
            cout<<"-> ";
            //getting the number
    cin>>d;
    // if chose an occupied one
    if( a[d-1]=='X' || a[d-1]=='O'){
        cout<<" Ohhh... Wrong choice! Choose another!"<<endl<<" "<<"-> ";
        cin>>d;
    }
    else{
    a[d-1]=b;}
    cout<<endl<<" ";
    //showing the table
    for(int i=0 ;i<9 ; i++){
        if (i==2 || i==5 ||i==8){
            cout<<a[i]<<endl<<" ";
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    //checking the table to find the winner
     for(int z=0 ; z<=6; z=3+z){
        if (a[z]==a[z+1] && a[z]==a[z+2]){
            cout<<" "<<a[z]<<" won the game!!!!!!"<<endl;
            return 0;
        }
    }
    for(int z=0; z<=3 ;z++){
        if(a[z]==a[z+3]&& a[z]==a[z+6]){
            cout<<" "<<a[z]<<" won the game!!!!!!"<<endl;
            return 0;
        }
    }
    //cross
    if (a[0]==a[4]&& a[0]==a[8]){
            cout<<" "<<a[0]<<" won the game!!!!!!"<<endl;
            return 0;
    }
    if (a[2]==a[4] && a[2]==a[6]){
            cout<<" "<<a[0]<<" won the game!!!!!!"<<endl;
            return 0;
    }
    }
    //if nobody was correct
    cout<<" Maybe next time! Bye!";
    return 0;
}
