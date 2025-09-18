 
 #include <stdio.h>
 int factorial(int x) {
    int f = 1;
    for (int i = 1; i <= x; ++i) f *= i;
    return f;
 }
 int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
 }
 int main() {
    int rows = 5;
    for (int i = 0; i < rows; ++i) {
        for (int s = 0; s < rows - i - 1; ++s) printf("  ");
        for (int j = 0; j <= i; ++j) {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
    return 0;
 }
