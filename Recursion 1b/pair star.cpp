/*Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a*/

#include<cstring>

void helper(char input[],int end){
    
    int start=0;
    
    if(end==0){
        return;
    }
    
    if(input[start]==input[start+1]){
        
        for(int i=end;i>0;i--){
            input[i+1]=input[i];
            //input[i]='*';
        }
        input[start+1]='*';
        end=end+1;
        
    }
    return helper(input+1,end-1);

}
void pairStar(char input[]) {
    // Write your code here
    
    int end= strlen(input);
    
    return helper(input,end);

}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
