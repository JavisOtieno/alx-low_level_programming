#include "main.h"

/**
 * _puts_recursion - function prints a string
 *
 *@s: char * pointer
 *
 * Return: void
 */

 /**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion - test");
    _print_rev_recursion("\nColton Walker");
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);

    int r;

    r = factorial(1);
    printf("Factorial of 1: %d\n", r);
    r = factorial(5);
    printf("Factorial of 5: %d\n", r);
    r = factorial(10);
    printf("Factorial of 10: %d\n", r);
    r = factorial(-1024);
    printf("Factorial of -1024: %d\n", r);

    int r2;

    r2 = _pow_recursion(1, 10);
    printf("1 raised to power 10: %d\n", r2);
    r2 = _pow_recursion(1024, 0);
    printf("1024 raised to power 0: %d\n", r2);
    r2 = _pow_recursion(2, 16);
    printf("2 raised to power 16: %d\n", r2);
    r2 = _pow_recursion(5, 2);
    printf("5 raised to power 2: %d\n", r2);
    r2 = _pow_recursion(5, -2);
    printf("5 raised to power -2: %d\n", r2);
    r2 = _pow_recursion(-5, 3);
    printf("%d\n", r2);

    return (0);
}

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

int factorial(int n){
    if(n<0){
        return -1;
    }
    else if (n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}

int _pow_recursion(int x, int y){
    if(y<0){
        return -1;
    }else if (y==0){
        return 1;
    }else{
        return x*_pow_recursion(x,y-1);
    }
}

int _strlen_recursion(char *s)
{

    if (*s == '\0')
    {
        return 0;
    }
    else
    {
        *s++;
        return (_strlen_recursion(s)+1);
    }
}

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	    _print_rev_recursion(s+1);
		_putchar(*s);
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


