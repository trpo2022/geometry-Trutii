#include <stdio.h>
#include <math.h>
#include <circle.h>
#include <htriangle.h>
int main() 
{
	int a;
	while(1)
	{
		printf("1. Cirle\n2. Triangle\nChoose your figure: ");
		scanf(" %d", &a);
		if (a == 1)
		{
			circle();
			break;
		}
		if (a == 2)
		{
			triangle();
			break;
		}
		printf("Error\n");
		return 0;
		}
	}
	return 0;
}
