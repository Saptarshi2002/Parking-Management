#include<stdio.h>
int menu();
int bus();
int car();
int cycle();
int detail();
int delete();

int noc=0,nob=0,nocy=0,amount=0,count=0;
int main()
{
    while(1)
    {
    switch(menu())
    {
        case 1:
            bus();
            break;
        case 2:
            car();
            break;
        case 3:
            cycle();
            break;
        case 4:
            detail();
            break;
        case 5:
            delete();
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
    printf("\nEnter choice\n");
    printf("\n1. Enter Bus");
    printf("\n2. Enter Car");
    printf("\n3. Enter Cycle");
    printf("\n4. Show data");
    printf("\n5. Delete Data\n");
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