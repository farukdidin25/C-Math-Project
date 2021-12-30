 #include <stdio.h>
#include <stdlib.h>
//c mini project

int main() {
	//simple introduction to our project
	/*
	int number1,number2,result;
	char operation;
	number1=75;
	number2=15;
	printf("Add operation: ");
	scanf("%s",&operation);
	
	switch(operation)
	{
		case'+':
				result=number1+number2;
				printf("Result: %d",result);
				break;
		case'-': 
				result=number1-number2;
				printf("Result: %d",result);
				break;
		case'*': 
				result=number1*number2;
				printf("Result: %d",result);
				break;
		case'/': 
				result=number1/number2;
				printf("Result: %d",result);
				break;
		default: 
				printf("Incorrect Operation");
				break;			
	}
	*/
	
	int number1,number2,result,choice;
	
	number1=12;
	number2=16;
	
	printf("Math Menu\n");
	printf("***************\n\n");
	printf("1 - The area of the square and its surroundings\n");
	printf("2 - The cube of the entered number\n");
	printf("3 - The area and circumference of the circle\n");
	printf("4 - 5x2+7x+9 the result of the operation according to x\n");
	printf("5 - The area and perimeter of the rectangle\n\n");
	printf("Select Your Operation\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("The area of square: %d \n",(number1*number2));
			printf("The surroundings of square: %d",number1*4);
			break;
		case 2: 
			printf("The cube of the number: %d",(number1*number1*number1));
			break;
		case 3:
			printf("The are of the circle: %d\n",(3.14)*(number1)*(number1));
			printf("The Circumference of the circler: %d",2*(3.14)*number1);
			break;
		case 4:
			printf("5x2+7x+9 the result of operation according to x: %d",(5*(number1)*(number1))+(7*number1)+9);
			break;
		case 5: 
			printf("The are of the rectangle: %d\n",number1*number2);
			printf("The perimeter of the rectangle: %d",number1*2+number2*2);
			break;
	}
	
	
	
	
	
	
	
	return 0;
}
