#include <stdio.h>

int main(){
    float r, tinggi, volume, luas, keliling, phi = 3.142857;

    scanf ("%f %f", &r, &tinggi);
    volume = phi * (r * r) * tinggi;
    luas = 2 * phi * r * (r + tinggi);
    keliling = 2 * phi * r;
    
    printf ("\nVolume = %.2f\n", volume);
    printf ("Luas = %.2f\n", luas);
    printf ("Keliling = %.2f\n", keliling);

return 0;
}