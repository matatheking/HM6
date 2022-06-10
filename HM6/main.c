
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pack4chars2Int(char c1, char c2, char c3, char c4);
int checkEvenParity(short input);

void main() {
	printf("%d ", pack4chars2Int('a', 'b', 'c', 'd'));
	short in = 7;
	printf("\n%d", checkEvenParity(in));



}

int pack4chars2Int(char c1, char c2, char c3, char c4) {
	int res = 0x0;
	char c[4] = { c1,c2,c3,c4 };
	for (int i = 0; i < 4; i++) {
		res <<= 8;
		res |= c[i];
	}
	return res;
}
	
int checkEvenParity(short input)
{
	char msk = 0b1;
	int count = 0;
	if (input < 0)
	{
		input = ~input;
	}
	while (input != 0)
	{
		if (msk & input)
		{
			count++;
		}
		input >>= 1;
	}
	if (count % 2)
	{
		return 0;
	}
	return 1;
}
