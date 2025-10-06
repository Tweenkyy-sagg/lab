#include <stdio.h>
#include <math.h>

int main() {
    double x = 14.26;
    double y = -1.22;
    double z = 3.5e-2
    double pi = acos(-1.0);
    double t = (2 * cos(x - pi/6)) / (0.5 + sin(y) * sin(y)) * 
               (1 + (z * z) / (3 - (z * z) / 5));
    
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2e\n", z);
    printf("t = %.6f\n", t);
    
    return 0;
}
