#include <stdio.h>

// Function to calculate area of a circle
float area_circle(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate circumference of a circle
float circumference_circle(float radius) {
    return 2 * 3.14 * radius;
}

// Function to calculate area of a rectangle
float area_rectangle(float length, float width) {
    return length * width;
}

// Function to calculate perimeter of a rectangle
float perimeter_rectangle(float length, float width) {
    return 2 * (length + width);
}

// Function to calculate area of a triangle
float area_triangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate perimeter of a triangle
float perimeter_triangle(float a, float b, float c) {
    return a + b + c;
}

int main() {
    int choice;
    float radius, length, width, base, height, a, b, c;

    printf("Welcome to Mensuration Calculator\n");
    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            if (radius <= 0) {
                printf("Invalid input. Radius must be positive.\n");
                return 1;
            }
            printf("Area of Circle: %.2f\n", area_circle(radius));
            printf("Circumference of Circle: %.2f\n", circumference_circle(radius));
            break;

        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            if (length <= 0 || width <= 0) {
                printf("Invalid input. Length and width must be positive.\n");
                return 1;
            }
            printf("Area of Rectangle: %.2f\n", area_rectangle(length, width));
            printf("Perimeter of Rectangle: %.2f\n", perimeter_rectangle(length, width));
            break;

        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            printf("Enter side a: ");
            scanf("%f", &a);
            printf("Enter side b: ");
            scanf("%f", &b);
            printf("Enter side c: ");
            scanf("%f", &c);
            if (base <= 0 || height <= 0 || a <= 0 || b <= 0 || c <= 0) {
                printf("Invalid input. All values must be positive.\n");
                return 1;
            }
            printf("Area of Triangle: %.2f\n", area_triangle(base, height));
            printf("Perimeter of Triangle: %.2f\n", perimeter_triangle(a, b, c));
            break;

        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
    }

    return 0;
}
