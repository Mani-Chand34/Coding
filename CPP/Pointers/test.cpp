#include <iostream>
using namespace std;

// int firstIndex(int input[], int size, int x) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
//     if(size == 0) return -1;
//     if(input[0]==x) return 0;
//     int out = firstIndex(input+1,size-1,x);
//     if(out==-1) return out;
//     else return out+1;
// }

int lastIndex(int input[],int size,int x){
  if(size==0) return -1;
  int ans = lastIndex(input+1,size-1,x);
  if(ans!=-1) return ans + 1;
  if(input[0] == x) return 0;
  else return -1; 
}

// int firstIndex(int input[], int size, int x) {
//    if(size == 0) { return -1; } 
//    if(input[0] == x) { return 0; } 
//    int ans = firstIndex(input + 1, size - 1, x); 
//    if(ans != -1) { return ans + 1; } else { return ans; } 
// }

int main() {
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    // int res = firstIndex(arr,n,x);
    int last = lastIndex(arr,n,x);
    cout << last << endl;
}