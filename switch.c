#include<stdio.h>
main()
{
	int i;
	printf("---------------------------------------");
	printf("\n  MENU  ");
	printf("\n--------------------------------------");
	printf("\n 1.Low Speed");
	printf("\n 2.Medium Speed");
	printf("\n 3.High Speed");
	printf("\n---------------------------------------");
	printf("\nEnter any option(1,2,3)..:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("\nLow speed selected");
		    break;
		case 2:
			printf("\nMedium speed selected");
			break;
		case 3:
			printf("\nHigh speed selected");
			break;
		default:
			printf("Invalid");
	}
}
