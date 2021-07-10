#include <stdio.h>
#include <float.h>
#include <math.h>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    // normal use
    printf("cbrt(729) = %f\n", cbrt(729));
    printf("cbrt(-0.125) = %f\n", cbrt(-0.125));
    // special values
    printf("cbrt(-0) = %f\n", cbrt(-0.0));
    printf("cbrt(+inf) = %f\n", cbrt(INFINITY));
    // accuracy
    printf("cbrt(343)      = %.*f\n", DBL_DECIMAL_DIG, cbrt(343));
    printf("pow(343,1.0/3) = %.*f\n", DBL_DECIMAL_DIG, pow(343, 1.0 / 3));

    _getch();
    return 0;
}