//============================================================================
// Name        : challenge.c
// Author      : kamel
// Version     :
// Copyright   : Your copyright notice
// Description : Get max occured char from input string in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <string.h>

int occ_number(char *string, char c)
{
	char *ptr = string;
	int occ = 0;
	while(*ptr != '\0') {
		if (*ptr == c)
			occ ++;
		ptr++;
	}
	return occ;
}

int get_max_pos(int tab[], int len)
{
	int max = *tab;
	int max_pos = 0;
	for (int i = 0; i < len; i++) {
		if (*(tab + i) > max) {
			max = *(tab + i);
			max_pos = i;
		}
	}
	return max_pos;
}

int main(int argc, char **argv)
{
	int occ = 0;

	int tab_occ[strlen(argv[1])];
	for (int i = 0; i < strlen(argv[1]); i++) {
		tab_occ[i] = occ_number(argv[1], argv[1][i]);
	}

	printf("Char %c\t Occurence = %d times\n",
		  argv[1][get_max_pos(tab_occ, strlen(argv[1]))],
		  tab_occ[get_max_pos(tab_occ, strlen(argv[1]))]
		  );
	return 0;
}


