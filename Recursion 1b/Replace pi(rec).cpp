/*Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14*/

// Change in the given string itself. So no need to return or print anything
#include <cstring>

void helper(char input[],int start){
    
    if(input[start]=='\0' || input[start+1]=='\0'){
        
        return;
        
    }
    
    helper(input,start+1);
    
    if(input[start]=='p' && input[start+1]=='i'){
        
        for(int i=strlen(input);i>=start+2;i--){
            input[i+2]=input[i];
        }
        
        input[start]='3';
        input[start+1]='.';
        input[start+2]='1';
        input[start+3]='4';
    }
    
    
    
}
void replacePi(char input[]) {
	// Write your code here
    
    //int size=stren(input)-1;
    
    return helper(input,0);

}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
