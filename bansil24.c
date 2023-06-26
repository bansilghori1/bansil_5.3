/*Q.2 Write a Program to create a menu-driven program for Telecom call service conversation
 using nested switch case.#include<stdio.h>*/
#include<stdio.h>
#include<conio.h>

int  main(){
int choice,a,b,c;

printf("Press 1 for English\nPress 2 for Hindi\nPress 3 for Gujarati\n");

printf("enter your choice :  ");
scanf("%d",&choice);


switch(choice){

case 1:

     printf("Press 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
     
     printf("enter your choice :  ");
     scanf("%d",&a);
     
     switch(a){
            
      case 1 : 
          printf("You have successfully done Internet  Recharge\n");
          break;
      case 2 :
          printf("You have successfully done Top-up Recharge\n");
          break;
      case 3 :
          printf("You have successfully done special Recharge\n");
          break;
        }
        break; 

case 2:

     printf("Internet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n");
     
     printf("enter your choice : ");
     scanf("%d",&b);
     
      switch(b){
      case 1 :
          printf("Aapne safaltapurvak Internet Recharge kar liya he\n");
          break;
      case 2 : 
          printf("Aapne safaltapurvak top-up Recharge kar liya he liya he\n");
          break;
      case 3: 
          printf("Aapne safaltapurvak special Recharge kar liya he\n");
          break;
     }
     break;

case 3:


printf("Internet Recharge mate 1 dabavo\nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");

printf("enter your choice : ");
scanf("%d",&c);
   
     switch(c){

      case 1 : 
          printf("Tame safaltapurvak Internet  Recharge karyu che\n");
          break;
      case 2 :
          printf("Tame safaltapurvak Top-up Recharge karyu che\n");
          break;
      case 3 : 
          printf("Tame safaltapurvak Special Recharge karyu chhe\n");
          break;
    }
    break;

}

return 0;
getch ();
}