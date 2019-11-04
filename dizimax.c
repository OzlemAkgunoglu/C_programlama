// Yazılım Bilimi  Youtube kanalından alıntıdır. 
//Bir dizinin en büyük elemanını bulup yazan koddur.

#include <stdio.h>

int max(int *a, int uzunluk)
{
	int maks= a[0];

	int i;

	for (int i = 1; i < uzunluk; i++)
	{
		if (a[i]>maks)
		{
			maks=a[i];
		}
	}

	return maks;
}

int main(int argc, char const *argv[])
{
	int sayilar[5]= {4, 5, 56, 101, 6};

	int maks= max(sayilar,5);

	printf("Sayilar dizisinin en büyük elemani %d dir\n", maks );

	return 0;
}
