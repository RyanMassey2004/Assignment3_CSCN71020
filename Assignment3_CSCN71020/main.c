#include <stdio.h>

void RockPaperScissors()
{
	int rock = 1;
	int paper = 2;
	int scissors = 3;

	if (rock < paper)
		printf("Paper wins");
	if (paper < scissors)
		printf("Scissors wins");
	if (rock < scissors)
		printf("Rock wins");
}