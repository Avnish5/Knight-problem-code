#include<bits/stdc++.h>
using namespace std;
int main(){
  // creating a 2D array
  string board[8][8];
  int i, j;

  // initializing the board

  for (i = 0; i < 8; i++){
    for ( j = 0; j < 8; j++){
      board[i][j] = "-";
    }
  }
  
  // displaying the board
  
  for (i = 0; i < 8; i++){
    for (j = 0; j < 8; j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  
  int knight_x, knight_y;
  cin >> knight_x >> knight_y;
  if (knight_x <= 8 && knight_y <= 8){
    board[knight_x - 1][knight_y - 1] = "K";
    int valid_steps = 0;
    knight_x -= 1;
    knight_y -= 1;
    if (knight_x - 2 >= 0 && knight_y - 1 >= 0){
      board[knight_x - 2][knight_y - 1] = "*";
      valid_steps += 1;
    }
    if (knight_x - 2 >= 0 && knight_y + 1 < 8){
      valid_steps += 1;
      board[knight_x - 2][knight_y + 1] = "*";
    }
    if (knight_x - 1 >= 0 && knight_y - 2 >= 0){
      board[knight_x - 1][knight_y - 2] = "*";
      valid_steps += 1;
    }
    if (knight_x - 1 >= 0 && knight_y + 2 < 8){
      board[knight_x - 1][knight_y + 2] = "*";
      valid_steps += 1;
    }
    if (knight_x + 1 < 8 && knight_y - 2 >= 0){
      board[knight_x + 1][knight_y - 2] = "*";
      valid_steps += 1;
    }
    if (knight_x + 1 < 8 && knight_y + 2 < 8){
      board[knight_x + 1][knight_y + 2] = "*";
      valid_steps += 1;
    }
    if (knight_x + 2 < 8 && knight_y - 1 >= 0){
      board[knight_x + 2][knight_y - 1] = "*";
      valid_steps += 1;
    }
    if (knight_x + 2 < 8 && knight_y + 1 < 8){
      board[knight_x + 2][knight_y + 1] = "*";
      valid_steps += 1;
    }
    cout << "Number of Valid Steps are : " << valid_steps << endl;
    cout << "Board : " << endl;
    for (i = 0; i < 8; i++){
      for (j = 0; j < 8; j++){
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
  }
  else{
    cout << "Position of Knight is outside the board !!" << endl;
  }
}
