#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size == 0) return -1;
    static int i=0;
    if(size == 1 and input[0]==x) return 0;
    if(input[i]==x) return i;
    int out = firstIndex(input+1,size-1,x);
    if(out==-1) return out;
    else return out+1;
}

int main() {
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int res = firstIndex(arr,n,x);
    cout << res << endl;
}