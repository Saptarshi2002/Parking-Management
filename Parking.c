#include<stdio.h>
int menu();
int bus();
int car();
int cycle();
int bike();
int detail();
int delete();

int noc=0,nob=0,nocy=0,amount=0,count=0,nob;
int main()
{
    while(1)
    {
    switch(menu())
    {
        case 1:
            cycle();
            break;
        case 2:
            bike();
            break;
        case 3:
            car();
            break;
        case 4:
            bus();
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
    printf("\n1. Enter Cycle");
    printf("\n2. Enter Bike");
    printf("\n3. Enter Car");
    printf("\n4. Enter Bus");
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
    printf("\nTotal vehicle = %d",nob+noc+nocy);
    printf("\nTotal amount gained = %d",amount); 
    return 0;
}
int bus()
{
    nob++;
    amount+=50;
    count++;
    return 0;
}

int car()
{
    noc++;
    amount = amount + 20;
    count++;
    return 0;
}

int cycle()
{
    nocy++;
    amount+=10;
    count++;
    return 0;
}

int bike()
{
    nob++;
    amount+=20;
    count++;
    return 0;
}