#include <stdio.h>

int main(){
    int a, b, i, j, x, y;

    scanf("%d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);
    float hasil1 = (float)(a - b) * i / j - (x + y);
    printf("\n%.3f\n\n",hasil1);
    
return 0;
}