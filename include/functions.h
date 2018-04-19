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
bool row_check(int board[][9], int x, int y);

/*****************************************************************
Checks if placed number already exist in colom
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool col_check(int board[][9], int x, int y);

/*****************************************************************
Checks if placed number already exist in row
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool chunk_check(int board[][9], int x, int y);

/*****************************************************************
Attemps to place number in sudoku board
@param board representiaon of sudoku board
@param x colom that number was placed
@param y row that number was placed
@return boolean true/false based on if number has been placed
*****************************************************************/
bool insert(int board[][9], int x, int y);
