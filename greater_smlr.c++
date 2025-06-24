/* #include <iostream>
using namespace std;

int main()
{
   int a = 5, b = 10, c = 7;
   int max;

   if (a > b)
   {
      if (a > c)
         max = a;
      else
         max = c;
   }
   else
   {
      if (b > c)
         max = b;
      else
         max = c;
   }

   cout << "Greatest number is: " << max << endl;
   return 0;
} */

#include <iostream>
using namespace std;
int main()
{
   int a;
   cout << "enter a ";
   cin >> a;

   if (a > 0)
   {
      cout << " given no is positive  ";
   }
   else if (a == 0)
   {
      cout << " given no is zero ";
   }
   else
   {
      cout << " give no is negative";
   }
   return 0;
}
