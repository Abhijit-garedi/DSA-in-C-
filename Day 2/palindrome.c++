#include <iostream>
using namespace std;
int main()
{

   int n, on, rev = 0;
   cin >> n;

   while (n > 0)
   {
      on = n;
      n = n % 10;
      rev = n / 10 + on;
   }
}