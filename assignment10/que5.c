#include <stdio.h>

int count_ones(unsigned char byte) {
    int count = 0;
    while (byte) {
        count += byte & 1;  
        byte >>= 1;      
    }
    return count;
}

unsigned char check_and_set_parity(unsigned char byte) {
    int ones_count = count_ones(byte);
    if(ones_count%2 ==0){
        return byte;
        } 
	else {
        return byte | 0x80;  
    }
}

int main() {
    unsigned char byte;


    printf("Enter a byte (0 to 255): ");
    scanf("%hhu", &byte);


    unsigned char adjusted_byte = check_and_set_parity(byte);


    printf("Original byte: 0x%02X\n", byte);
    printf("Adjusted byte: 0x%02X\n", adjusted_byte);

    return 0;
}

