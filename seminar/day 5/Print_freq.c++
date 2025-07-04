/* take input in a string and print freq of every character 

s1 = " abdeafc"
0utput
a-> 2  d -> 1
b -> 1 e ->1
c -> 1 f ->1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    cin>>s1; 
    
    int freq[26] = {0};
    
    
    for (char c:s1) {
        freq[c-'a']++;
    }
    
    for (int i=0; i<26; i++) {
        if (freq[i] > 0) {
            cout << (char)(i + 'a') << " -> " << freq[i] << endl;
        }
    }
    
    return 0;
}