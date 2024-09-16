#include <stdio.h>


int count_ones(int num) {
    int count = 0; 


    while (num) {

        count += num & 1;
        

        num >>= 1;
    }

    return count;
}

int main() {
    int number;


    printf("Enter an integer: ");
    scanf("%d", &number);


    int result = count_ones(number);
    printf("Number of '1' bits in %d is %d\n", number, result);

    return 0;
}

