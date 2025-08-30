/******************************************************************************
 * Copyright (C) 2025 by Oudha Bochra
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 * Users are permitted to modify this and use it to learn about the field of
 * embedded software. Oudha Bochra is not liable for any misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of statistical analysis functions
 *
 * This file contains the implementations of functions that perform
 * statistical calculations (mean, median, max, min) on an array of data.
 *
 * @author Oudha Bochra
 * @date 2025-09-13
 *
 */

#include <stdio.h>
#include "stats.h"

void print_statistics(unsigned char array[], unsigned int length) {
    printf("Statistics:\n");
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

void print_array(unsigned char array[], unsigned int length) {
    printf("Array elements:\n");
    for (unsigned int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char array[], unsigned int length) {
    sort_array(array, length);
    if (length % 2 == 0) {
        return (array[length/2 - 1] + array[length/2]) / 2;
    } else {
        return array[length/2];
    }
}

unsigned char find_mean(unsigned char array[], unsigned int length) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (unsigned char)(sum / length);
}

unsigned char find_maximum(unsigned char array[], unsigned int length) {
    unsigned char max = array[0];
    for (unsigned int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char array[], unsigned int length) {
    unsigned char min = array[0];
    for (unsigned int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char array[], unsigned int length) {
    for (unsigned int i = 0; i < length - 1; i++) {
        for (unsigned int j = i + 1; j < length; j++) {
            if (array[i] < array[j]) {
                unsigned char temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
