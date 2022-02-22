#include <bits/stdc++.h>
double geometricSum(int k) {
    // Write your code here
	if(k==0) return 1;
    static double i=0;
    i += 1/pow(2,k);
    double ans = geometricSum(k-1);
    return i+1;
}
