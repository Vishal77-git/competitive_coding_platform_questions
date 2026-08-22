bool checkDivisibility(int n) {
    int sum = 0, prod = 1;
    int dummy = n;
    while(dummy != 0){
        int ld = dummy % 10;
        sum += ld;
        prod *= ld;
        dummy /= 10;
    }
    int total = sum + prod;
    return (n % total == 0);
}