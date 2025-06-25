#include <iostream>
using namespace std;

int main()
{
   int num, i, flag = 0;
   cin >> num;

   if (num <= 1)
      flag = 1;

   for (i = 2; i * i <= num; i++)
   {
      if (num % i == 0)
      {
         flag = 1;
         break;
      }
   }

   if (flag == 0)
      cout << "Prime";
   else
      cout << "Not Prime";

   return 0;
}
