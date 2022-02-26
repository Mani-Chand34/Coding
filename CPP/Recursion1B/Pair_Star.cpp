#include<string.h>
void pairStar(char input[]) {
    // Write your code here
    int s = strlen(input);
    if(input[0] == '\0'){
    return ;
}
if(input[0] == input[1]){

    for(int i = s+1; i >= 2; i--){
        
   input[i] = input[i-1];
    }
    
    input[2] = input[1];
    input[1] = '*';
}
pairStar(input+1);
}

#include <iostream>
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
