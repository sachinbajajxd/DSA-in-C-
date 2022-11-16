/*Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false*/

#include <string.h>

bool function(char input[],int i,int j){
    
    
    if(i>=j){
        return true;
    }
    
    
    
    if(input[i]!=input[j]){
        return false;
    }
    
    
    bool ans=function(input,i+1,j-1);
    return ans;
}




bool checkPalindrome(char input[]) {
    // Write your code here
    int start=0;
    int end=strlen(input)-1;
    
    
  return function(input,start,end);
    
}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}