#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

 struct Cars {

    string mark [10] = {"Hyundai","BMW","Mercedes","Audi","Tesla","Skoda","Volkswagun","Toyota","Ford"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};

    string maxs_peed [10]={"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};

   };

   struct Lessee {

   string Name [10];

   int payment_acc [ 10] ;
   };

   //Declaring struct
 Cars car ;
 Lessee lessee ;

 //First output
   void Minu ()
 {


   int num=1;
 for(int i=0 ;i<9;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.mark[i]<<endl;
    num++ ;
 }

 }

 //Second output
 void Details (int theChoice)
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tMaximum Speed : "<<car.maxs_peed[theChoice-1]<<endl;


  }

 //User Inputcpo
  void user_input (int theChoice)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n";
       cout<<"\t\t\tEnter Your Name : ";
      cin>>lessee.Name[j];

   }


int main()
{
	int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tSIMPLE CAR RENTAL SYSTEM \n";
     cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }

   else {
      if(decide=="no")
      {
      	system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
    	system("CLS");

         break ;
     }

   }
     }


    return 0;
}
/* else if(strcmp(uid,"admin")==0&&strcmp(pwd,"admin123")==0)
            {
                printf("\n\n            WELCOME ADMIN");
                Sleep(3000);
                cls();
                int adch;
        admin:  printf("\n\n            Enter Choice:\n");
                printf("            1. View Menu\n");
                printf("            2. Update Menu\n");
                printf("            3. View Recent Order\n");
                printf("            4. Log Out\n");
                scanf("%d", &adch);
                cls();
                if(adch==4)
                    goto mainscr;
                switch(adch)
                {
                    case 1:cls();
                        printf("\nSNACKS:\n");
                        foodlist(&s);
                        Sleep(3000);
                        printf("\nMAIN COURSE:\n");
                        foodlist(&m);
                        Sleep(3000);
                        printf("\nDESSERT:\n");
                        foodlist(&d);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                        }
                        break;
                    case 3: //Sleep(3000);
                        cls();
                        printf("Recent Order:\n");
                        foodlist1(&o);
                        printf("\nPress 0 to continue.\n");
                        scanf("%d", &ch);
                        if(ch==0)
                        {
                            goto admin;
                        }

                        break;
                    case 2:
                        cls();
                        float fcu, pu;
                        char fnameu[50];
                        printf("UPDATE MENU\n");
                        printf("What do you want to update?\n");
                        printf("Enter Choice:\n");
                        printf("1.Snacks\n2.Main Course\n3.Dessert\n");
                        scanf("%d", &ch);
                        switch(ch)
                        {
                            case 1: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&s, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&s);
                                    break;
                            case 2: printf("\nEnter Food Code:\n");
                                    scanf("%f", &fcu);
                                    printf("\nEnter Food name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&m, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&m);
                                    break;
                            case 3: printf("\nEnter car Name:\n");
                                    scanf("%s", &fnameu);
                                    printf("\nEnter price:\n");
                                    scanf("%f", &pu);
                                    insertend(&d, fcu, fnameu, 1, pu);
                                    printf("\nMENU UPDATED\n");
                                    foodlist(&d);
                                    break;

                        }
                        goto admin;
                        break;
*/

int login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t     Car Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13)
    {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
