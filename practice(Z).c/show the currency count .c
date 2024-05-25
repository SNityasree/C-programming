#include <stdio.h>

void countCurrency(int amount)
{
	int notes[9] = { 2000, 500, 200, 100,
					50, 20, 10, 5, 1 };
	int noteCounter[9] = { 0 };
	for (int i = 0; i < 9; i++) {
		if (amount >= notes[i]) {
			noteCounter[i] = amount / notes[i];
			amount = amount % notes[i];
		}
	}
	printf("Currency Count ->\n");
	for (int i = 0; i < 9; i++) {
		if (noteCounter[i] != 0) {
		    printf("%d : %d\n",notes[i],noteCounter[i]);
			
		}
	}
}

int main()
{
	int amount;
	printf("ENTER THE AMOUNT : ");
	scanf("%d",&amount);
	printf("currency of %d is \n",amount);
	countCurrency(amount);
	
	return 0;
}
