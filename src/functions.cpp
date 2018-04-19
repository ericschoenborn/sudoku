#include "functions.h"
#include <iostream>

/*****************************************************************
 Solves Sudoku's

@author Eric Schoenborn
@version Winter 2007
*****************************************************************/

/*****************************************************************
Checks if placed number already exist in row
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool row_check(int board[][9], int x, int y){
   int value = board[x][y];
   int i=0;
   while(i<9){
      if(board[x][i] == value && i!=y){
         return false;
      }
      i=i+1;
   }
   return true;
}

/*****************************************************************
Checks if placed number already exist in colom
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool col_check(int board[][9], int x, int y){
   int value = board[x][y];
   int i=0;
   while(i<9){
      if(board[i][y] == value && i!=x){
         return false;
      }
      i=i+1;
   }
   return true;
}

/*****************************************************************
Checks if placed number already exist in row
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool chunk_check(int board[][9], int x, int y){
   int value = board[x][y];
   int i;
   int j;
	
   if(x<3){
      i=0;
   }else if(x<6){
      i=3;
   }else{
      i=6;
   }	
   if(y<3){
      j=0;
   }else if(y<6){
      j=3;
   }else{
      j=6;
   }
   for(int n=0; n<3; n++){
      for(int m=0; m<3; m++){
         if( board[i+n][j+m] == value && x!=i+n && y!=j+m){
	    return false;
	 }
      }
   }	
   return true;
}

/*****************************************************************
Attemps to place a number in the sudoku board
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool insert(int board[][9], int x, int y){
   int next_x=0;
   int next_y=0;
   bool search = true;
   int poss[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
      for(int i =0; i<9; i++){
         board[x][y]=poss[i];
	 if(row_check(board, x, y)){
	    if(col_check(board, x, y) ){
	       if(chunk_check(board, x, y)){
	          while(search){
		     if(y + next_y == 8){
		        if(x+next_x == 8){
			   return true;
			      }else{
				 next_x = next_x + 1;
			         next_y = y * -1;
			      }
                     }else{
		        next_y = next_y + 1;
		     }
		  if(board[x+next_x][y+next_y]==0){
		     search=false;
		  }
	       }
	       if(insert(board, x+next_x, y+next_y)){
	          return true;
               }
	    }
         }
      }
      if( i==8){
         board[x][y] =0;
         return false;
      }
   }
	
   return true;
}
 	
