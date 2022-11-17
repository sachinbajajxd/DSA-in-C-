/*Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 < |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231*/

#include <cstring>
#include<cmath>
int helper(char input[], int size){
    
    
    int start=input[0];
    start=start-48;
    
    if(size==1){
        return start;
    }
    
    
    
    int ans = start*pow(10,size-1)+helper(input+1,size-1);
    
    
    return ans;
    
    
    


}


int stringToNumber(char input[]) {
    // Write your code here
    
    int size = strlen(input);
    
    return helper(input,size);

}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}