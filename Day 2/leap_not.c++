#include <iostream>
using namespace std;
int main()
{

   int y;
   cin >> y;

   if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
   {

      cout << "Leap year";
   }
   else
   {
      cout << "Not a leap year";
   }
   return 0;
}

/* if year is divisible by 4 equlas to 0, not divisible by 100 = 0 orr unless its is divisible by 400 equals to 0*/