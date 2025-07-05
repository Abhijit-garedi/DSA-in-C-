// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string str) {
        // Code here
        int n = str.length() ;
        int zero = 0 , one = 0 , two = 0 ;
        int ans = n+1 ;
        
int i = 0 , j = 0 ;
        while( j < n ){
            if( str[j] == '0' )
                zero++ ;
else if( str[j] == '1' )
                one++ ;
            else 
                two++ ;

            
                    while( zero > 0 && one > 0 && two > 0 ){
                ans = min( ans , j-i+1 ) ;
                
                // contract the window 
                          if( str[i] == '0' )
                    zero-- ;
                else if( str[i] == '1' )
                    one-- ;
                else
                    two-- ;
                
                // Contract the window -> so increase ith pointer
                i++ ;
            }
            // The window is not invalid 
            // so expand the window
            j++ ;
        }
        
        // If answer remains unchanged then return -1 
        if( ans == n+1 )
            return -1 ;
        
        return ans ;
    }
};
