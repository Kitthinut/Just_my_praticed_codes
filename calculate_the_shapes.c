#include <stdio.h>

int main(){
    
//rectangle calculator
    
    int height, width;
    
    printf("Input height (metre): ");
    scanf("%d", &height);
    printf("Input width (metre): ");
    scanf("%d", &width);
    
    int area, perimeter;
    
    area = height * width;
    perimeter = height + width;
    printf("Perimeter of the rectangle = %d m.\n", perimeter);
    printf("Area of the rectangle = %d m^2.\n", area);
printf("---------------------------------------------------------------------\n");
    
//square calculator
    
    int length;
    
    printf("Input 1 side length (metre): ");
    scanf("%d", &length);
    
    area = length * length;
    perimeter = 4 * length;
    printf("Perimeter of the square = %d m.\n", perimeter);
    printf("Area of the square = %d m^2\n", area);
printf("---------------------------------------------------------------------\n");

//circle calculator

    float rad;
    printf("Input radius (metre): ");
    scanf("%f", &rad);
    
    float area_c, perimeter_c;
    area_c = 3.14 * rad * rad;
    perimeter_c = 2 * 3.14 * rad;
    printf("Perimeter of the circle = %.2f m.\n m.", perimeter_c);
    printf("Area of the circle = %.2f m^2\n m^2", area_c);
printf("----------------------------------------------------------------\n");
    
//triangle calculator

    int base, perp;
    printf("Input base (metre): ");
    scanf("%d", &base);
    printf("Input height (metre): ");
    scanf("%d", &height);
    printf("Input perpendicular side (metre): ");
    scanf("%d", &perp);
    
    
    area = 0.5 * height * base;
    perimeter = perp + height + base;
    printf("Perimeter of the triangle = %d\n m.", perimeter);
    printf("Area of the triangle = %d\n m^2", area);
    
    return 0;
}
