#include <stddef.h>

int square_sum(const int *values, size_t count);

int square_sum(const int *values, size_t count){
    int sums = 0;

    for (int i = 0; i < count; i++) {
        sums += values[i]*values[i];
    }
    return sums;
}


/*
#include <stddef.h>
#include<math.h>

square_sum(const int *values, size_t count){
  int sum = 0;
  for(int i =0; i<count; i++)
    sum+=pow(values[i], 2);
  return sum;
}
int square_sum(const int *values, size_t count);
*/
