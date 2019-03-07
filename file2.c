i#include<stdio.h>                              /*made by nipun singal himself*/

int main ()
{                                             /*declaring the variables*/
    int [20];                                  /*array is declared*/
    char ans,ans2;
    char name[20];
    int i=0,b;
printf("                  ***********Welcome to the C language Quiz****************\n");            /*program begins*/
printf("\n        Round1                     Round2                         Round3\n");
printf("       True/False (Q1-Q10)    Multiple Choice(Q11-Q15)       Multiple answers(Q16-Q20)\n");
printf("\n  ****Total marks=20****\n   Their is negative marking\n\n\n\n");
printf("Candidate name-");
scanf("%s",name);
printf("\n\n");
printf("Lets start the quiz\n\n");

for(a=0;a<=100;a++)                                /*for loop is used so that we can go to any question anytime*/
{         if(c==0)                                     /*if user enters 0 program comes out of loop and shows score*/
           {break;}
             printf("enter the question number you want to go or enter 0 to end the quiz:");
             scanf("%d",&i);

                  switch(i)                           /*switch case starts,it contains the quiz questions*/

                  {

                    case 1:printf("\nRound1 Begins.......Write T/F\n\n");
                     printf("Q1. C language is developed by Dennis M. Ritchie?\n answer--");
                     scanf("%s",&ans);                             /*this will store the users answer*/
                     if(ans=='T'||ans=='t')
                     {scr[0]=1;}                       /*if users answer is correct it will store 1 in the scr array*/
                     else                               /*otherwise zero in scr array*/
                     {scr[0]=-1;}
                     printf("\n\n");
                     break;


		     case 2:printf("\nRound1 Begins.......Write T/F\n\n");
                     printf("Q1. C language is developed by Dennis M. Ritchie?\n answer--");
                     scanf("%s",&ans);                             /*this will store the users answer*/
                     if(ans=='T'||ans=='t')
                     {scr[0]=1;}                       /*if users answer is correct it will store 1 in the scr array*/
                     else                               /*otherwise zero in scr array*/
                     {scr[0]=-1;}
                     printf("\n\n");
                     break;

