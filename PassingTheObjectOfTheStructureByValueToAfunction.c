// passing the elements of the structure to the function by value 

#include <stdio.h>

struct Point {
    int x;
    int y;
};

void modifyStructByValue(struct Point p) {
    p.x = 100;
    p.y = 200;
    printf("Inside the function (by value): x = %d, y = %d\n", p.x, p.y);
}

int main() {
    struct Point p = {10, 20};
    modifyStructByValue(p);
    printf("Outside the function (by value): x = %d, y = %d\n", p.x, p.y);
    return 0;
}
