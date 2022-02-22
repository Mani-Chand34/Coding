#include<string.h>
bool checkPalindrome(char input[]) {
    // Write your code here
	static int i=0;
    int s = strlen(input);
    if(i>=s) return 1;
    if(input[i] == input[s-i-1]){
       	i++;
    	checkPalindrome(input);
    }else return 0;
}
