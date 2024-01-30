vector<string> printNTimes(int n) {
	// Write your code here.

	if(n==0){
	vector<string> str;
	return str;
	}

	vector<string> str = printNTimes(n-1);
	str.push_back("Coding Ninjas");
	return str;

}
