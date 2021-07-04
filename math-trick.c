#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{

	//Initialize variables and function
	char name[20];
	int multipleOf3 = 0, lastDigitWith0 = 0, secondLastDigit = 0, lastDigitWithout0 = 0, choice;
	int mathTrick(int lastDigit, int multipleOf3, int secondLastDigit, char name[20]);

	do
	{
		//Add switch case
		system("cls");
		printf("Please Choose an option from the given list below\n \n1.Start Math Trick program\n \n2.Exit \n\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			system("cls");
			//Accept user details
			printf("Please Enter Your Name\n");
			scanf("%s", &name);
			printf("\nHello %s, Hope you are having a good day.\nPress Enter to Coninue\n", name);
			getch();

			//Start Math Trick program
			system("cls");
			//Accept the values
			printf("Please think of any three consecutive nos within 1-60. For eg:31,32,33. \nPress Enter when done\n");
			getch();
			printf("\nNow enter a Multiple of 3 which should be below 100. For eg:3\n");
			scanf("%d", &multipleOf3);

			if ((multipleOf3 > 100) || (multipleOf3 % 3 != 0))
				printf("Invalid Multiple, Please try again\n");
			else
			{
				printf("\nGreat! Now add all the four numbers (31+32+33+3) and Multiply the answer by 67. \nPress enter when done adding and multiplying\n");
				getch();
				printf("\nEnter the second last digit of the answer\n");
				scanf("%d", &secondLastDigit);
				printf("\nEnter the last digit of the answer\n");
				scanf("%d", &lastDigitWith0);
			}

			if (secondLastDigit == 0)
			{
				mathTrick(lastDigitWith0, multipleOf3, secondLastDigit, name);
			}

			else
			{
				printf("Woops! I am sorry, I was not able to accept the two digits %d and %d seperately.\nPlease Enter the last two digits again, but together this time :)\n", secondLastDigit, lastDigitWith0);
				scanf("%d", &lastDigitWithout0);

				mathTrick(lastDigitWithout0, multipleOf3, secondLastDigit, name);
			}
			break;

		case 2:
			printf("Are you sure you want to exit?\n");
			break;
		}
		getch();
	} while (choice != 2);
}

int mathTrick(int lastDigit, int multipleOf3, int secondLastDigit, char name[20])
{
	//Main Logic
	int answer = lastDigit * 2;
	multipleOf3 = multipleOf3 / 3 + 1;
	int firstConsecutiveNumber = lastDigit - multipleOf3;

	//Print the answer
	printf("Your Concecutive Nos. are: \t%d %d %d\n", firstConsecutiveNumber, firstConsecutiveNumber + 1, firstConsecutiveNumber + 2);
	secondLastDigit == 0 ? printf("Your main answer is: \t%d%d%d\n\n", answer, secondLastDigit, lastDigit) : printf("Your main answer is: \t%d%d\n\n", answer, lastDigit);
	printf("\nThank you %s for using the Math Trick program. \nPress Enter to exit.\n", name);
	return 0;
}
