#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the minimum number of coins to make
 *	change for an amount of money.
 * @argc: number of argument.
 * @argv: arrays of string argument.
 * Return: 1 if @argc != 2, 0 if argument is
 *	negative, and also positive.
 */
int main(int argc, char *argv[])
{
	int money;
	int coin = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (money % 25 >= 0)
		{
			coin += money / 25;
			money = money % 25;
		}
		if (money % 10 >= 0)
		{
			coin += money / 10;
			money = money % 10;
		}
		if (money % 5 >= 0)
		{
			coin += money / 5;
			money = money % 5;
		}
		if (money % 2 >= 0)
		{
			coin += money / 2;
			money = money % 2;
		}
		if (money % 1 >= 0)
			coin += money;
		printf("%d\n", coin);
		return (0);
	}
	else
	{	printf("Error\n");
		return (1);
	}
}
