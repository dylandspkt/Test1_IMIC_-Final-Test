# include <stdio.h>
# include<math.h>
# include <stdint.h>


uint16_t n;
void Xuat(uint16_t x)
{
	uint8_t bit_cao;
	uint8_t bit_thap;
	bit_cao = x>>8;
	bit_thap = x;
	printf(" In bit cao: %d\n", bit_cao);
	printf(" In bit thap: %d", bit_thap);

 }


	 void main()
 {
	 printf(" Nhap n: \n");
	 scanf_s("%d", &n);
	 Xuat(n);

 }




