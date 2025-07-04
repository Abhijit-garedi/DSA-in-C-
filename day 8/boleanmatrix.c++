/*  boolean matrix 
class problem: approach 
1. identify which row and ocl needs to be changed(for optimal solution)
2. convert mat[i][j] to 1, if row[i] == true.
 
  PROGRAM METHOD 1:

class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int n = mat.size() ;
        int m = mat[0].size() ;
        
        vector<bool> row(n) ;
        for( int i = 0 ; i < n ; i++ )
            row[i] = false ;
        vector<bool> col(n) ;
        for( int i = 0 ; i < m ; i++ )
            col[i] = false ;
        
        // 2. Identify which row and col needs to be 
        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < n ; j++ ){
                if( mat[i][j] == 1 ){
                    row[i] = true ;
                    col[j] = true ;
                }
            }
        }
        
        // 3. Converting mat[i][j] to 1, if row[i] == true 
        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < m ; j++ ){
                if( row[i] == true || col[j] == true )
                    mat[i][j] = 1 ;
            }
        }
        
        
    }
}; */

// PROGRAM METHOD 2:



class Solution {
  public:
    // Function to modify the matrix such that if a matrix cell matrix[i][j]
    // is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int>>& mat) {
        // 1. First_row and first_col 
        bool first_row = false ;
        bool first_col = false ;
        
        int row = mat.size() ;
        int col = mat[0].size() ;
        
        // Iterating over the first row 
        for( int i = 0 ; i < col ; i++ )
            if( mat[0][i] == 1 ){
                first_row = true ;
                break ;
            }
        
        // Iterating over the first col
        for( int i = 0 ; i < row ; i++ ){
            if( mat[i][0] == 1 ){
                first_col = true ;
                break ;
            }
        }
        
        // 2. Find which row and col contains 1 
        for( int i = 1 ; i < row ; i++ ){
            for( int j = 1 ; j < col ; j++ ){
                if( mat[i][j] == 1 ){
                    mat[0][j] = 1 ;
                    mat[i][0] = 1 ;
                }
            }
        }
        
        // 3. Converting mat[i][j] to 1 
        for( int i = 1 ; i < row ; i++ ){
            for( int j = 1 ; j < col ; j++ ){
                if( mat[0][j] == 1 || mat[i][0] == 1 )
                    mat[i][j] = 1 ;
            }
        }
        
        // 4. Identifying input ones in the first wo and first col
        if( first_row ){
            for( int i = 0 ; i < col ; i++ )
                mat[0][i] = 1 ;
        }
        
        if( first_col ){
            for( int i = 0 ; i < row ; i++ )
                mat[i][0] = 1 ;
        }
        
        
        
        
        
        
    }
};












