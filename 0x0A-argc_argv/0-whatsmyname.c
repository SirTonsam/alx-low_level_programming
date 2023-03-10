/*
 * File: 0-whatsmyname.c
 * Auth: Tongai Samu
 *
 */
#include <stdio.h>
/**
 * main-  a program that  prints its name without compile
 * @argc: the number of command line arguments
 * @argv: an array containing the prograiim command line arguments
 * followed by a new line
 *Return: always 0.
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

		return (0);
}

