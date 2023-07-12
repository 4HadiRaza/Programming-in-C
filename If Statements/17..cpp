#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;
    float angle1, angle2, angle3;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    	
    angle1 = acos((side2*side2 + side3*side3 - side1*side1) / (2*side2*side3)) * (180/3.14159);
    angle2 = acos((side3*side3 + side1*side1 - side2*side2) / (2*side3*side1)) * (180/3.14159);
    angle3 = 180 - angle1 - angle2;
    
    if (angle1 + angle2 + angle3 == 180) {
        printf("The given sides can form a triangle.\n");
        printf("The angles of the triangle are %.2f, %.2f, and %.2f degrees.\n", angle1, angle2, angle3);
    }
    else {
        printf("The given sides cannot form a triangle.\n");
    }
    
    return 0;
}

