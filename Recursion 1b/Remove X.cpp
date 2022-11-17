/*Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab*/

#include <string.h>

void helper(char input[],int size,int start){
    
    if(input[start]=='\0'){
        return;
    }
    
    helper(input,size,start+1);
    
    if(input[start]=='x'){
        
        for(int i=start;i<size;i++){
        
        input[i]=input[i+1];

    }
        size = size-1;
        
        
    }
    
}
void removeX(char input[]) {
    // Write your code here
    
    int size = strlen(input);
    
    
    
    return helper(input,size,0);

}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
