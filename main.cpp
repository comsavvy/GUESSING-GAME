#include <iostream>
using namespace std;
int main()
{
    int x=0;    //guess
    int sec= 17; //secret number
    int y=0;    //guess counter

    cout<<" Hello! I have number between 1 - 20, can you guess my number?\n";
    cout<<" I wish you best of luck during guessing!\n";
    while(x!=sec){
        if ( y != 5){
            cout<<">>>>";
            cin>>x;
            if (x>sec){
                cout<<"Too big, try again!\n";
        }
            else if (x<sec){
                cout<<"Too small, try again!\n";
        }
        }
        else{
            break;
        }
        y++;
    }
    if (x== sec){
        cout <<"You win!";
    }
    else{
        cout<<"You lose!";
    }
        return 0;
}
