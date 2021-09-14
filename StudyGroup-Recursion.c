#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double harmonic(int n);
int productDigits(int n);

int main(void) {
    // 1) The code below returns the nth Harmonic number.(Note: n must be
    // positive.) Rewrite the function recursively.
    // double harmonic(int n) {
    //   double res = 0;
    //   for (int i = 1; i <= n; i++) res += 1.0 / i;
    //   return res;
    // }

    // 2) Write a recursive function returns the sum of the digits of its input
    // parameter n. You may assume that n is non-negative. For example,
    // productDigits(274) should return 56, since2*7*4 = 56.
    // int productDigits(int n);


    // 3) Without running the function below, determine the output of the
    // function call doit(4):
    // voiddoit(int n) {
    //     if (n>0) {
    //         doit(n-1);
    //         printf("%d", n);
    //         doit(n-1);
    //     }
    // }
    // What is this function similar to, in structure?
    return 0;
}

double harmonic(int n) {
    double res = 0;
    for (int i = 1; i <= n; i++) {
        res += 1.0 / i;
    }
    return res;
}

double recursiveHarmonic(int n) {
    double res = 0;

    return res;
}

int productDigits(int n) {

}