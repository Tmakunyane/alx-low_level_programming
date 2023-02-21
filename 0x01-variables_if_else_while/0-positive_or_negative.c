#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/* betty style doc for function main goes here */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
srand(time(0));
int n = rand() % RAND_MAX - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

return (0);
}
