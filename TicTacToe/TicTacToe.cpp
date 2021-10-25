// Tic Tac Toe Game by Iris Chang ~ 10/24/21 ~ Two players can play the game through the command line
#include <iostream>
using namespace std;
// Function that resets the board
void reset(char board[3][3])
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      board[i][j]=' ';
}

void display (char board[3][3])
{
  cout << "| |1|2|3";
  for (int y=0; y<3; y++){
    cout << "|\n";
    char temp = 'a'+y;
    cout << '|' << temp;
    for (int x=0; x<3; x++){
      cout << '|' << board[x][y] ;
    }
  }
  cout << "|\n";
}

int main()
{

  int count, winX, winO, tie;
  count = 0;
  winX = 0;
  winO = 0;
  tie = 0;
  char letter, number;
  int x,y;

  char board[3][3];
  reset(board);

  while (true){
    display(board);
    bool legalMove;
    bool O;
    bool T;
    bool X;
    bool playerX;
    O = false;
    T = false;
    X = false;
    legalMove=false;
    int position, tally=0;
    // Check player's turn
    if (count%2 == 0){
      playerX = true;
    } else {
      playerX = false;
    }
    // Check for legal move
    while (legalMove==false){
      // Take user input
      cin >> number;
      cin >> letter;
      if (number>='1' && number<='3'){
	if (letter>='a' && letter <='c'){
	  x = number - '1';
	  y = letter - 'a';
	  legalMove=true;
	} else {
	  cout << "please enter legal move";
	}
      } else {
	cout << "please enter legal move";
      }
    }
    // Player's move
    if (board[x][y] == ' '){
      if (playerX){
	board[x][y] = 'X';
      }else{
	board[x][y] = 'O';
      }
    }else{
      cout << "please enter legal move" << "\n";
      continue;
    }
    count++;
    // Check win condition
    for (int x=0; x<3; x++){
      if (board[0][y]==board[1][y] && board[1][y]==board[2][y]){
	if (board[0][y]=='X'){
	  X = true;
	  break;
	}else if (board[0][y]=='O'){
	  O = true;
	  break;
	}
      }
    }
    // Check win
    for (int x=0; x<3; x++){
      if (board[x][0]==board[x][1] && board[x][1]==board[x][2]){
	if (board[x][0]=='X'){
	  X = true;
	  break;
	}else if (board[x][0]=='O'){
	  O = true;
	  break;
	}
      }
    }
    // Check diagonal win
    if (board[0][0]==board[1][1] && board[1][1]==board[2][2]){
      if (board[0][0]=='X'){
	X = true;
      }else if(board[0][0]=='O'){
	O = true;
      }
    }
    // Check diagonal win
    if (board[0][2]==board[1][1] && board[1][1]==board[2][0]){
      if (board[0][2]=='X'){
	X = true;
      }else if(board[0][2]=='O'){
	O = true;
      }
    }
    // Check open spaces on board
    for (int x=0; x<3; x++){
      for (int y=0; y<3; y++){
	if (board[x][y]!=' '){
	  tally++;
	}
      }
    }
    // Tie
    if (tally == 9){
      if ((X==false) || (O==false)){
	T = true;
      }
    }
    //display scores
    if(T){
      tie++;
      cout << "O win: " << winO << " ";
      cout <<  "Tie: " << tie << " ";
      cout << "X win: " << winX << "\n";
      display(board);
      reset(board);
    } else if (X){
      winX++;
      cout << "O win: " << winO << " ";
      cout <<  "Tie: " << tie << " ";
      cout << "X win: " << winX << "\n";
      display(board);
      reset(board);
    } else if (O) {
      winO++;
      cout << "O win: " << winO << " ";
      cout <<  " Tie: " << tie << " ";
      cout << " X win: " << winX << '\n';
      display(board);
      reset(board);
    }

  }
  return 0;
}
  

















  


  








