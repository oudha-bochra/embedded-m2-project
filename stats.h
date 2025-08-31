/**
 * @brief Find the maximum value in an array
 *
 * @param arr The input array
 * @param length The number of elements in the array
 * @return The maximum integer in the array
 */    

/*******************************************************
 * stats.h
 * Header file for statistical analysis functions
 ****************************************************** */

#ifndef STATS_H
#define STATS_H

/* Function prototypes */
void print_statistics(int min, int max, float mean, float median);
int find_minimum(int arr[], int length);
int find_maximum(int arr[], int length);
float find_mean(int arr[], int length);
float find_median(int arr[], int length);
void sort_array(int arr[], int length);

#endif /* STATS_H */
