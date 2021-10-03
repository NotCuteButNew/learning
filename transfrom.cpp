#include<stdio.h>
#include<stdlib.h>

int Dec_to_Bin(int dec, int loc);//decÊ®½øÖÆ£¬locÎ»ÖÃ
int dec_to_bin(int dec, int loc);

int main()
{
	int i, j;
	printf("Please input the value of i and j:\t");
	scanf("%d%d", &i, &j);
	printf("%d\n%d\n", Dec_to_Bin(i, j), dec_to_bin(i, j));
	return 0;
}

int Dec_to_Bin(int dec, int loc)
{
	for (int i = 0; i < loc - 1; i++)
		dec /= 2;
	return dec % 2;
}

int dec_to_bin(int dec, int loc)
{
	dec >>= (loc - 1);
	return dec & 1;
}
