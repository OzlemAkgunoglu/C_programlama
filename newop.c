/*Bu örnekte ?: operatörüne örnek verilmiştir
sayaç 1 ayarlanıp sayaç tekse (count%2=1) ekrana üç yıldız 
çiftse(yani count%2=0) + lardan oluşan string yazmaktadır*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count=1; //count değişkeni değeri 1

	while(count<=10)
	{
		printf("count %2 : %d \n",count%2 );
		printf("%s\n", count%2?"***":"++++++");
		count++;
	}

	return 0;
}