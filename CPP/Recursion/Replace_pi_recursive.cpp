#include<bits/stdc++.h>
using namespace std;
// Change in the given string itself. So no need to return or print anything
#include<string.h>
void replacePi(char input[]) {
	// Write your code here
	if(input[0]=='\0') return;
    if(input[0]=='p' and input[1]=='i'){
        input[0] = '3',input[1]='.';
        int s = strlen(input);
        for(int i=s+2;i>1;i--) input[i] = input[i-2];
        input[2]='1',input[3]='4';
    }
    replacePi(input+1);
}


int main() {
    char input[100];
    cin.getline(input, 100);
    replacePi(input);
    cout << input << endl;
}


