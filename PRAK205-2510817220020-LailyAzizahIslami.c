#include <stdio.h>
#include <math.h>

int main(){
    float A, B;
    float alas, tinggi, keliling, luas;

    scanf("%f %f", &A, &B);

    alas = sqrt(pow(B, 2) - pow(A, 2));
    tinggi = A;
    keliling = A + B + alas;
    luas = (alas * tinggi) / 2;

    printf("\nAlas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n\n", luas);

return 0;
}