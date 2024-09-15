#include <stdio.h>

int main() {
    int num, factorial = 1;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    printf("Factorial of %d: ", num);
    for (int i = 1; i <= num; i++) {
        factorial *= i;
        printf("%d", i);
        if (i < num) {
            printf(" * ");
        }
    }


    printf(" = %d\n", factorial);

    return 0;
}

