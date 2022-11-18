//
// Created by National Cyber City on 11/15/2022.
//
#include "stdio.h"
#include "stdlib.h"

int db[100];
int dbMoney[100];
int main(){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    int flag=0;
    int global_flag=0;
    int dbIndex=0;
    int already_taken = 0;
    int back_option;
    while ( key<=10){

        printf("\n____WELCOME TO OUR GAME_____\n\n");
        printf("Enter your age : ");
        scanf("%d",&age);
        if(age>17){

            printf("----------------------");
            printf("\n| YOU CAN PLAY GAME! |\n");
            printf("----------------------");
            // entering the game
            while (true){
                global_flag = 0;
                // choose options
                printf("\n\nOPTIONS\n");
                printf("------------------------\n");
                printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit:\nPress 4 to Back\n");
                printf("------------------------\n");
                printf("Option : ");
                scanf("%d",&option);
                //options
                while (true){
                    //option 1
                    if(option==1){ // login options
                        printf("\n\nThis is Login\n");
                        printf("Enter your id : ");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){

                            if(db[i] == userId){
                                flag=1;
                            }

                        }
                        if(flag==1){
                            printf("---------------------\n");
                            printf("| You Can play game! |\n");
                            printf("---------------------\n\n");
                            // ဆက်ရေးရန်


                        } else{
                            printf("Your id is not valid\n");
                            break;
                        }

                    //option 2
                    } else if(option==2){ // register option

                        if(global_flag==1 || flag == 1){
                            break;
                        }

                        printf("\n\n-----------------\n");
                        printf("This is Register\n");
                        printf("-----------------\n");

                        printf("Pls Enter your id : ");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){
                            if(db[i]==userId){
                                flag=1;
                            }
                        }
                        while (true){
                            if(flag==1){
                                printf("\n----------------------------");
                                printf("\n!!! User Id Already Taken !!!");
                                printf("\n----------------------------\n");
                                break;
                            } else{
                                printf("Confirm your ID : ");
                                scanf("%d",&userId2);

                                if(userId==userId2){
                                    db[dbIndex]=userId;
                                    dbIndex;
                                    printf("Registration success:\n");
                                    //registration code
                                    global_flag = 1;
                                    //ဆက်ရေးရန်
                                    break;

                                } else{
                                    printf("----------------\n");
                                    printf("| ID not match |\n");
                                    printf("----------------\n");
                                    break;
                                }
                            }
                        }
                        
                    // option 3
                    } else if(option==3){ // exit option
                        exit(1);

                    // option 4
                    } else if(option == 4){ // go back option
                        break;

                    // default option
                    } else{ // invalid option
                        printf("Invalid Option!\n");
                        break;
                    }
                }

            }
        //unable to play game
        } else{
            printf("--------------------------------------\n");
            printf("| YOU CAN'T PLAY THIS GAME! TRY LATER!|\n");
            printf("--------------------------------------\n");
        }

    }


    return 0;
}