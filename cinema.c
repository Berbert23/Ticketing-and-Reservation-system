#include <stdio.h>
#include <stdlib.h>



void Movies(  ){
       int film;
       printf(" 1. Harry Potter\n 2. StarWars\n 3. World War Z \n");


            printf("\nChoose the filme you want to see\n");
              scanf("%d", &film);

         while(film) {
                system("cls");
                seat();
         }

}
void seat( ) {
        int seat;
       printf("Now, enter the seat:  \n");

       printf("\n Avaiable Seats: \n   1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10\n");
             scanf("%d", &seat);

             if(seat > 0 && seat <= 10) {
                    system("cls");
                   Payment( );
             }
            else {
                  exit(0); ;
            }


}
 void Payment(  ){
        int number;
        printf( " \n Insert the number of yours credit card:   " );
         scanf("%d", &number);

              if(number > 0) {
                     printf("Thank you, your payment was approved");
                      ;
                     exit(0);
              }
              else {
                    printf("Invalid credit card");
                    Payment( );
                     system("cls");
                    printf("\n");
              }

 }


void menu (  ) {

         int choice;
         printf("\n Welcome to Menu\n");

         printf("\t 1. Choose Movie: \n\t 2. Avaible sets. \n\t 3. Payment \n\t 4. Exit\n\t" );


           scanf("%d", &choice);
            switch (choice)
            {
            case 1 :
               system("cls");
               Movies( );
                break;
            case 2 :
                system("cls");
               seat( );
                break;
            case 3 :
               system("cls");
               Payment ( );
                  break;
            case 4 :
               exit (0);
                  break;
            }
}

int main(  ){
       int choose;

      printf(" Welcome to the movie theather \n");

         printf("Press 0 to enter the Menu, or 1 to exit  ");
               scanf("%d" , &choose);


              if(choose == 0) {
                   system ("cls");
                   menu( );
              }

              else if( choose == 1) {
                   exit(0);
              }

}
#include <stdio.h>
#include <stdlib.h>



void Movies(  ){
       int film;
       printf(" 1. Harry Potter\n 2. StarWars\n 3. World War Z \n");


            printf("\nChoose the filme you want to see\n");
              scanf("%d", &film);

         while(film) {
                system("cls");
                seat();
         }

}
void seat( ) {
        int seat;
       printf("Now, enter the seat:  \n");

       printf("\n Avaiable Seats: \n   1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10\n");
             scanf("%d", &seat);

             if(seat > 0 && seat <= 10) {
                    system("cls");
                   Payment( );
             }
            else {
                  exit(0); ;
            }


}
 void Payment(  ){
        int number;
        printf( " \n Insert the number of yours credit card:   " );
         scanf("%d", &number);

              if(number > 0) {
                     printf("Thank you, your payment was approved");
                      ;
                     exit(0);
              }
              else {
                    printf("Invalid credit card");
                    Payment( );
                     system("cls");
                    printf("\n");
              }

 }


void menu (  ) {

         int choice;
         printf("\n Welcome to Menu\n");

         printf("\t 1. Choose Movie: \n\t 2. Avaible sets. \n\t 3. Payment \n\t 4. Exit\n\t" );


           scanf("%d", &choice);
            switch (choice)
            {
            case 1 :
               system("cls");
               Movies( );
                break;
            case 2 :
                system("cls");
               seat( );
                break;
            case 3 :
               system("cls");
               Payment ( );
                  break;
            case 4 :
               exit (0);
                  break;
            }
}

int main(  ){
       int choose;

      printf(" Welcome to the movie theather \n");

         printf("Press 0 to enter the Menu, or 1 to exit  ");
               scanf("%d" , &choose);


              if(choose == 0) {
                   system ("cls");
                   menu( );
              }

              else if( choose == 1) {
                   exit(0);
              }

}
