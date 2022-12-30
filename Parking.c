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

int noc=0,nob=0,nocy=0,amount=0,count=0,noby=0;
int main()
{
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
    nob++;
    amount+=50;
    count++;
    return 0;
}

int car_entry()
{
    noc++;
    amount = amount + 20;
    count++;
    return 0;
}

int cycle_entry()
{
    nocy++;
    amount+=10;
    count++;
    return 0;
}

int bike_entry()
{
    noby++;
    amount+=20;
    count++;
    return 0;
}