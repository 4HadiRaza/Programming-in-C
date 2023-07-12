#include <stdio.h>

int main() {
	
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;
    
    printf("Array of numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

