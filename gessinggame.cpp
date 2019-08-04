#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
    srand(time(NULL)); // initialization 
    int guess, secretNum, guessCounts;
    bool playAgain = true;
    string userChoice;

    // secret num variable + counts
    guessCounts = 3;
    secretNum = (rand() % 10) + 1;
    
    do {
        cout << "TRIES:"<<guessCounts<<endl;
        cout << "\nGuess the number: ";
        cin >> guess;
        cout << "\n";
        if (guess == secretNum){
            cout << "Cool you guessed the secret number: " << secretNum << endl;
            cout << "\nWould you like to play again (Y) or (N): ";
            cin >> userChoice;
            if(userChoice == "Y") {
                playAgain = true;
                secretNum = (rand() % 10) + 1;
                guessCounts = 3;
                system("clear");
            } else if(userChoice == "N") {
                playAgain = false;
                system("clear");
                cout << "\t\t\t****THANKS FOR PLAYING*****" << endl;
            }

        } else if(secretNum != guess){
            guessCounts --;
            cout << "Wrong number!" << endl;
        }
    } while(playAgain == true && guessCounts != 0);

    //system("clear");
    cout<<"\n\n\t\t\t\tGAMEOVER!\n\n\n";

    return 0;
};