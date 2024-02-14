//  passing a structure by reference

#include <stdio.h>

struct Point {
    int x;
    int y;
};

void modifyStructByReference(struct Point *p) {
    p->x = 100;
    p->y = 200;
    printf("Inside the function (by reference): x = %d, y = %d\n", p->x, p->y);
}

int main() {
    struct Point point = {10, 20};
    modifyStructByReference(&point);
    printf("Outside the function (by reference): x = %d, y = %d\n", point.x, point.y);
    return 0;
}
