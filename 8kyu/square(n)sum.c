#include <stddef.h>

int square_sum(const int *values, size_t count);

int square_sum(const int *values, size_t count){
    int sums = 0;

    for (int i = 0; i < count; i++) {
        sums += values[i]*values[i];
    }
    return sums;
}
