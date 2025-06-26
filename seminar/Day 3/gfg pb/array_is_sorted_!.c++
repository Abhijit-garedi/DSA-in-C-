/* check if the array is sorted or not
 https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

 n = 5
 2 3 4 5 6
logic arr[i]<arr[i+1]

 */
class Solution
{
public:
   bool arraySortedOrNot(vector<int> &arr)
   {

      int n = arr.size();
      bool ans = true;

      for (int i = 0; i < n - 1; i++)
      {
         if (arr[i] > arr[i + 1])
         {
            // ans = false;
            return false;
            break;
         }
      }

      return true;
      // return ans;
   }
};