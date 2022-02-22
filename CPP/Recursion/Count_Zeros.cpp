
int countZeros(int n) {
    // Write your code here
    static int i=0;
	if(n==0) return 1;
    if(n%10==0) i++;
    int ans = countZeros(n/10);
    return i;
}
