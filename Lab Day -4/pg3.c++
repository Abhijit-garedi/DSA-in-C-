#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int v[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int largest = INT_MIN;
    int SecLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (v[i] > largest) {
            SecLargest = largest;
            largest = v[i];
        }
        else if (v[i] > SecLargest && v[i] != largest) {
            SecLargest = v[i];
        }
    }

    if (SecLargest == INT_MIN) {
        cout << "No second largest element exists.";
    } else {
        cout << "Largest: " << largest << ", Second Largest: " << SecLargest;
    }

    return 0;
}


/* output
Enter the size of array: 6
Enter 6 elements: 1 2 3 4 90 7
Largest: 90, Second Largest: 7%
*/