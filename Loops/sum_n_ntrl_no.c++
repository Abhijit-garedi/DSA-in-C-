// WAPP to find the sum of first N natural Number .

#include <iostream>
using namespace std;
int main()
{

   int n, sum;
   cin >> n;

   sum = (n * (n + 1) / 2);

   cout << " sum is " << sum;

   return 0;
}