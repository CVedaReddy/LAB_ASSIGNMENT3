#include<stdio.h>
int main()
{
    int days;
    float fine;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days > 0 && days <= 5)
       {
fine = 0.50 * days;
       }

   else  if (days >= 6 && days <= 10)
       { 
        fine = 1 * days; 
       }

   else if (days > 10)
       { 
        fine = 5 * days; 
        }

        else (days > 30);
        {
            printf("Your membership would be canceled.\n");
        }
    printf("You have to pay Rs. %.2f fine.", fine);
    return 0; 
}
