/* program to find the boolean and geeks for geeks problem
step 1: find the frequency array of s1
2. decrement the frequency  */

#include <iostream>
#include <limits>
using namespace std;
int main(){


   int string1;
   int string2;

   if(s1.lenght(). != s2.lenght()){
      return false;
   }

   int freq[26] = {0};

   for(int i=0; i<s1.lenght(); i++){
      freq[s1[i] - 'a']++;
      freq[s2[i] - 'a']--;
   }

}


/* sir solution for geeksforgeeks problem 


int freq[]=new int[26];

for(inti=0; i<s1.lenght(); i++){
int index = s1[i] - 'a';
cout<<index<<endl;
freq[index]++;
}

for(int i=0; i<s2.lenght(); i++){
int index = s2[i]-'a';
freq[index]--;
}


// check if we hav eany non zero frequencey in the frequency array

for (int i=0; i<26; i++){
if(frq[i]!=0)
return false;
}


*/