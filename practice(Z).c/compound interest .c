#include<stdio.h>
#include<math.h>
int main(){
    double p,t,r;
    printf("Enter the principal : ");
    scanf("%lf",&p);
    printf("Enter the time : ");
    scanf("%lf",&t);
    printf("Enter the rate : ");
    scanf("%lf",&r);
  double amount=p*((pow((1+r/100),t)));
    double CI=amount - p;
    printf("%lf",CI);
    
}
