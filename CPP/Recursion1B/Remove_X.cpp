#include<bits/stdc++.h>
using namespace std;
// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
	int s = strlen(input);
    for(int i=0;i<s;i++) if(input[i]=='x') input[i]=' ';
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
