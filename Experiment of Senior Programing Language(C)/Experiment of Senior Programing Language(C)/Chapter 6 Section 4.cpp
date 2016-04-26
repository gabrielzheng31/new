#include <stdio.h>
#define SWAP(X,Y) X = X+ Y; Y = X -Y; X = X - Y;

int main(void) {
	int X, Y;
	scanf("%d %d", &X, &Y);
	SWAP(X, Y);
	printf("%d %d", X, Y);
	return 0;
}