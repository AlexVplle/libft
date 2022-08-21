#include <ctype.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	for (int i = 0; i < 128; i++) {
		printf("%d : %d\n", i, isprint(i));
	}
	return 0;
}
