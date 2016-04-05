#include <stdlib.h>
#include "ctest.h"
#include "../src/diskr.h"
#include "../src/bin.h"

CTEST_DATA(qwar_y)
{
    int a;
    int b;
    int c;
    int rz;
    int ex;
    float X[2];
    float eX[2];
    int flg;
};

CTEST2(qwar_y, test1) 
{
    data->a = 5;
    data->b = 11;
    data->c = 2;
    
    data->rz = 81;
	data->ex = diskr(data->a, data->b, data->c);
	ASSERT_EQUAL(data->ex, data->rz);
}

CTEST2(qwar_y, test2) 
{
    data->a = 5;
    data->b = 1;
    data->c = 2;
    
    data->rz = -1;
	data->ex = diskr(data->a, data->b, data->c);
	ASSERT_EQUAL(data->ex, data->rz);
}

CTEST2(qwar_y, a_zero)
{
	data->a = 0;
	data->b = 4;
	data->c = 2;
	data->rz = -2;
	
	data->ex = bin(data->a, data->b, data->c, data->X);
	
	ASSERT_EQUAL(data->rz, data->ex);
}

CTEST2(qwar_y, resh)
{
	data->a = 2;
	data->b = 8;
	data->c = -192;
	data->X[0] = -12;
	data->X[1] = 8;
	
	data->flg = bin(data->a, data->b, data->c, data->eX);
	ASSERT_DBL_NEAR(data->eX[0], data->X[0]);
	ASSERT_DBL_NEAR(data->eX[1], data->X[1]);
	
}
