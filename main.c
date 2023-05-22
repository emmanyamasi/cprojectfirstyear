#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct library
{
    char student_number[100];
    int isbn_number;
    char book_name[100];
    char option[1];

};


int main()

{
  char password[20];
int login_attempts =0;
 const int max_login_attempts =3;
 int access_granted =0;
while (login_attempts<max_login_attempts&&!access_granted){

    printf("Please enter your password;\n");
    scanf("%s",password);
    if(strcmp(password,"Admin123")==0)
    {
        printf("login successful!Karibu.\n");
        access_granted =1;
    }else{
    login_attempts++;
    printf("Invalid password.%d attempts remaining.\n",max_login_attempts - login_attempts);
    }}
    if (!access_granted){

        printf("too many attempts.Exiting the program\n");
        return 1;
    }





struct library lib[100];
char book_name[100];
char option[1];
int isbn_number;

 int i,j,count1;
 i=0;
 j=0;
 count1 =0;
 while(j!=6)
 {
    printf("\n\n1.Borrow a Book\n");
    printf("2.View books borrowed and it details\n");
    printf("3.Return the book\n");
    printf("4.Exit\n\n");
    printf("Enter the number:");
    scanf("%d",&j);

switch(j){
case 1:
    printf("TYPES OF BOOKS OFFERED: \n");
    printf("1.Introduction to Programming. Author: Done Black. ISBN NO.1234,\n ");
    printf("2.Learning C. Author: McLincorn. ISBN NO.456,\n");
    printf("3.African Philosophy. Autho: Kanu Keita. ISBN NO. 895,\n");
    printf("4.My life in crime. Author: John kiriamiti. ISBN NO. 556,\n======");
    printf("please enter the following details to borrow a book\n");
    printf("\nEnter  student number:");
    scanf("%s",lib[i].student_number);
    printf("\nEnter ISBN-NUMBER :");
    scanf("%d",&lib[i].isbn_number);
    printf("\nEnter the book name:");
    scanf("%s",lib[i].book_name);
    printf("Do you want to issue another book[Y/N]:");
    scanf("%s", lib[i].option);
    if(option == "N"){
        exit(0);
    }
    else if(option == "Y"){
        break;
    }

    count1 =count1+1;
    i =i+1;
    break;
case 2:
    if (count1 ==0)
    {
        printf("\nThere are no books borrowed\n\n");
    }
    else
    {
        //view books borrowed
        printf("\nYou can view the list of books borrowed\n");
        printf("\nThe list of books are:");
        for(i=0; i <count1; i++)
        {
             printf("\nThe registration number is is : %s\n\n",lib[i].student_number);
              printf("\nThe ISBN  NUMBER is : %d\n\n",lib[i].isbn_number);
               printf("\nThe name of the book is : %s\n\n",lib[i].book_name);
        }
    }
break;


case 3:
    printf("Enter ISBN NUMBER of the book borrowed :");
     scanf("%d",&lib[i].isbn_number);
     if (isbn_number == 1)
     {
         printf("book returned successfully");
     }
     else if(isbn_number == 0)
     {

      printf("no match");


      }


case 4:
                // to exit from the program
                exit(0);




 default:
                // if any number other than 1, 2, 3, 4 is entered
                printf(" \nInvalid number entered\n\n ");


}



 }



}

