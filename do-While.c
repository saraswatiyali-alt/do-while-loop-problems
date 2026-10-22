//Based on do-While loop
#include<stdio.h>
int main()
{



    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=5);


    int n=3;
    do
    {
        printf("%d\n\n",n);
        n++;
    }
    while(n>=7);


//Menu-driven program

    int choice;
    do
    {
        printf("\n1.Addition\n");
        printf("\n2.Subtraction\n");
        printf("\n3.Exit\n");


        printf("\nEnter your choice:");
        scanf("%d",&choice);


    }
    while(choice!=3);
    printf("program stopped");
    return 0;



}

