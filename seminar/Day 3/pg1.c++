/*find the first occurance of a number in an unsorted array
  n=6. 2 3 7 4 7 6. op 2,
k=7*/

#include <iostream>
using namespace std;

int main()
{
   int n; // Input array size
   cin >> n;

   int arr[n];

   // Input array elements
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   int k; // number to count
   cin >> k;

   int count = 0;

   // Count how many times k appears in array
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == k)
      {
         count++;
      }
   }

   // Print the count
   cout << count;

   return 0;
}

/* OUTPUT
6
2 3 4 5 4 6
4
2% */
