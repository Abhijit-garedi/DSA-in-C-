/* 

MIN MAx array problem 

input arr[]=[3, 2, 1, 56, 10000, 167]
outptu:  1 10000


approach


*/

#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] < minVal) minVal = arr[i];
        if(arr[i] > maxVal) maxVal = arr[i];
    }

    cout << minVal << " " << maxVal << endl;
    return 0;
}
