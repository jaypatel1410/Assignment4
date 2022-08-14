#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n=5;
    printf("The table of 5 is given below\n");
    for(i=1;i<=12;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    getch();
    return 0; 
}
/*
printf("\nEnter the number for which you want table\n");
scanf("%d",&n);
printf("Below is the table of %d\n",n);
*/