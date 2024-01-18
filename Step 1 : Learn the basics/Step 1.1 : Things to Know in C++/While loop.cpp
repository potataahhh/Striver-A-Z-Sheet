#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int sumEven=0,sumOdd=0;

	while(n>0){
		int dig = n%10;

		if(dig%2==0){
			sumEven+=dig;
		}
		else{
			sumOdd+=dig;
		}
		n/=10;
	}

	cout<<sumEven<<" "<<sumOdd<<endl;
	return 0;
}
