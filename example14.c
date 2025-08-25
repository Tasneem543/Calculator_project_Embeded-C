
/// calculate cube volume

#include <stdio.h>

void calc_volume(double side, double *volume) {
    *volume = side * side * side;
}

int main() {
    double side, vol;
    printf("Enter cube side: ");
    scanf("%lf", &side);
    calc_volume(side, &vol);
    printf("Volume = %.3f\n", vol);
    return 0;
}
