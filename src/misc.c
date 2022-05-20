#include <stdio.h>
#include <stdlib.h>

// method-method lain yang belum dikelompokkan sebagai isi dari file header apa.

int getPriority(char ch) 
{	
	/* Algoritma */
    switch (ch) {
        case '+':
        case '-':
            return 1;

        case '*':
        case '/':
            return 2;

        case '^':
            return 3;

        case '$':
            return 4;

        default:
            return -1;
    }
}