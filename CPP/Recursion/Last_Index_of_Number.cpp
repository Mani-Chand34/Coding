#include <iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size == 0) return -1;
    static int i=0;
    static int res=-1;
    if(input[i]==x) res = i;
    int out = lastIndex(input+1,size-1,x);
    if(res==-1 and input[0]==x) return 0;
    else if(res==-1) return -1;
    else return res+1; 
}

int main() {
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int res = lastIndex(arr,n,x);
    cout << res << endl;
}