#include <stdio.h>
void countCurrency(int amount)
{
	int notes[9] = { 1000, 500, 200, 100,
					50, 20, 10, 5, 1 };
	int noteCounter[9] = { 0 };
	for (int i = 0; i < 9; i++) {
		if (amount >= notes[i]) {
			noteCounter[i] = amount / notes[i];
			amount = amount % notes[i];
		}
	}
	printf("CURRENCY NOTE\n");
	for (int i = 0; i < 9; i++) {
		if (noteCounter[i] != 0) {
		    printf("%d : %d\n",notes[i],noteCounter[i]);
		}
	}
}
int main()
{
	int amount;
	scanf("%d",&amount);
	countCurrency(amount);
	return 0;
}
