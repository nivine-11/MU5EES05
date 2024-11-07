# 0 "max.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "max.c"
# 1 "max.h" 1



void maxim(int tableau[], int n,int *max);
# 2 "max.c" 2

void maxim(int t[], int n, int *max) {
    if (n <= 0) return;

    *max = t[0];

    for (int i = 1; i < n; i++) {
        if (t[i] > *max) {
            *max = t[i];
        }
    }
}
