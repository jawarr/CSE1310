#include <stdio.h>

int main (void) {
	int length, width, height;
	printf("Length = ");
	scanf("%d", &length);
	
	printf("Width = ");
	scanf("%d", &width);
	
	printf("Height ");
	scanf("%d", &height);
	
	printf("Volume = %d\n", length*width*height);
	return 0;

}
