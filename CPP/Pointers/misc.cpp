#include <bits/stdc++.h>

using namespace std;

// int main(){
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);

//     // int i = 10;
//     // int *p = &i;
//     // int **pt = &p;
//     // cout << *pt << endl;
//     // cout << (*pt)++ << endl;
//     // cout << *pt << endl;
//     // cout << p << endl;

//     int a = 100;
//   int *p = &a;
//   int **q = &p;
//   int b = (**q)++;
//   int *r = *q;
//   (*r)++;
//   cout << a << " " << b << endl;
//     return 0;
// }

int first_index(int arr[],int size,int val,int real_size){

   

   if(size==0){

       return -1;

   }

   else if(*(arr)==val){

       return real_size-size+1;

   }

   int ans=first_index(arr+1,size-1,val,real_size);

   return ans;

}

int main(){

   int arr[7]={1,2,3,4,5,6,7};

   cout<<first_index(arr,7,4,7);

   return 0;

}