#include <stdio.h>

int main() {
	int x, y; 		// ::kwargs | x: , y: ;
	
	printf("x�Է� : "); scanf("%d", &x);
	printf("y�Է� : "); scanf("%d", &y);
	
	printf("%d+%d=%d\n", x, y, x+y);
	printf("%d-%d=%d\n", x, y, x-y);
	printf("%d*%d=%d\n", x, y, x*y);
	printf("%d/%d=%f\n", x, y, (float)x/(float)y);
	printf("%d%%%d=%d\n", x, y, x%y);
	
	return 0;
}
