int countDigits(int n){
	// Write your code here.
		int dig =n;
		int c =0;

		while(n!=0){
			int rem = n%10;

			if(rem!=0 && dig%rem==0)
			c++;
			n/=10;
		}
		return c;
}
