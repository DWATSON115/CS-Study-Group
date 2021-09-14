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

    // 4) The  function  below  is  an  attempt  at  a  recursive  binary
    // search  ofa  sorted  array.  Why  is  this function no faster than a
    // basic linear search through the array?
    // int search(int numbers[], int low, int high, int value) {
    //     if (low > high) return 0; // Not found.
    //     int mid = (low+high)/2;
    //     if (numbers[mid] == value) return 1; // Found.
    //     return search(numbers, low, mid-1) ||
    //            search(numbers, mid+1, high);
    // }

    // 5) Imagine being a particle starting at the coordinates (x1, y1) in the
    // Cartesian plane, moving to (x2, y2), where x1 ≤x2 and y1≤y2, and at each
    // step you could either add 1 to your x coordinate or add 1 to your y
    // coordinate. Write a recursive function to calculate the number of
    // different ways to make the journey. (No need to code a base case for when
    // it's not possible, ie when x1 > x2 or y1 > y2.)
    // int numWays(int x1, int y1, int x2, int y2);
    
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