include<iostream>
using namespace std;

int main(){

  bool option = true;
  while (option == true){

    srand(time(NULL));
    int randomNum = rand()%101;

    int guessNum;
    bool attempt = false;
    int count = 0;
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

    cout << "attempts: " << count;
    cout << "\nplay again ? (y/n)\n";
    char answer;
    cin >> answer;

    if (answer == 'y'){
      option = true;
    } else {
      cout << "good game";
      option = false;
    }
  }				      
}
