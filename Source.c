#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char scanned[60];

	printf("Word to reverse: ");
	scanf("%s", &scanned);
	int length = strlen(scanned);

	printf("\n\nThe word: %s has %d characters ", scanned, length);
	
	char* normal;
	normal = scanned;

	printf("and is reversed: ");

	for (int i = 0; i < length; ++i) {
		int last = length - i - 1;
		printf("%c", *(normal + last));
	}
	return 0;
}