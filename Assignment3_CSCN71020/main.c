#include <stdio.h>

#include "..\UnitTest1\Header.h"

#define _CRT_SECURE_NO_WARNINGS

const char* RockPaperScissors(char arr1[], char arr2[])
{
	// ------------- Player 1 win Scenario
	if (arr1 == "Paper" && arr2 == "Rock" || arr1 == "Rock" && arr2 == "Scissors" || arr1 == "Scissors" && arr2 == "Paper")
		return "Player1";

	if (arr1 == "Rock" && arr2 == "Scissors")
		return "Player1";

	if (arr1 == "Scissors" && arr2 == "Paper")
		return "Player1";

	// ------------- Player 2 win Scenario
	if (arr2 == "Paper" && arr1 == "Rock")
		return "Player2";

	if (arr2 == "Rock" && arr1 == "Scissors")
		return "Player2";

		if (arr2 == "Scissors" && arr1 == "Paper")
		return "Player2";

	// ------------- Draw Scenario
	if (arr1 == arr2)
		return "Draw";

	// ------------- Invalid Input Scenario
	if (arr1 != "Rock" || "Paper" || "Scissors")
		return "Invalid";

	if (arr2 != "Rock" || "Paper" || "Scissors")
		return "Invalid";
}

int main(void)
{
	char arr1[10];
	char arr2[10];

	printf("Player1: ");
	char input1 = scanf_s("%9s", arr1, 10);
	if (sizeof(arr1) == NULL)
		fprintf(stderr, "Error");

	printf("Player2: ");
	char input2 = scanf_s("%9s", arr2, 10);
	if (sizeof(arr2) == NULL)
		fprintf(stderr, "Error");

	RockPaperScissors(input1, input2);
}