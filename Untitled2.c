#include<stdio.h>
int main(){
	char operator;
	double firstNumber,secondNumber;
	printf("Enter an operator(+,-,*,/,):");
	scanf("%c",&operator);
	printf("Enter two operands:");
	scanf("%1f %1f,&firstNumber,&secondNumber");
	switch(operator){
		case'+':
			printf("%.11f+%.11f=%.11f",firstNumber,secondNumber,firstNumber + secondNumber);
			break;
			case'-':
				printf("%.11f-%.11f=%.11f",firstNumber,secondNumber,firstNumber-secondNumber);
					break;
					case'*':
						printf("%.11f*%.11f=%.11f",firstNumber,secondNumber,firstNumber*secondNumber);
						break;
						case'/':
							printf("%.11f/%.11f=%.11f",firstNumber,secondNumber,firstNumber/secondNumber);
							break;
							default:
								printf("Error!Opperator is not correct");
								
							
	}
	return 0;
}

