/*Problem Statement
The basic eligibility criteria required to apply for a Bank Loan are as follows,
Age of the primary applicant must be between 21 years to 60 years.
CIBIL Score should be checked for its status.
Primary applicant should have a stable income (gross) of up to Rs.3 lakh per year.
*/

#include <stdio.h>

int main() {
    int age,cs,income;
    scanf("%d",&age);
    
    if((age>=21) && (age<=60)) {
        scanf("%d",&income);
        
        if(income>300000) {
            scanf("%d",&cs);
            if((cs>=750)&&(cs<=850))
                printf("EXCELLENT - ELIGIBLE");
                
            else if((cs>=700)&&(cs<=749))
                printf("GOOD - ELIGIBLE");
                
            else if((cs>=650)&&(cs<=699))
                printf("FAIR - ELIGIBLE");
                
            else if((cs>=550)&&(cs<=649))
                printf("POOR - NOT ELIGIBLE");
            else 
                printf("NOT APPLICABLE");
        }
        
        else
            printf("NOT ELIGIBLE");
            
    }
    else
        printf("NOT APPLICABLE");
        
    return 0;
}
