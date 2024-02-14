// Program to find greater among three numbers. If two or three numbers are identical and greatest among all then print it only once.

#include<stdio.h>

int main(){

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // the logic
    if((a != b) && (b != c) && (c != a)){ // if every number is distinct
        if((a > b) && (a < c)) printf("%d is greatest", a);
        else if(b > c) printf("%d is the greatest", b);
        else printf("%d is the greatest", c);
    }
    else if((a == b) && (b != c)){ // if two numbers are same part 1
        if(b > c) printf("%d is greater", b);
        else printf("%d is greater", c);
    }
    else if((a != b) && (b == c)){ // if two numbers are same part 2
        if(b > a) printf("%d is greater", b);
        else printf("%d is greater", a);
    }
    else if((b != c) && (c == a)){ // if two numbers are same part 3
        if(b > c) printf("%d is greater", b);
        else printf("%d is greater", c);
    }
    else printf("All the numbers are equal");

    return 0;
}