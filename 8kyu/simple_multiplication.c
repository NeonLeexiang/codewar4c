int simple_multiplication(int number) {
    // your code
    int jud = number%2;
    int ret;
    if(jud == 0){
        ret = number*8;
    }
    else{
        ret = number*9;
    }
    return ret;
}


/*
int simple_multiplication(int a) {
    return a * (a % 2 == 0 ? 8 : 9);
}
*/


/*
int simple_multiplication(int n) {
    return !(n%2)?n*8:n*9;
}
*/
