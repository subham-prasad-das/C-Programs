// returning values from function through 'pass by value' method 

#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point createPoint() {
    struct Point p = {100, 200};
    return p;
}

int main() {
    struct Point point = createPoint();
    printf("Returned by value: x = %d, y = %d\n", point.x, point.y);
    return 0;
}
