#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
    srand(time(NULL)); // initialization 
    int guess, secretNum;
    bool playAgain = true;
    string userChoice;

    // secret num variable
    secretNum = (rand() % 10) + 1;
    cout<<secretNum<<endl;
    
    do {
        cout<<"Guess the number: ";
        cin>>guess;
        cout<<"\n";

        if (guess == secretNum){
            cout<<"Cool you guessed the secret number: "<<secretNum<<endl;
            cout<<"\nWould you like to play again (Y) or (N): ";
            cin>>userChoice;
            if(userChoice == "Y") {
                playAgain = true;
                secretNum = (rand() % 10) + 1;
                system("clear");
            } else {
                playAgain = false;
                system("clear");
                cout<<"****THANKS FOR PLAYING*****"<<endl;
            }

        } else if(secretNum != guess){

            cout<<"not quiet try again, ";
        }
    } while(playAgain == true);


    return 0;
};