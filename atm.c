#include<stdio.h>
int main()
{
    int i,choice;
    float cash=0;
    char c;
    do{
        printf("\nATM \n1.Withdraw\n2.Deposite\n3.Check Balance\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                int withdraw;
                printf("\n Enter amonut to withdraw: ");
                scanf("%d",&withdraw);
                if(withdraw%100==0)
                {
                    if(cash>=withdraw)
                    {
                        printf("\n Amount after withdraw of cash is %f\n",cash);
                    }
                    else
                    {
                        printf("\n You do not have sufficient balance. please deposite\n");
                    }
                }
                else
                {
                    printf("\n Enter withdraw amount in 100's\n");
                }
                break;
            }
            case 2:{
                int deposite;
                printf("\n Enter amount to deposite ");
                scanf("%d",&deposite);
                if(deposite%100==0)
                {
                    cash=cash+deposite;
                    printf("\n Balance after deposite amount is %f\n",cash);
                }
                else
                {
                   printf("\n Please enter amount in 100's\n");
                }
              break;  
            }
            case 3:{
                printf("Balance amount is 52f\n",cash);
            break;
            }
            default:{
                printf("\n Enter valid choice\n");
                break;
            }     
               
        }
    printf("\n To continue press '1' else any letter");
    fflush(stdin);
    scanf("%c",&c);
    }
     while(c=='1');
     {
        printf("\nThankyou for using ATM\n");
     }
}