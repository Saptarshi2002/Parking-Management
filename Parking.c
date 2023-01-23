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

int NumberOfCar=0, NumberOfBus=0, NumberOfCycle=0, amount=0, count=0, NumberOfBike=0;
int PriceOfCar=0, PriceOfBus=0, PriceOfCycle=0, PriceofBike=0, CapacityOfCar=0, CapacityOfBus=0, CapacityOfCycle=0, CapacityOfBike=0;;
 int noCarIn=0,noBusIn=0, noCycleIn=0, noBikeIn=0;
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
    NumberOfBus=0;
    NumberOfCar=0;
    NumberOfCar=0;
    NumberOfCycle=0;
    amount=0;
    count=0;
    return 0;
}
int detail()
{
    printf("\nNumber of Bus= %d",NumberOfBus );
    printf("\nNumber of Car = %d",NumberOfCar);
    printf("\nNumber of Cycle = %d", NumberOfCycle);
    printf("\nNumber of Bike = %d", NumberOfBike);
    printf("\nTotal vehicle = %d",NumberOfBus+ NumberOfCar + NumberOfCycle + NumberOfBike);
    printf("\nTotal amount gained = %d",amount); 
    return 0;
}
int bus_entry()
{
    if(noBusIn < CapacityOfBus)
    {
        noBusIn++;
        NumberOfBus++;
        amount += PriceOfBus;
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
    if(noCarIn < CapacityOfCar)
    {
        noCarIn++;
        NumberOfCar++;
        amount += PriceOfCar;
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
    if (noCycleIn < CapacityOfCycle)
    {
        noCycleIn++;
        NumberOfCycle++;
        amount += PriceOfCycle;
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
    if(noBikeIn < CapacityOfBike)
    {
        noBikeIn++;
        NumberOfBike++;
        amount += PriceofBike;
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
    scanf("%d",&PriceOfCycle);
    printf("Enter the parking fees of bike: ");
    scanf("%d",&PriceofBike);
    printf("Enter the parking fees of car: ");
    scanf("%d",&PriceOfCar);
    printf("Enter the parking fees of bus: ");
    scanf("%d",&PriceOfBus);
    return 0;
}
int bus_exit()
{
    if(noBusIn > 0)
    {
        printf("Exit successfull!\n");
        noBusIn--;
    }
    else
    {
        printf("No bus inside to exit!!\n");
    }
    return 0;
}
int car_exit()
{
    if(noCarIn > 0)
    {
        printf("Exit successfull!\n");
        noCarIn--;
    }
    else
    {
        printf("No car inside to exit!!\n");
    }
    return 0;
}
int cycle_exit()
{   
    if(noCycleIn > 0)
    {
        printf("Exit successfull!\n");
        noCycleIn--;
    }
    else
    {
        printf("No cycle inside to exit!!\n");
    }
    return 0;
}
int bike_exit()
{ 
    if(noBikeIn > 0)
    {
        printf("Exit successfu ll!\n");
        noBikeIn--;
    }
    else
    {
        printf("No bike inside to exit!!\n");
    }
    return 0;
    return 0;
}

int capacity()
{
    printf("\n Please insert the capacity of each vehicle:\n");
    printf("Enter the total capacity of cycle: ");
    scanf("%d",&CapacityOfCycle);
    printf("Enter the total capacity of bike: ");
    scanf("%d",&CapacityOfBike);
    printf("Enter the total capacity of car: ");
    scanf("%d",&CapacityOfCar);
    printf("Enter the total capacity of bus: ");
    scanf("%d",&CapacityOfBus);
    return 0;
}
