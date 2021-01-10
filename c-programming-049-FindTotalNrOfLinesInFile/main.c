#include <stdio.h>

#define FILENAME "file.txt"

int main() {
	FILE* fp = NULL;
	char ch;
	int linesCount = 0;

	fp = fopen(FILENAME, "r");

	if (fp == NULL) {
		printf("FIle does not exist\n");
		return -1;
	}

	while ((ch = fgetc(fp)) != EOF) {
		if (ch == '\n') {
			linesCount++;
		}
	}

	fclose(fp);
	fp = NULL;

	printf("Total number of lines is: %d", ++linesCount);

	return 0;
}