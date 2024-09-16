#include <stdio.h>

void swap_using_xor(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;  
        *b = *a ^ *b;  
        *a = *a ^ *b;  
    }
}

int main() {
    int x, y;


    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);


    printf("Original values: x = %d, y = %d\n", x, y);


    swap_using_xor(&x, &y);


    printf("Swapped values: x = %d, y = %d\n", x, y);

    return 0;
}

