#include<stdio.h>
int menu();
int bus_entry();
int car_entry();
int cycle_entry();
int bike_entry();
int bus_exit();
int car_exit();
int cycle_exit();
int bike_exit();
int detail();
int delete();
int set_price();
int capacity();

int noc=0,nob=0,nocy=0,amount=0,count=0,noby=0;
int poc=0,pob=0,pocy=0,poby=0,coc=0,cob=0,cocy=0,coby=0;;
 int noci=0,nobi=0,nocyi=0,nobyi=0;
int main()
{
    set_price();
    capacity();
    while(1)
    {
    switch(menu())
    {
        case 11:
            cycle_entry();
            break;
        case 21:
            bike_entry();
            break;
        case 31:
            car_entry();
            break;
        case 41:
            bus_entry();
            break;
         case 10:
            cycle_exit();
            break;
        case 20:
            bike_exit();
            break;
        case 30:
            car_exit();
            break;
        case 40:
            bus_exit();
            break;
        case 5:
            detail();
            break;
        defalt :
            printf("\nwrong choice\n");
    }
    }
    return 0;
}

int menu()
{
    int ch;
    printf("\nEnter Choice\n");
    printf("\n11. Enter Cycle");
    printf("\n10. Exit Cycle");
    printf("\n21. Enter Bike");
    printf("\n20. Exit Bike");
    printf("\n31. Enter Car");
    printf("\n30. Exit Car");
    printf("\n41. Enter Bus");
    printf("\n40. Exit Bus");
    printf("\n5. Show data\n");
    scanf("%d",&ch);
    return(ch);
}

int delete()
{
    nob=0;
    noc=0;
    noc=0;
    nocy=0;
    amount=0;
    count=0;
    return 0;
}
int detail()
{
    printf("\nNumber of Bus= %d",nob );
    printf("\nNumber of Car = %d",noc);
    printf("\nNumber of Cycle = %d",nocy);
    printf("\nNumber of Bike = %d",noby);
    printf("\nTotal vehicle = %d",nob+noc+nocy+noby);
    printf("\nTotal amount gained = %d",amount); 
    return 0;
}
int bus_entry()
{
    if(nobi<cob)
    {
        nobi++;
        nob++;
        amount+=pob;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
        printf("\n!!Capacity full!!\n");
    }
    return 0;
}

int car_entry()
{
    if(noci<coc)
    {
        noci++;
        noc++;
        amount = amount + poc;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
        printf("\n!!Capacity full!!\n");
    }
    return 0;
}

int cycle_entry()
{
    if(nocyi<cocy)
    {
        nocyi++;
        nocy++;
        amount+=pocy;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
       printf("\n!!Capacity full!!\n"); 
    }
    return 0;
}

int bike_entry()
{
    if(noby<coby)
    {
        nobyi++;
        noby++;
        amount+=poby;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
       printf("\n!!Capacity full!!\n"); 
    }
    return 0;
}

int set_price()
{
    printf("\nPlease set the parking fees of vehicles:\n");
    printf("Enter the parking fees of cycle: ");
    scanf("%d",&pocy);
    printf("Enter the parking fees of bike: ");
    scanf("%d",&poby);
    printf("Enter the parking fees of car: ");
    scanf("%d",&poc);
    printf("Enter the parking fees of bus: ");
    scanf("%d",&pob);
    return 0;
}
int bus_exit()
{
    return 0;
}
int car_exit()
{
    return 0;
}
int cycle_exit()
{
    return 0;
}
int bike_exit()
{
    return 0;
}

int capacity()
{
    printf("\n Please insert the capacity of each vehicle:\n");
    printf("Enter the total capacity of cycle: ");
    scanf("%d",&cocy);
    printf("Enter the total capacity of bike: ");
    scanf("%d",&coby);
    printf("Enter the total capacity of car: ");
    scanf("%d",&coc);
    printf("Enter the total capacity of bus: ");
    scanf("%d",&cob);
    return 0;
}