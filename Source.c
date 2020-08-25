#include <stdio.h>
#include <conio.h>

int main()
{
	int a;

	printf("Type an integer: ");
	scanf_s("%d",&a);
	printf("You typed %d.\n",a);

	if( a > 10 )
    {
		printf("%d is greater than 10.\n",a);
    }
	else
	{
		printf("%d is less than or equal to 10.\n",a);
	}

	_getch();
	return(0);
}