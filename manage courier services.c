#include <stdio.h>
struct pack{
    char time[10];
    char place[20];
    char date[10];
    char exp_date[10];
    char status[20];
};
int main()
{
    struct pack p1;
    int choice,m,n;
    char ch,shed[50][20],address[50][20],ph[10];
    do{
        printf("****Delivery Service*****");
        printf("\n1.Track package\n2.Update delivery status\n3.manage delivery schedules\n4.shedule details");
        printf("\n5.To add destination address\n6.veiw destination detais\n7.add delivery man's phone no");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("\ndate:%s",p1.date);
                printf("\ntime:%s",p1.time);
                printf("\nthe pakage %s at %s",p1.status,p1.place);
                printf("\nPhone no:%d",ph);
                break;
            case 2:
                printf("\nEnter the date:");
                scanf("%s",p1.date);
                printf("\nEnter the time:");
                scanf("%s",p1.time);
                printf("\nEnter the place:");
                scanf("%s",p1.place);
                printf("\n Enter the status:");
                scanf("%s",p1.status);
                break;
            case 3:
                printf("\nEnter no of lines:");
                scanf("%d",&n);
                printf("\nEnter the schedule details:\n");
                for (int i=0;i<n;i++)
                {
                    scanf(" %[^\n]",shed[i]);
                }
                break;
            case 4:
                printf("\n Scheduled dates:\n");
                for (int i=0;i<n;i++)
                {
                    printf("%s\n",shed[i]);
                }
                break;
            case 5:
                printf("\n No of lines recuried for address:");
                scanf(" %d",&m);
                printf("\nEnter the address with phone no:\n");
                for (int i=0;i<m;i++)
                {
                    scanf(" %[^\n]",address[i]);
                }
                break;
            case 6:
                printf("\nthe destination address is:\n");
                for (int i=0;i<m;i++)
                {
                    printf("%s\n",address[i]);
                }
                break;
            case 7:
                printf("Enter the phone number:");
                scanf(" %s",&ph);
                printf("\n%s",ph);
                break;

        }
        printf("\nDo you want to continue (y/n):");
        scanf(" %c",&ch);
    }while (ch=='Y'||ch=='y');
    printf("\nexiting.....");
    return 0;
}