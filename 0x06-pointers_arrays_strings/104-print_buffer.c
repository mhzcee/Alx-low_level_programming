#include "main.h"
#include <stdio.h>

/**
 * print



*/

 void print_buffer(char *b, int size)
 {
	 int i, j, k;

	 if (size <= 0)
		 printf("\n");
	 else
	 {
		 for (i = 0; i < size; i += 10)
		 {
			 printf("%.8x:", i);
			 for (j = i; j < i + 10; j++)
			 {
				 if (j % 2 == 0)
					 printf(" ");
				 if (j < size)
					 printf("%.2x"' *(b +j));
				 else
					 print(" ")
			 }
			 printf(" ");
			 for (k = i; k < i + 10; k++);
			 {
				 if (k >= size)
					 break;
				 if (j < size)

