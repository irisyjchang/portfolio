// Palindrome by Iris Chang ~ 10/10/21
#include<iostream>
using namespace std;
// Check for punctuation
bool punctuation(char forwardLetter){
  if (forwardLetter == '.' || forwardLetter == ' ' || forwardLetter == ',' || forwardLetter == ';' || forwardLetter == ':'|| forwardLetter == '!' || forwardLetter == '?'){
    return true;
  }
  return false;
}
  
int main(){

  char backwardInput[80];
  char forwardInput[80];
  char forwardLetter;
  int index = 0;
  int count = 0;
  int tally = 0;

  cin >> noskipws;
  // Check user input
  while (true){
    cin >> forwardLetter;
    if (punctuation(forwardLetter)){
      continue;
    }
    // Terminate user input
    if (forwardLetter == '\n'){
      break;
    }else{
      count++;
      forwardInput[index]=forwardLetter;
      index++;
      // Check user input size
      if (index == 81){
	cout << "error : not enough storage";
        break;
      }
    }
  }
  // Forming array that is the backward version of user input
  for (int i=0; i<index; i++){
    backwardInput[index-i-1] = forwardInput[i];
  }
  // Check if user input is same backwards as forwards
  for (int i=0; i<index; i++){
    char backwardLetter = tolower(backwardInput[i]);
    char forwardLetter = tolower(forwardInput[i]);
    if (backwardLetter == forwardLetter){
      tally++;
    }
  }
  // Output
  if (tally == count){
    cout << "palindrome\n";
  } else {
    cout << "not a palindrome\n";
  }
}

 
  






















				   

	   
     
	
