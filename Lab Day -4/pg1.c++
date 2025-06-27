/* program general approach 
input 
the first line contains an integer n

the second line contains n-1 nmbers. each number is distinct and between 1 and n ( inclusive)

output 
print the missing nubmer 

constraints 
2 <= n <=2.10^5
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long total = 1LL * n * (n + 1) / 2;
    long long sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        int num;
        cin >> num;
        sum += num;
    }

    cout << (total - sum) << endl;
    return 0;
}


/* 
vector<int>v(n-1);


for(inti=0; i<n; i++){
cin >> v[i]
}
int sum = 0;
for(int i=0; i<n-1; i++){
sum += v[i];
}
int totalSum = n*(n+1)/2;

cout << totalSum - sum;
*/