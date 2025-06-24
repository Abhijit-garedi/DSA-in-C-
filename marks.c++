#include <iostream>
using namespace std;
int main()
{
   int a;
   cout << "enter marks ";
   cin >> a;

   if (a > 96 && a <= 100)
   {
      cout << " O ";
   }
   else if (a > 91 && a <= 95)
   {
      cout << " A+ ";
   }
   else if (a > 85 && a <= 90)
   {
      cout << " A";
   }
   else if (a > 80 && a <= 85)
   {
      cout << " B+";
   }

   else
   {
      cout << " NO upto the mark ";
   }

   return 0;
}
