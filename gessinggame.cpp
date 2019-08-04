#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;


string lowerString(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main(){
    srand(time(NULL)); // initialization 
    int guess, secretNum, guessCounts;
    bool playAgain = true;
    string userChoice;

    // secret num variable + counts
    guessCounts = 3;
    secretNum = (rand() % 10) + 1;
    cout << secretNum << endl;
    do {
        cout << "TRIES:"<<guessCounts<<endl;
        cout << "\nGuess the number: ";
        cin >> guess;
        cout << "\n";
        if (guess == secretNum){
            cout << "Cool you guessed the secret number: " << secretNum << endl;
            cout << "\nWould you like to play again (Y) or (N): ";
            cin >> userChoice;
            userChoice = lowerString(userChoice);
            if(userChoice == "y") {
                playAgain = true;
                secretNum = (rand() % 10) + 1;
                guessCounts = 3;
                system("clear");
            } else if(userChoice == "n") {
                playAgain = false;
                system("clear");
            }
        } else if(secretNum != guess){
            guessCounts --;
            cout << "Wrong number!" << endl;
        }
    } while(playAgain == true && guessCounts != 0);

    if(!playAgain){
        cout << "\t\t\t****THANKS FOR PLAYING*****" << endl;
    } else {
        cout<<"\n\n\t\t\t\tGAMEOVER!\n\n\n";
    }
    return 0;
};