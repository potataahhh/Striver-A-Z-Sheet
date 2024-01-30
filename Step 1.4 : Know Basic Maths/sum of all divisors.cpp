int sumOfAllDivisors(int n){
	// Write your code here.	

	int sum=0;

	for(int i=1;i<=n;i++){
		sum+=(n/i)*i;
	}
	return sum;
}
