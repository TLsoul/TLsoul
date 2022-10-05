#include<stdio.h>

int main() {
	int a, b;
	char c;
	scanf("%d %c %d",&a,&b,&c);
	switch (c) {
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case'*':
			printf("%d",a*b);
			break;
		case'/':
	
			printf("%d", a/b);
			break;
	}
	return 0;
}
