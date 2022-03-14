#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 * Description:a program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
 
 int main(void)
 {
     char low;
     
     for (low = 'a';low <= 'z'; low++)
         putchar(low);
         putchar('\n');
         
         return (0);
 }
