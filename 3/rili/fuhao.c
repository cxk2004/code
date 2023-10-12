// filename: bit-observation.c
// author: Wei Liu, liuwei@hust.edu.cn
// usage: show the storage of a IEEE 32-bit float-point number

#include <stdio.h>

int main( void )
{
    // calculate the bitwidth of current type of foat
    unsigned int bitWidth = sizeof(float) * 8 ;
    printf("float size is %u bits\n", bitWidth);

    // utilize the union struct to visit the float type storage
    // data.intData and data.floatData share the same storage 
    union {
        unsigned int intData;
        float floatData;
    } data;

    printf("please input one float data:\n");
    scanf("%f", &data.floatData);
    printf("your input is %f\n", data.floatData );

    // utilize the bit calculation on integer type to show the memory
    printf("the storage is: ");
    unsigned int sign = data.intData & 0x80000000;

    // print the sign bit 
    printf("%c1.", ( sign == 0 ) ? '+' : '-' );

    // print the mantissa part
    unsigned int mantissa = (data.intData & 0x007FFFFF);
    unsigned int k, width = 23, bit, mask = 0x00400000;
    for ( k = 0; k < width; k ++ )
    {
        bit = mantissa & mask;
        bit >>= width - k - 1;
        printf("%c", ( bit == 1 ) ? '1' : '0');
        printf("%s", ( k % 4 == 3) ? " " : "" );
        mask >>= 1;
    }

    // print the exponent part
    unsigned int exponent = ((data.intData & 0x7F800000) >> 23) - 127; 
    printf(" * 2 ^ %d\n", exponent );

    return 0;

}
