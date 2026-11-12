#include <stdio.h>
#include <stdlib.h>
#include "print_tab.h"

void print_tab(char ** tab)
{
    int i = 0;

    if (tab == NULL)
        return;

    while (tab[i] != NULL)
    {
        printf("%s\n", tab[i]);
        i = i + 1;
    }
}