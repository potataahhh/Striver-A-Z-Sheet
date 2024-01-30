bool palindrome(int n)
{
    // Write your code here
    int ori = n;
    int res =0;

    while(n!=0){
        int dig = n%10;
        res = res*10+dig;
        n/=10;
    }

    if(ori==res){
         return true;
    }
    else{
        return false;
    }
    
}
