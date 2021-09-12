#include<iostream>
using namespace std;

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
  while (true){
    cin >> forwardLetter;
    if (punctuation(forwardLetter)){
      continue;
    }
    if (forwardLetter == '\n'){
      break;
    }else{
      count++;
      forwardInput[index]=forwardLetter;
      index++;
      if (index == 81){
	cout << "error : not enough storage";
        break;
      }
    }
  }
 
  for (int i=0; i<index; i++){
    backwardInput[index-i-1] = forwardInput[i];
  }

  for (int i=0; i<index; i++){
    char backwardLetter = tolower(backwardInput[i]);
    char forwardLetter = tolower(forwardInput[i]);
    if (backwardLetter == forwardLetter){
      tally++;
    }
  }
  if (tally == count){
    cout << "palindrome\n";
  } else {
    cout << "not a palindrome\n";
  }
}

 
  






















				   

	   
     
	
