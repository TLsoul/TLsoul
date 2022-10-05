#include<stdio.h>

int main() {
	int a, b, c;
	a = 6;
	b = 5;
	c = 4;
	if (a >= b && a >= c) {
		printf("%d\n",a);

	}
	if ( b >= a && b >= c) {
		printf("%d\n" ,b);
	
    }
    if (c >= a && c >= b) {
    	printf("%d\n",c);
	}
	return 0;
	
}
