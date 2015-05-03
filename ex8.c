#include <stdio.h>

int main(int argc, char *argv[]) {
    int number = 3;
    long lnumber = 4;
    float f = 2.3;
    double d = 4.5;

    printf("int: %ld, long: %ld, float: %ld, double: %ld\n", sizeof(number),
            sizeof(lnumber), sizeof(f), sizeof(d));

    return 0;
}
