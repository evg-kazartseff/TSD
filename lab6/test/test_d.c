#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/diskr.h"

int main()
{	
	FILE *file;
	char* file_name = "test_d.txt";
	char input[30];
	char output[2][10] = 
	{
	"test pass",
	"test fail"
	};
	
	
	
	file = fopen( file_name, "rt" );
	
	fgets(input,30,file);
	
	int a,b,c,rez;
	a = atoi(&(input[0]));
	b = atoi(&(input[3]));
	c = atoi(&(input[6]));
	rez = atoi(&(input[9]));
	
	int flg = diskr(a, b, c);
	
	int i;
	if (flg == rez) {
		i=0;
	}
	else {
		i=1;
	}
	
	 FILE *out;
    out = fopen("rez_d.txt", "a");
    fprintf(out, "a= %d  b= %d c= %d rez= %d %s\n",a, b, c, rez, output[i]);
    printf ("\n");
	
	return 0;
}
