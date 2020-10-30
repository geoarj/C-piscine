#include "ex00/ft_foreach.c"

#include <stdio.h>

void f(int a) {
	printf("%d ", a);
}
int main() {

	// ex00

	printf("\n==================== ex00 ====================\n\n");
	int a1[] = {1,2,3,4,5,6,7,8,9,0};
	printf("1 2 ... 9 0 -> ");
	ft_foreach(a1, 10, f);
}
