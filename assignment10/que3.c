#include <stdio.h>
#include <stdlib.h>


void display_binary(unsigned int num) {
    int i;
    int num_bits = sizeof(num) * 8; 

    printf("Binary representation: ");


    for (i = num_bits - 1; i >= 0; i--) {

        if ((num >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
        

        if (i % 4 == 0 && i != num_bits - 1) {
            printf(" ");
        }
    }
    
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return 1;
    }


    unsigned int number = strtoul(argv[1], NULL, 10);


    display_binary(number);

    return 0;
}

