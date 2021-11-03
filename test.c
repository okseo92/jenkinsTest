#include <stdio.h>
/* test code for input var */

int g_var1 = 0;
void exFunc(int * var);
int inputVarTest(int a){
	int ret = 0;
	
	if (a == 100 && g_var1 == 10) {
		ret = 100;
	}else if(a == 50 && g_var1 ==5){
		ret =50;
	}else {
		ret =-1;
	}
	
	return ret;
}

int main()
{
	
return 0;
}



