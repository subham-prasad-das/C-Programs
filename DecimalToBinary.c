#include<stdio.h>
#include<math.h>

int main(){

    long long int n; scanf("%lld", &n);

    // logic
    long long int bin = 0;
    int count = 0;
    while(n){
        int rem = n % 10;
        bin += rem * pow(2, count);
        n /= 10;
        count++;
    }
    printf("%d", bin);
    return 0;

}