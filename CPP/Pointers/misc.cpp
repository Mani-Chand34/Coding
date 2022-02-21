#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // int i = 10;
    // int *p = &i;
    // int **pt = &p;
    // cout << *pt << endl;
    // cout << (*pt)++ << endl;
    // cout << *pt << endl;
    // cout << p << endl;

    int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
    return 0;
}