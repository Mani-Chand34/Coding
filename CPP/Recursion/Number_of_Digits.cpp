#include<iostream>
using namespace std;

int count(int n){
    static int i=0;
    if(n == 0) return 1;
    int smallAns = count(n / 10);
    i++;
    cout << i << endl;
    return i;
}

int main(){
    int n;
    cin >> n;
    int out = count(n);
    cout << out << endl;
    return 0;
}