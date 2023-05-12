#include<stdio.h>
#include<stdlib.h>
long long int contact_no;
int date_of_stay,no_of_rooms,no_of_days,choice,choice_4,price_of_room,price_of_food,price_of_AC,total_price,choice_2,choice_3;
char name[50],address[70],month_of_stay[50];

//function to display welcome message
void welcome()
{
        int i, j, k = 0;
    for (i = 3; i >= 0; i--)
    { printf("\t\t\t\t\t\t");
        for (j = 3; j > k; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j < (k * 2); j++)
            printf(" ");
        if (i < 3)
        printf("*");
        printf("\n");
        k++;
    }
    printf("\n\t\t\t\t\t     W E L C O M E\n");
    printf("\t\t\t\t\t\t  T O\n");
    printf("\t\t\t\t\t  A U R A   H O T E L\n\n");
    for (i = 3; i >= 0; i--)
    {    printf("\t\t\t\t\t\t");
        for (j = 3; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (j = 1; j < (i * 2); j++)
            printf(" ");
        if (i >= 1)
        printf("*");
        printf("\n");
    }
}

//function to enter personal details
void enter_details()
{
    printf("  \n\n\tENTER YOUR PERSONAL DETAILS  \n");
    printf("\n\t\t\tEnter Name : ");
    gets(name);
    printf("\n\t\t\tEnter Address : ");
    gets(address);
    printf("\n\t\t\tEnter Contact Number : ");
    scanf("%lld",&contact_no);
    getchar();
    printf("\n\t\t\tEnter Month of Stay : ");
    gets(month_of_stay);
    printf("\n\t\t\tEnter Date of Stay : ");
    scanf("%d",&date_of_stay);
    getchar();
}

//function to display personal details
void show_details()
{
    printf("\n\n\tYOUR PERSONAL DETAILS  :\n\n");
    printf("\t\t\tName : %s \n\n",name);
    printf("\t\t\tContact number: %lld\n\n",contact_no);
    printf("\t\t\tAddress : %s\n\n",address);
    printf("\t\t\tDate : %d\n\n",date_of_stay);
    printf("\t\t\tMonth : %s\n\n",month_of_stay);
}

//function to calculate total price to be paid
void Billing()
{
if(choice==1)
   {
     price_of_room=3500;
   }
   else if(choice==2)
   {
     price_of_room=4000;

   }
else
   {
       printf("chose from the above options only");
   }
if(choice_3==1)
     {
       price_of_food=300;
     }
else if(choice_3==2)
     {
       price_of_food=400;
     }
 else
     price_of_food=0;
switch(choice_4)
    {
    case 1: price_of_AC=400;
	break;
    case 2: price_of_AC=0;
	break;
    }
    total_price=(price_of_AC+price_of_room+price_of_food)*no_of_rooms*no_of_days;
}

//function to enter choices
void booking_display()
{
    printf("\n\n\t\t\t\t\t***BOOKING SUCCESSFUL***");
    printf("\n\n\n\t\t\tBooking from %d %s\n",date_of_stay,month_of_stay);
    printf("\n\t\t\tNumber of Stay Days %d\n",no_of_days);
    printf("\n\t\t\tNumber of Rooms %d\n",no_of_rooms);
    printf("\n\t\t\tRoom :");
    if(choice==1)
    {
        printf("Single Lounge\n");
    }
    else if(choice==2)
        printf("Double Lounge\n");
    else
        printf("no selected lounge");
    if(choice_2==1)
    {
        if(choice_3==1)
     {
       printf("\n\t\t\tVeg Food Availed\n");

     }
        else if(choice_3==2)
     {
        printf("\n\t\t\tNon-Veg Food Availed\n");
     }
     else
     {
         printf("\n\t\t\t no food option selected");
     }
    }
    if(choice_4==1)
    {
        printf("\n\t\t\tA/c Room Provided\n");
    }
    else if (choice_4==2)
       {
           printf("\n\t\t\tNon_A/c Room Provided\n");
       }
    printf("\n\t\t\t\t  TOTAL PRICE TO BE PAID : Rs. %d\n",total_price);
    printf("\n\n\t\t\t\t  ******* T H A N K  Y O U ! *******\n ");
}

//function to display all booking details
void booking_details()
{
    printf("\n\n\t\t\t\t\t.......BOOKING DETAI1LS ........\n\n");
    printf("\n\t\t\tNumber of Rooms you would like to Book : ");
    scanf("%d",&no_of_rooms);
    printf("\n\t\t\tEnter the Number of Days of your Stay : ");
    scanf("%d",&no_of_days);
    printf("\n\t\t\t**Room Options**\n");
    printf("\t\t\t  1.Single Lounge (Rs. 3500)\n");
    printf("\t\t\t  2.Double Lounge (Rs. 4000)\n");
    printf("\n\t\t\t  Enter your choice : ");
    scanf("%d",&choice);
    printf("\n\t\t\t**Food Options**\n");
    printf("\t\t\t  Avail Food (1 for Yes, 2 for No ) : ");
    scanf("%d",&choice_2);
    if(choice_2==1)
    {
     printf("\t\t\t  Type of food:\n");
     printf("\t\t\t  1.Veg food (Rs. 300)\n");
     printf("\t\t\t  2.Non-Veg food (Rs. 500)\n");
     printf("\n\t\t\t  Enter your choice : ");
     scanf("%d",&choice_3);
    }
    else
    {
     printf("    Decision Accepted\n");
     price_of_food=0;
    }
    printf("\n\t\t\t**Room Facilities**\n");
    printf("\t\t\t  1.A/c room(Rs. 400 extra)\n");
    printf("\t\t\t  2.Non-A/c room(No extra charges)\n");
    printf("\n\t\t\t  Enter your choice : ");
    scanf("%d",&choice_4);
}
int main()
{
    int y;
    char a;
    printf("\n\n\t\t\t\t****WELCOME TO HOTEL MANAGEMENT PROJECT**** \n\n");
    welcome();
    printf("\n\n                                        PRESS ENTER TO CONTINUE . . .");
    scanf("%c",&a);
    if(a=='\n')
    system("cls");
    //loop to ask the user if they have entered correct info, if not then enter again
    do
    {
    enter_details();
    show_details();
    printf("\t\tAre the above details correct? (press 1 for correct and any other number for not correct ) : ");
    scanf("%d",&y);
    getchar();
    system("cls");
    }
    while(y!=1);
    system("cls");
    booking_details();
    system("cls");
    Billing();
    system("cls");
    booking_display();
    system("pause");
    return 0;
}
