int sumOfDigits(int n) {
    // Write your code here
    static int sum=0;
	if(n==0) return 0;
    sum += n%10;
    int ans = sumOfDigits(n/10);
    return sum;
}
