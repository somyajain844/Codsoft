#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand (time(0)) ;
    int Guess , Number = rand() % 100 + 1 ;
    cout << " NUMBER GUESSING GAME!!! " << endl ;
    cout << " Please guess a number between 1 to 100. " << endl ;
    do 
    {
        cout << " Guess a number: " ;
        cin >> Guess ; 
        if (Guess < Number)
        {
            cout << " Try a higher number! Guess again " << endl ;
        }
        else if (Guess > Number)
        {
            cout << " Try a lower number! Guess again " << endl ;
        }
    }
     while (Guess != Number);
    cout << " Congratulations!! You guessed the correct number: " << Number << endl ;
    return 0 ;
}