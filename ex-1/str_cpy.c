#include <stdlib.h>
#include <stdio.h>
#include "str_cpy.h"

int str_len(char *str) {
	int i = 0;
	while(str[i] != '\0') {
		printf("%c", str[i]);
		i = i + 1;
	}
	printf("\n");
	return(i);
}

char *str_cpy(char *str) {
    char * cpy;
    int lenght;
    int count=0;
    lenght = str_len(str);
    cpy = malloc((lenght+1) * sizeof(char)); 
    cpy[lenght] = '\0';
    while (count < lenght) {
        cpy[count]=str[count];
        count=count+1;
    }
    return(cpy);
}
