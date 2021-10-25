// Guessing Game By Iris Chang 9/26/21
// Computer will pick a random number between 0 and 100 inclusive and the user will guess a number. The computer will tell the user if the guess was too high, too low, or correct. If the guess is correct, the computer will display the number of guesses it took the user and if the user would like to play again.
#include<iostream>
using namespace std;

int main(){

  bool option = true;
  while (option == true){

    // Choose random number between 0 and 100 inclusive.
    srand(time(NULL));
    int randomNum = rand()%101;

    int guessNum;
    bool attempt = false;
    int count = 0;
    // Check user's guess
    while (attempt == false){
      cin >> guessNum;
      count += 1;
      if (guessNum == randomNum){
	attempt = true;
      } else if (guessNum < randomNum){
	cout << "too low\n";
      } else if (guessNum > randomNum){
	cout << "too high\n";
      }
    }

    // Output results
    cout << "attempts: " << count;
    cout << "\nplay again ? (y/n)\n";
    char answer;
    cin >> answer;

    // Check if user wants to play again
    if (answer == 'y'){
      option = true;
    } else {
      cout << "good game";
      option = false;
    }
  }				      
}
