#include <stdio.h>

#include "..\UnitTest1\Header.h"

#define _CRT_SECURE_NO_WARNINGS

const char* RockPaperScissors(char arr1[], char arr2[])
{
	if (arr1 == "Paper" && arr2 == "Rock" || arr1 == "Rock" && arr2 == "Scissors" || arr1 == "Scissors" && arr2 == "Paper")
		printf("Player1 wins");
		return "Player1";
	
	if (arr2 == "Paper" && arr1 == "Rock" || arr2 == "Rock" && arr1 == "Scissors" || arr2 == "Scissors" && arr1 == "Paper")
		printf("Player2 wins");
		return "Player2";

	if (arr1 == arr2)
		printf("Draw");
		return "Draw";

	if (arr1 != "Rock" || "Paper" || "Scissors")
		printf("Invalid");
		return "Invalid";

	if (arr2 != "Rock" || "Paper" || "Scissors")
		printf("Invalid");
		return "Invalid";
}

int main(void)
{
	char arr1[10] = {""};
	char arr2[10] = {""};

	printf("Player1: ");
	scanf_s("%9s", arr1, 10);
	if (sizeof(arr1) == NULL)
		fprintf(stderr, "Error");

	printf("Player2: ");
	scanf_s("%9s", arr2, 10);
	if (sizeof(arr2) == NULL)
		fprintf(stderr, "Error");

	RockPaperScissors(arr1, arr2);
}