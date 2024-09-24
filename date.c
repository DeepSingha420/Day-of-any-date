#include<stdio.h>
#include<stdlib.h>

int leapcheck(int year)
{
    if(year%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int day(int l, int year, int month, int date)
{
    int n = (year-2000)/4;
    int sum = (year-2000)+n+date-1;

    if(month==3||month==11)
    {
        sum=sum+4;
    }
    else if(month==4||month==7)
    {
        sum=sum;
    }
    else if(month==9||month==12)
    {
        sum=sum+6;
    }
    else if(month==5)
    {
        sum=sum+2;
    }
    else if(month==6)
    {
        sum=sum+5;
    }
    else if(month==8)
    {
        sum=sum+3;
    }
    else if(month==10)
    {
        sum=sum+1;
    }
    else if(month==1)
    {
        if(l==1)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum;
        }
    }
    else if(month==2)
    {
        if(l==1)
        {
            sum=sum+4;
        }
        else
        {
            sum=sum+3;
        }
        
    }

    return sum;
}

int main()
{
    int year, month, date;

    printf("----- Day of Any Date-----\n");
    printf("\n\nMonth   |   Code\n");
    printf("------------------\n");
    printf("January\t1\n");
    printf("February\t2\n");
    printf("March\t3\n");
    printf("April\t4\n");
    printf("May\t5\n");
    printf("June\t6\n");
    printf("July\t7\n");
    printf("August\t8\n");
    printf("September\t9\n");
    printf("October\t10\n");
    printf("November\t11\n");
    printf("December\t12\n\n");


    printf("Please enter the year: ");
    scanf("%d",&year);
    printf("\nPlease enter the month (according to the chart): ");
    scanf("%d",&month);
    printf("\nPlease enter the date: ");
    scanf("%d",&date);

    int l = leapcheck(year);
    printf("\nThat day was/is/will be: ");
    int d = day(l,year,month,date);

    d = d%7;

    if(d==1)
    {
        printf("SUNDAY");
    }
    else if(d==2)
    {
        printf("MONDAY");
    }
    else if(d==3)
    {
        printf("TUESDAY");
    }
    else if(d==4)
    {
        printf("WEDNESDAY");
    }
    else if(d==5)
    {
        printf("THURSDAY");
    }
    else if(d==6)
    {
        printf("FRIDAY");
    }
    else if(d==7)
    {
        printf("SATURDAY");
    }

    return 0;
}