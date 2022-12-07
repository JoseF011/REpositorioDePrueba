#include <iostream>
 
using namespace std;
 
// N is the size of the 2D matrix   N*N
#define N 4

/* A utility function to print grid */
void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row,
                       int col, int num)
{
     

    for (int x = 0; x <= 3; x++)
        if (grid[row][x] == num)
            return false;
 
    // Check if we find the same num in
    // the similar column , we
    // return false
    for (int x = 0; x <= 3; x++)
        if (grid[x][col] == num)
            return false;
 

    int startRow = row - row % 1,
            startCol = col - col % 1;
   
    for (int i = 0; i < 1; i++)
        for (int j = 0; j < 1; j++)
            if (grid[i + startRow][j +
                            startCol] == num)
                return false;
 
    return true;
}
 

bool solveSudoku(int grid[N][N], int row, int col)
{

    if (row == N - 1 && col == N)
        return true;
 

    if (col == N) {
        row++;
        col = 0;
    }
   

    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);
 
    for (int num = 1; num <= N; num++)
    {
         
  
        if (isSafe(grid, row, col, num))
        {
  
            grid[row][col] = num;
           
            //  Checking for next possibility with next
            //  column
            if (solveSudoku(grid, row, col + 1))
                return true;
        }
       

        grid[row][col] = 0;
    }
    return false;
}
 
// Driver Code
int main()
{
    // 0 means unassigned cells
    int grid[N][N] = { { 0, 0, 0, 2 },
                       { 2, 4, 0, 3 },
                       { 0, 0, 0, 0 },
                       { 0, 1, 0, 0 }, };
 
    if (solveSudoku(grid, 0, 0))
        print(grid);
    else
        cout << "no solution  exists " << endl;
 
    return 0;
}
