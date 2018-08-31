bool isPalindrome(int x) {
    int m;
    int sum = 0;
    m = x;
    while(m){
        sum = sum*10 + m%10;
        m /= 10; 
    }
    if( sum == x && x >= 0){
        return true;
    }
    else{
        return false;
    }
    
}
