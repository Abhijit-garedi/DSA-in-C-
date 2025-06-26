/* find the last occurance in an usorted array */

#include <iostream>
using namespace std;
int main()
{

   int n;
   cin >> n;

   int arr[n];

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   int k;
   cin >> k;
   int ans = -1;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == k)
      {
         ans = i;
      }
   }

   cout << ans;
   return 0;
}

/* OUTPUT
5
2 3 4 4 6
4
3   */