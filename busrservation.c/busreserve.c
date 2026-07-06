#include <stdio.h>

int main()
{
    char savedUser[5][21] = {"0","0","0","0","0"};
    char savedPass[5][21] = {"0","0","0","0","0"};
    int Registered =  0 ;
    int login =  0;
    int seat1 = 45;
    int seat2 = 50;
    int seat3 = 43;
    int seat4 = 35;
    int bookedbus = 0;
    int bookedseat = 0;
    int fare = 0;
    int choice = 0;
    int choosebus = 0;
    int seatno = 0;
    int usercount = 0;
    char inputUser[21], inputPass[21];

    do
    {
        
         printf("\n===== BUS RESERVATION SYSTEM =====\n");
        printf("\n1. Registration\n");
        printf("2. Login\n");
        printf("3. Bus Details\n");
        printf("4. Book Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Payment\n");
        printf("7. Exit\n");

        printf("\nEnter choice = ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:

            printf("Enter Username : ");
            scanf(" %20s", &savedUser[usercount]);
            
            printf("Enter Password : ");
            scanf(" %20s", &savedPass);

                usercount++;

            printf("\n----Registeration Successful----\n");

            break;

        case 2:
        if (usercount == 0)
        {
            printf("\nNo User Found\n");
        }else if (login == 1)
            {
                printf("\n----You are already logged in----\n");
            }
            else 
            {
                printf("Enter Username: ");
                scanf(" %20s", &inputUser);
                printf("Enter Password: ");
                scanf(" %20s", &inputPass);

                 int matchfound = 0;

                for (int i = 0; i < usercount; i++) 
                {
                    int userMatch = 1; 
                    int passMatch = 1;

                    for (int j = 0; j < 21; j++) 
                    {
                        if (inputUser[j] != savedUser[i][j]) userMatch = 0;
                        if (inputPass[j] != savedPass[i][j]) passMatch = 0;
                    }

                    if (userMatch == 1 && passMatch == 1) 
                    {
                        matchfound = 1;
                        break;
                    }
                }

            if(matchfound = 1)
             {
                        login = 1;
                        printf("\n----Login Successful----\n");
                    } else {
                        printf("\n----Invalid Username or Password----\n");
                    }
                }
                 break;
        case 3:

        printf("\n===== BUS DETAILS =====\n");
                printf("Bus Number: 101 | Route: From Delhi To Mumbai | Available Seats: %d\n", seat1);
                printf("Bus Number: 102 | Route: From Delhi To Chennai | Available Seats: %d\n", seat2);
                printf("Bus Number: 103 | Route: From Delhi To Kolkata | Available Seats: %d\n", seat3);
                printf("Bus Number: 104 | Route: From Delhi To Shimla | Available Seats: %d\n", seat4);
                break;
        case 4:
          if (login == 0)
          {
            printf("\n----Please Login First----\n");
          }else {
                    printf("Enter Bus Number: ");
                    scanf("%d", &choosebus);
                    printf("Enter Number of Seats: ");
                    scanf("%d", &seatno);

                    if(seatno <= 0)
                     {
                        printf("\n----Invalid Seat Number----\n");
                    } 
                    else if(choosebus == 101) {
                        if(seat1 >= seatno) {
                            seat1 -= seatno;
                            bookedbus = 101;
                            bookedseat = seatno;
                            fare = seatno * 350;
                            printf("\n----Booking Successful----\n");
                        } else {
                            printf("\n----Seats Not Available----\n");
                        }
                    } 
                    else if(choosebus == 102)
                     {
                        if(seat2 >= seatno) {
                            seat2 -= seatno;
                            bookedbus = 102;
                            bookedseat = seatno;
                            fare = seatno * 400;
                            printf("\n----Booking Successful----\n");
                        } else {
                            printf("\n----Seats Not Available----\n");
                        }
                    } 
                    else if(choosebus == 103)
                     {
                        if(seat3 >= seatno) {
                            seat3 -= seatno;
                            bookedbus = 103;
                            bookedseat = seatno;
                            fare = seatno * 150;
                            printf("\n----Booking Successful----\n");
                        } else {
                            printf("\n----Seats Not Available----\n");
                        }
                    } 
                    else if(choosebus == 104)
                     {
                        if(seat4 >= seatno) {
                            seat4 -= seatno;
                            bookedbus = 104;
                            bookedseat = seatno;
                            fare = seatno * 200;
                            printf("\n----Booking Successful----\n");
                        } else {
                            printf("\n----Seats Not Available----\n");
                        }
                    } 
                    else {
                        printf("\n----Invalid Bus Number----\n");
                    }
                }
                break;
        case 5:
          if(bookedbus == 0)
           {
                    printf("\n----No Ticket Booked----\n");
                }
                 else 
                 {
                printf("Enter Bus Number: ");
                scanf("%d", &choosebus);
                printf("Enter Seats to Cancel: ");
                scanf("%d", &seatno);

                if(choosebus == bookedbus && seatno <= bookedseat && seatno > 0)
                {
                    if(bookedbus == 101)      seat1 += seatno;
                    else if(bookedbus == 102) seat2 += seatno;
                    else if(bookedbus == 103) seat3 += seatno;
                    else if(bookedbus == 104) seat4 += bookedseat;

                    bookedbus = 0;
                    bookedseat = 0;
                    fare = 0;
                    printf("\n----Ticket Cancelled Successfully----\n");
                }
                else
                {
                    printf("\n----Invalid Bus Number or Seat Count----\n");
                }
            }
            break;
           
        case 6:
         if(fare == 0)
          {
                    printf("\n----No Booking Found----\n");
                }
                 else
                  {
                    printf("\nTotal Fare = %d\n", fare);
                    printf("\n----Payment Successful----\n");
                }
                break;
        case 7:

           printf("\n--Thank You--\n");
          break;

        default:
            printf("--Wrong Choice--\n");
        }

    } while(choice < 7);
    
    return 0;
}

