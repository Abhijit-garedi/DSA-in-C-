/* program to add the row wise in 2d array*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m; 

    int arr[n][m];

  
    for (int i = 0; i < n; i++) { // taking input 
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

   
    for (int i = 0; i < n; i++) { // for row wise additon 
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += arr[j][i];
        }
        cout << "Sum of Row " <<i+1 << ": " << rowSum << endl;
    }

    for(int i=0; i<n; i++){ // for column wise addtion 
      int columnSum = 0; 
      for(int j=0; j<m; j++){
         columnSum += arr[n][m];
      }
      cout << " sum of column " << i + 1 <<": "<< columnSum<<endl;
    }

    return 0;
}
/* output 
3 3 
1 2 3
4 5 6
7 8 9
Sum of Row 1: 6
Sum of Row 2: 15
Sum of Row 3: 24
*/