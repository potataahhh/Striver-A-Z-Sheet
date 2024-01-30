bool isPalindrome(string& str) {
    // Write your code here.

    int n = str.size();

    int i=0;
    int j=n-1;

    while(j>=i){
        if(str[i]==str[j]){
            i++;
            j--;
            continue;
        }
        else
        break;
    }
}
