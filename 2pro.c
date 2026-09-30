#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("=====BITWISE OPERATIONS=====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n-----MENU-----\n");
	printf("1.Bitwise AND(&)\n");
	printf("2.Bitwise OR(|)\n");
	printf("3.Bitwise XOR(^)\n");
	printf("4.Bitwise NOT(~)\n");
	printf("5.left shift(<<)\n");
	printf("6.right shift(>>)\n");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("bitwise AND result=%d",res);
			break;
		case 2:
			res=a/b;
			printf("bitwise OR result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("bitwise XOR result=%d",res);
			break;
		case 4:
			res=~a;
			printf("bitwise NOT result=%d",res);
			break;
		case 5:
			res=a<<b;
			printf("left shift result=%d",res);
			break;
		case 6:
			res=a>>b;
			printf("right shift result=%d",res);
			break;
	default:
				printf("invalid choice");
	}
	return 0;
}