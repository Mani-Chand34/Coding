#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size == 0) return false;
    if(size == 1 and input[0]==x) return true;
    if(input[size-1]==x) return true;
    int out = checkNumber(input,size-1,x);
    if(out) return true;
    else return false;
}

int main() {
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    bool res = checkNumber(arr,n,x);
    cout << res << endl;
}