#include <stdio.h>

int main(){
    char nama[50], nim[25], kelas[5], TTL[50], alamat[50],  hobby[25], nohp[20];
    
    printf ("Nama                 : ");
    fgets(nama, 50, stdin);
    printf ("NIM                  : ");
    fgets(nim, 25, stdin);
    printf ("Kelas Paralel        : ");
    fgets(kelas, 5 , stdin);
    printf ("Tempat/Tanggal Lahir : ");
    fgets (TTL, 50, stdin);
    printf ("Alamat               : ");
    fgets(alamat, 50, stdin);
    printf ("Hobby                : ");
    fgets (hobby, 25, stdin);
    printf ("No. Hp               : ");
    fgets (nohp, 25, stdin);

    printf ("\nNama                 : %s", nama);
    printf ("NIM                  : %s", nim);
    printf ("Kelas Paralel        : %s", kelas);
    printf ("Tempat/Tanggal Lahir : %s", TTL);
    printf ("Alamat               : %s", alamat);
    printf ("Hobby                : %s", hobby);
    printf ("No. Hp               : %s", nohp);

return 0;
}