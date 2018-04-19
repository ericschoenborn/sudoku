#include <iostream>
#include "functions.h"

/*****************************************************************
 Solves Sudoku's

@author Eric Schoenborn
@version Winter 2007
*****************************************************************/

/*****************************************************************
Main function, creates board and calls helper funtions
*****************************************************************/
int main(){
	
   //representation of sudoku board
   int board[9][9] = {{ 0, 3, 0, 0, 0, 0, 0, 2, 0 },
		      { 0, 9, 0, 0, 0, 0, 0, 8, 5 },
		      { 5, 0, 0, 0, 8, 0, 4, 0, 0 },
		      { 4, 0, 7, 2, 0, 6, 8, 9, 0 },
	              { 0, 1, 0, 0, 7, 0, 0, 5, 0 },
		      { 0, 8, 9, 5, 0, 1, 3, 0, 2 },
		      { 0, 0, 3, 0, 1, 0, 0, 0, 9 },
		      { 9, 4, 0, 0, 0, 0, 0, 1, 0 },
	              { 0, 7, 0, 0, 0, 0, 0, 3, 0 }
		     };

   if(insert(board, 0, 0)){
      std::cout << "Solved" << std::endl;
   }else{
      std::cout << "Un-Solveable" << std::endl;
   }

   for(int i=0; i< 9; i++){
      for(int j=0; j< 9; j++){
         std::cout << board[i][j] << " ";
      }
      std::cout << std::endl;
   }
}
