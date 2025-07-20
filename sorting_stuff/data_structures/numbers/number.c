#include <stdio.h>

int main(void)
{
    int age = 30;
    float price = 9.99;
    double pi = 3.9415926535;
    unsigned int count = 100;
    int is_true = 0;

    if (!is_true) {
        char cast_test = (char) pi;
        printf("cast_test: %c\n", cast_test);
    }
}
