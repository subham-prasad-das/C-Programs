// Returning Structures by Reference: 

#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point *createPoint() {
    static struct Point p = {100, 200};
    return &p;
}

int main() {
    struct Point *point = createPoint();
    printf("Returned by reference: x = %d, y = %d\n", point->x, point->y);
    return 0;
}
