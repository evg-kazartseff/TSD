#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bin.h"

int main (int argc, char *argv[])
{	
	if (argc < 4) {
        printf ("введите a b c\n");
        return EXIT_FAILURE;
	}
	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	float X[2];
	
	int flg = bin(a, b, c, X);
	
	if ((flg == -2) || (flg == -1)) {
		printf ("решений нет!\n");
		return EXIT_FAILURE;
	}
	
	printf ("x1 = %.2f x2 = %.2f\n",X[0],X[1]);
}
