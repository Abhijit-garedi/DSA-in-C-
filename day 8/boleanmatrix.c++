/*  boolean matrix 
class problem: approach 
1. identify which row and ocl needs to be changed(for optimal solution)
2. convert mat[i][j] to 1, if row[i] == true.
 
 */
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
};
