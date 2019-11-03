#include <stdio.h>

int main(int argc, char const *argv[])
{
	//integer türünde bir değişken oluşturalım. 
	int degisken = 150;

	/*Bu değişkenin fiziksel adresini tutan bir
	pointer oluşturalım. Pointer, değişkeninin adı
	başına * işareti konarak oluşturulur. & işareti 
	'degisken' in fiziksel adresini belirtir. Ve bu fiziksel 
	kodu her çalıştırdığımızda değişecektir. */
	
	int *ptr = &degisken;

	//ptr değişkeninde tutulan değeri yazalım.
	//Bu değer "degisken" değişkeninin değeridir.
	
	printf("degisken in degeri %d\n", *ptr );

	//Şimdide 'degisken' in fiziksel adresini yazalım.
	printf("degisken in adresi %p\n", ptr);

	// Ve son olarak ptr nin fiziksel adresini de yazdıralım.

    printf("ptr değişkeninin fiziksel adresi %p\n", &ptr );

    /* 'degisken' değişkeninin değerini bulunduğu adresi 
    kullanarak değiştirelim ve yazdıralım*/
    
    *ptr= 34;
    
    printf("*ptr nin değerini değiştirdikten sonra, *ptr %d değerini alır. \n", *ptr);
	
	return 0;
}