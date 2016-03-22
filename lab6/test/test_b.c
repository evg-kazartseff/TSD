#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/bin.h"

int main (int argc, char *argv[])
{	
	if (argc < 6) {
        printf ("введите a b c x1 x1 rezfl\n");
        return EXIT_FAILURE;
	}

	
	int a,b,c,rez,x1,x2;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	x1 = atoi(argv[4]);
	x2 = atoi(argv[5]);
	rez = atoi(argv[6]);
	char output[2][10] = 
	{
	"test pass",
	"test fail"
	};
	
	float X[2];
	
	int flg = bin(a, b, c, X);
	
	int i;
	if ((flg == rez) || ((X[0] == x1) && (X[1] == x2))) {
		i=0;
	}
	else {
		i=1;
	}
	
	
	 FILE *out;
    out = fopen("rez_b.txt", "a");
    fprintf(out, "a= %d  b= %d c= %d rez= %d x1= %d x2= %d X1= %.2f X2 =%.2f %s\n",a, b, c, rez, x1, x2, X[0], X[1], output[i]);
    printf ("\n");
	
	return 0;
}
