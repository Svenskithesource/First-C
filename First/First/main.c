#include <stdio.h>

int hello(const name[]) {
	printf("Hello, %s", name);
}

int main() {
	char name[20];
	printf("What's your name: ");
	fgets(name, 20, stdin); // Use fgets so there is no problem with spaces
	hello(name);
}

