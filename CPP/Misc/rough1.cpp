#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int k;
        cin >> k;
        int x;
        cin >> x;
        for(int i=0;i<n;i++) cin >> arr[i];


        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++){
            while (i < n - 1 && arr[i] == arr[i + 1]){
                i++;
            }
            count++;
        }
        int diff = count - k;
        cout << diff * x << endl;
    }
    return 0;
}