
#include <stdio.h>

int main(void)
{
	int Exp, position;
	printf("Ingrese el numero decimal: \n >> ");
	scanf("%d", &Exp);
	printf("La representacion binaria es: \n >> ");
	for(position = 1; position*2 <= Exp; position *= 2);
	while(position > 0)
	{
		if(Exp >= position)
		{
			Exp -= position;
			printf("1");
		}
		else
			printf("0");
		position /= 2;
	}
}
