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

                            //Quizes ----------------------------------------------------------------------------------------------
                            int attempts = 3;
                            int scores = 0;
                            char ans;
                            int quiz = 1;
                            printf("\n\nThere are 5 quizes!\n");
                            printf("--------------------\n");
                            
                            while(attempts > 0 && quiz <= 5)
                            {
                                
                                switch(quiz)
                                {
                                    case 1:
                                        printf("\n%d) In 1768, Captain James Cook set out to explore which ocean?\n", quiz);
                                        printf("(A)Pacific Ocean \t\t (B)Atlantic Ocean\n(C)Indian Ocean \t\t (D)Arctic Ocean\n");
                                        printf("Answer : ");
                                        scanf(" %c", &ans);
                                        if(ans == 'A'){
                                            printf("You rock!\n\n");
                                            scores++;
                                            quiz++;
                                        }else if(ans == 'C' || ans == 'B' || ans == 'D'){
                                            printf("Wrong Answer!\n\n");
                                            attempts--;
                                            quiz++;
                                            if(attempts == 1){
                                                printf("You have %d attempt!\n\n", attempts);
                                            }else{
                                                printf("You have %d attempts!\n\n", attempts);
                                            }
                                            if(attempts == 0){
                                                break;
                                            }
                                        } else{
                                            printf("\n------------------\n");
                                            printf("| Invalid Answer |");
                                            printf("\n------------------\n");
                                            break;
                                        }
                                    case 2:
                                        printf("%d) What is actually electricity?\n", quiz);
                                        printf("(A)A flow of water \t\t (B)A flow of air\n(C)A flow of electrons \t\t (D)A flow of atoms\n");
                                        printf("Answer : ");
                                        scanf(" %c", &ans);
                                        if(ans == 'C'){
                                            printf("Good Job!\n\n");
                                            scores++;
                                            quiz++;
                                        } else if(ans == 'A' || ans == 'B' || ans == 'D'){
                                            printf("Wrong Answer!\n\n");
                                            attempts--;
                                            quiz++;
                                            if(attempts == 1){
                                                printf("You have %d attempt!\n\n", attempts);
                                            }else{
                                                printf("You have %d attempts!\n\n", attempts);
                                            }
                                            if(attempts == 0){
                                                break;
                                            }
                                        } else{
                                            printf("\n------------------\n");
                                            printf("| Invalid Answer |");
                                            printf("\n------------------\n");
                                            break;
                                        }
                                    case 3:
                                        printf("%d) Which of the following is not an international organisation?\n", quiz);
                                        printf("(A)FIFA \t\t (B)NATO\n(C)ASEAN \t\t (D)FBI\n");
                                        printf("Answer : ");
                                        scanf(" %c", &ans);
                                        if(ans == 'D'){
                                            printf("You rock!\n\n");
                                            scores++;
                                            quiz++;
                                        } else if(ans == 'A' || ans == 'B' || ans == 'C'){
                                            printf("Wrong Answer!\n\n");
                                            attempts--;
                                            quiz++;
                                            if(attempts == 1){
                                                printf("You have %d attempt!\n\n", attempts);
                                            }else{
                                                printf("You have %d attempts!\n\n", attempts);
                                            }
                                            if(attempts == 0){
                                                break;
                                            }
                                        } else{
                                            printf("\n------------------\n");
                                            printf("| Invalid Answer |");
                                            printf("\n------------------\n");
                                            break;
                                        }
                                    case 4:
                                        printf("%d) Which of the following disorders is the fear of being alone?\n", quiz);
                                        printf("(A)Agoraphobia \t\t (B)Aerophabia\n(C)Acrophobia \t\t (D)Archnophobia\n");
                                        printf("Answer : ");
                                        scanf(" %c", &ans);
                                        if(ans == 'A'){
                                            printf("You rock!\n\n");
                                            scores++;
                                            quiz++;
                                        }else if(ans == 'C' || ans == 'B' || ans == 'D'){
                                            printf("Wrong Answer!\n\n");
                                            attempts--;
                                            quiz++;
                                            if(attempts == 1){
                                                printf("You have %d attempt!\n\n", attempts);
                                            }else{
                                                printf("You have %d attempts!\n\n", attempts);
                                            }
                                            if(attempts == 0){
                                                break;
                                            }
                                        } else{
                                            printf("\n------------------\n");
                                            printf("| Invalid Answer |");
                                            printf("\n------------------\n");
                                            break;
                                        }
                                    case 5:
                                        printf("%d) Which of the following is a song by the German heavy metal band \"Scorpions\"\n", quiz);
                                        printf("(A)Stairway to Heaven \t\t (B)Wind of Change\n(C)Don't Stop Me Now \t\t (D)Hey Jude\n");
                                        printf("Answer : ");
                                        scanf(" %c", &ans);
                                        if(ans == 'B'){
                                            printf("You rock!\n\n");
                                            scores++;
                                            quiz++;
                                        }else if(ans == 'A' || ans == 'C' || ans == 'D'){
                                            printf("Wrong Answer!\n\n");
                                            attempts--;
                                            quiz++;
                                            if(attempts == 1){
                                                printf("You have %d attempt!\n\n", attempts);
                                            }else{
                                                printf("You have %d attempts!\n\n", attempts);
                                            }
                                            if(attempts == 0){
                                                break;
                                            }
                                        } else{
                                            printf("\n------------------\n");
                                            printf("| Invalid Answer |");
                                            printf("\n------------------\n");
                                            break;
                                        }
                                    default:
                                        break;
                                }
                            }
                            if(scores == 5){
                                printf("\nCongralcuation!!\n");
                            }
                            printf("Your score : %d out of 5!\n\n", scores);
                            // end of Quiz Game ---------------------------------------------------------------------------------------
                            flag = 0;

                        } else{
                            printf("Your id is not valid\n");
                            break;
                        }

                    //option 2
                    } else if(option==2){ // register option
                        int count=0;
                        int n=0;
                        if(global_flag==1 || flag == 1){
                            break;
                        }

                        printf("\n\n-----------------\n");
                        printf("This is Register\n");
                        printf("-----------------\n");

                        //checking user ID
                        while(count < 6)
                        {
                            printf("Pls Enter your id : ");
                            scanf("%d",&userId);
                            n = userId;
                            
                            while(n != 0)
                            {
                                n=n/10;
                                count++;
                            }

                            if(count < 6)
                            {
                                printf("-------------------------------\n");
                                printf("| ID must be 6 digits or more |\n");
                                printf("-------------------------------\n");
                            }else{
                                break;
                            }
                            count = 0;
                        }
                        
                        //proofing User ID
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