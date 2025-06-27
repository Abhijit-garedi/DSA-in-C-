/*  program 1

input and output 2d array 

its a 3*3 matrix 
 1 2 3 
 3 4 5
 6 7 8    

 approach for the program 
 int mat[n][m] 

 n is 3 
 m is 3 
 */


 #include <iostream>
 using namespace std;
 int main(){

   int n, m;
   cin>>n>>m;

   int arr[n][m];

   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){

         cin>>arr[i][j];
      }
   }

   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cout<<arr[i][j];
      }
   }
   return 0;
 }

 /* OUTPUT
 3 3
1 2 3 
4 5 6 
7 8 9
123456789%   
*/