#include <stdio.h>

/************************************
Algoritma terrendah
{ Deskripsi : Mencari nilai terrendah beserta indeks arraynya
IS : user siap memasukkan nilai
FS : tampil dilayar nilai terrendah berserta indeks arraynya

Dibuat oleh : Yuri Iskandia Barru
Tanggal		: 11 - 12 - 2015
*************************************/

void main (void)

//KAMUS *****************************
{	int A[8], b, i, c;

//ALGORITMA *************************
	i = 1;
	printf ("Masukkan Nilai Pertama : "); scanf ("%d", &A[i]);
	b = A[i]; c = 1;
	
	while (i < 7)
	{
		i++;
		printf ("Masukkan Nilai ke- %d : ", i); scanf ("%d", &A[i]);
		if (b >= A[i])
		{
			b = A[i];
			c = i;
		}
	}
	printf ("\nNilai terendah adalah = %d dan berada pada indeks ke - %d\n", b, c);
	system ("pause");
}
