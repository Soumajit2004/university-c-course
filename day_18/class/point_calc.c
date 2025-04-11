#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int add_points(Point p1, Point p2) {
    return p1.x + p2.x + p1.y + p2.y;
}

int main() {
    Point point1, point2;

    printf("Enter x and y for point 1: ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter x and y for point 2: ");
    scanf("%d %d", &point2.x, &point2.y);

    int sum = add_points(point1, point2);
    printf("Sum of x and y coordinates: %d\n", sum);

    return 0;
}