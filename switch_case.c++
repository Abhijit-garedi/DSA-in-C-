#include <iostream>

using namespace std;
int main()
{

   char x;
   cin >> x;

   // switch statement with three cases

   switch (x)
   {

   case 'A':
      cout << "Sunday";
      break;

   case 'B':
      cout << "Monday";
      break;

   case 'C':
      cout << " Tuesday";
      break;

   case 'D':
      cout << "Wednesday";
      break;

   case 'E':
      cout << "Thursday";
      break;

   case 'F':
      cout << "Friday";
      break;

   case 'G':
      cout << "Saturday";
      break;

   default:
      cout << " entered wrong case ";
   }
   return 0;
}
