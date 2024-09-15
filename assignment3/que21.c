#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1; 
    if (num % 2 == 0) return 0;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int input, count = 0, num;


    printf("Enter a number: ");
    scanf("%d", &input);


    num = input + 1;

    printf("First 5 prime numbers after %d are:\n", input);
    while (count < 5) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}

