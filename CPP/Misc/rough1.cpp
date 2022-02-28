// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         int k;
//         cin >> k;
//         int x;
//         cin >> x;
//         for(int i=0;i<n;i++) cin >> arr[i];


//         sort(arr, arr + n);
//         int count = 0;
//         for (int i = 0; i < n; i++){
//             while (i < n - 1 && arr[i] == arr[i + 1]){
//                 i++;
//             }
//             count++;
//         }
//         int diff = count - k;
//         cout << diff * x << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int input1;
//     cin >> input1;
//     int input2[input1];
//     for(int i=0;i<input1;i++) cin >> input2[i];
//     int input3;
//     cin >> input3;
//     int input4[input3];
//     for(int i=0;i<input3;i++) cin >> input4[i];

//     int pair=0;
//     for(int i=0;i<input1;i++){
//         for(int j=0;j<input3;j++){
//             if(input2[i]<=input4[j]) pair++;
//         }
//     }
//     cout << pair << endl;
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int input1;
//     cin >> input1;
//     int input2;
//     cin >> input2;
//     int input3[input1];
//     for(int i=0;i<input1;i++) cin >> input3[i];
    
//     vector <int> v;
//     int c=0;
//     for (int i=0; i<input1; i++)
//     {
//         int j;
//         for (j=0; j<i; j++)
//            if (input3[i] == input3[j])
//                break;
//         if (i == j)
//           v.push_back(input3[i]);
//     }
//     for(int i=0;i<input1;i++){
//         int c = count(input3, input3 + input1, v[i]);
//         if(c>=input2) c++;
//     }
//     cout << c << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    int size1;
    cin >> size1;
    int input1[size1];
    for(int i=0;i<size1;i++) cin >> input1[i];
    int size2;
    cin >> size2;
    int input2[size2];
    for(int i=0;i<size2;i++) cin >> input2[i];

    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]) input2[j]=0,cout << input1[i] << endl;
        }
    }
    return 0;
}