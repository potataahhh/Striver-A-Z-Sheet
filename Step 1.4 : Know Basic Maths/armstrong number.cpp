// convert the integer into strings
// do the operation on the string while its not equal to 0
// check if our result is equal to the original number
// return true if it matches else return false;


bool checkArmstrong(int n){
	//Write your code here

	string len=to_string(n);
	int arm =n;
	int res=0;
	int l = len.length();
	while(arm){
		int dig=arm%10;
		res= res+pow(dig,l);
		arm/=10;
	}

	if(res==n){
		return true;
	}
		return false;
}
