// program to reverse an array elements
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, num;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
