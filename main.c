#include <stdio.h>
#include "stats.h"

int main() {
    int data[] = {34, 201, 190, 154, 8, 194, 2, 6,
                  114, 88, 45, 76, 123, 87, 25, 23,
                  200, 122, 150, 90};
    int length = sizeof(data) / sizeof(data[0]);

    int min = find_minimum(data, length);
    int max = find_maximum(data, length);
    float mean = find_mean(data, length);
    float median = find_median(data, length);

    print_statistics(min, max, mean, median);

    return 0;
}

