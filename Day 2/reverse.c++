#include <iostream>
using namespace std;

int main()
{
   int n, rev = 0;

   cout << "enter a number ";
   cin >> n;

   while (n != 0)
   {
      int digit = n % 10; //
      rev = rev * 10 + digit;
      n = n / 10;

      cout << "Reversed number is: " << rev << endl;
      return 0;
   }
}

/* suppose to find the rev of 123
first there will be some terms like n i.e number , digit the actual remainder of the no (n) after dividing from 10, reverse is initally 0 - later reverse is the actual remainder after dividing the n, */