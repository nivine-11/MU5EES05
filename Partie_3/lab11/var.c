#include <stdio.h>
#include "var.h"

void variance(int t[], int n, float * var) {
    float sum = 0.0;
    float mean;
    
    for (int i = 0; i < n; i++) {
        sum += t[i];
    }
    
    mean = sum / n;
    
    float sum_of_squares = 0.0;
    for (int i = 0; i < n; i++) {
        sum_of_squares += (t[i] - mean) * (t[i] - mean);
    }
    
    *var = sum_of_squares / (n-1);
}