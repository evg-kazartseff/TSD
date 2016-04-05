#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bin.h"
#include "diskr.h"


int bin(int a, int b, int c, float X[])
{	
	if (a == 0) {
		return -2;
	}
	else {
		float d = diskr(a, b, c);
			if (d == -1) {
				return d;
			}
			else {
				X[0] = (-b - sqrt(d))/(2*a);
				X[1] = (-b + sqrt(d))/(2*a);
				return 0;
			}
	}
}
