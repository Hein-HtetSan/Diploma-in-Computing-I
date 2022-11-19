//
// Created by National Cyber City on 11/15/2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include <Windows.h>

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
    char ans;
    int choice;

    while ( key<=10){

        printf("\n\t\t--------------------------------");
        printf("\n\t\t|\tWELCOME TO OUR GAME\t|\n");
        printf("\t\t--------------------------------\n\n");
        printf("Enter your age : ");
        scanf("%d",&age);
        if(age>17){

            printf("\t\t----------------------");
            printf("\n\t\t| YOU CAN PLAY GAME! |\n");
            printf("\t\t----------------------");

            // entering the game
            while (true){
                global_flag = 0;

                // choose options
                printf("\n\n\t\tOPTIONS\n");
                printf("\t\t------------------------\n");
                printf("\t\tPress 1 to Login!\n\t\tPress 2 to Register\n\t\tPress 3 to Complete Quit\n\t\tPress 4 to Back\n");
                printf("\t\t------------------------\n");
                printf("Option : ");
                scanf("%d",&option);

                //options
                while (true){

                    //option 1
                    if(option==1){ // login options
                        printf("\n\n\t\t------------------\n");
                        printf("\t\t| This is Login! |\n");
                        printf("\n\t\t------------------\n");
                        printf("Enter your id : ");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){
                            if(db[i] == userId){
                                flag=1;
                            }
                        }
                        if(flag==1){

                            printf("\t\t---------------------\n");
                            printf("\t\t| You Can play game! |\n");
                            printf("\t\t---------------------\n\n");
                            
                            while(true)
                            {

                                printf("\t\t-----------------\n");
                                printf("\t\t| Lists Of Games |\n");
                                printf("\t\t------------------\n");
                                printf("\t\t1) Quiz Game\n\t\t2) Rock, Scissor, and Paper\n\t\t3) Tail and Head\n\t\t4) [4] to quit\n");
                                printf("\t\t------------------\n");
                                printf("Choose : ");
                                scanf("%d", &choice);

                                // Quiz game
                                if(choice == 1)
                                {

                                    //Quizes ----------------------------------------------------------------------------------------------
                                    int attempts = 3;
                                    int scores = 0;
                                    int quiz = 1;
                                    printf("\n\n\t\tThere are 5 quizes!\n");
                                    printf("\t\t--------------------\n");
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
                                                    printf("\n\t\t------------------\n");
                                                    printf("\t\t| Invalid Answer |");
                                                    printf("\n\t\t------------------\n");
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
                                                    printf("\n\t\t------------------\n");
                                                    printf("\t\t| Invalid Answer |");
                                                    printf("\n\t\t------------------\n");
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
                                                    printf("\n\t\t------------------\n");
                                                    printf("\t\t| Invalid Answer |");
                                                    printf("\n\t\t------------------\n");
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
                                                    printf("\n\t\t------------------\n");
                                                    printf("\t\t| Invalid Answer |");
                                                    printf("\n\t\t------------------\n");
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
                                                    printf("\n\t\t------------------\n");
                                                    printf("\t\t| Invalid Answer |");
                                                    printf("\n\t\t------------------\n");
                                                    break;
                                                }
                                        }
                                    }
                                    if(scores == 5){
                                        printf("\nCongralcuation!!\n");
                                    }
                                    printf("Your score : %d out of 5!\n\n", scores);
                                    // end of Quiz Game ---------------------------------------------------------------------------------------
                                    flag = 0;

                                }
                                //end of quiz games

                                //paper rock scissor
                                else if(choice == 2)
                                {
                                    srand(time(NULL));
                                    char ans;
                                    int count = 5;
                                    char database[3] = {'s', 'r', 'p'};
                                    int random = 0;
                                    char computer;
                                    printf("\n\n\t\t-------\n");
                                    printf("\t\tRules!\n");
                                    printf("\t\t-------\n");
                                    printf("\t\t[p] for paper\n\t\t[s] for scissor\n\t\t[r] for rock\n");
                                    printf("\t\t-------\n\n");

                                    while(true)
                                    {
                                        printf("Choose : ");
                                        scanf(" %c", &ans);
                                        if(ans=='s' || ans=='r' || ans=='p')
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\t\t------------------\n");
                                            printf("\t\t| Invalid Choice |\n");
                                            printf("\t\t------------------\n\n");
                                        }
                                    }

                                    random = rand() % 3;
                                    computer = database[random];

                                    while(count > 0)
                                    {
                                        printf("\nCounting...%d", count);
                                        count--;
                                        Sleep(1000);
                                    }
                                    
                                    if(ans=='r' && computer=='r')
                                    {
                                        printf("\n\t\t-------");
                                        printf("\n\t\tDraw\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='r' && computer=='p'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tLose!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='r' && computer=='s'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tWin!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='s' && computer=='r'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tLose!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='s' && computer=='s'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tDraw\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='s' && computer=='p'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tWin!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='p' && computer=='r'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tWin!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='p' && computer=='s'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tLose!\n");
                                        printf("\t\t--------\n");
                                    }else if(ans=='p' && computer=='p'){
                                        printf("\n\t\t-------");
                                        printf("\n\t\tDraw\n");
                                        printf("\t\t--------\n");
                                    }
                                    printf("\nYou = %c and Computer = %c!\n\n",ans ,computer);
                                }
                                //end of paper rock scissor

                                //tail and head
                                else if(choice == 3)
                                {
                                    //start
                                    srand(time(NULL));
                                    int user_coin = 1000;
                                    int computer_coin = 1000;
                                    char ans;
                                    int random = 0;
                                    int num=5;
                                    int comp_guess=0;
                                    int n=0;
                                    bool guess_user = false;
                                    bool guess_ai = false;
                                    int bet=0;
                                    printf("\n\n\t\t--------------------\n");
                                    printf("\t\t| Head or Tail Game |\n");
                                    printf("\t\t--------------------\n\n");

                                    while(true)
                                    {
                                        random = rand() % 2;

                                        printf("\n\n\t\t------------\n");
                                        printf("\t\t| Your Turn |\n");
                                        printf("\t\t------------\n\n");
                                        printf("You already have %d\n", user_coin);
                                        printf("Ai already have %d\n", computer_coin);
                                        printf("How much you bet, the computer also bets like you!! :) \n");
                                        while(true)
                                        {
                                            printf("Bet : ");
                                            scanf("%d", &bet);
                                            if(bet > user_coin)
                                            {
                                                printf("\n\t\t---------------\n");
                                                printf("\t\t| Not enough Coin |\n");
                                                printf("\t\t---------------\n");
                                            }else{
                                                break;
                                            }
                                        }
                                        
                                        user_coin = user_coin - bet;
                                        computer_coin = computer_coin - bet;
                                        while(num < 0 || num > 1)
                                        {
                                            printf("\t\t-------------------------------\n");
                                            printf("\t\t| [0] for Tail / [1] for Head |\n");
                                            printf("\t\t-------------------------------\n\n");
                                            printf("Guess : ");
                                            scanf("%d", &num);

                                            if(num > 1){
                                                printf("Invalid Input!\n");
                                            }
                                        }
                                        comp_guess = rand() % 2;
                                        printf("Computing is Guessing.....\n");
                                        while(n <= 100){
                                            printf("%d%c \n", n, 37);
                                            Sleep(1000);
                                            n+=50;
                                        }

                                        if(num==1){
                                            printf("\nyou guess head\n");
                                        }else{
                                            printf("\nyou guess tail\n");
                                        }
                                        if(comp_guess==1){
                                            printf("computer guess head\n");
                                        }else{
                                            printf("computer guess tail\n");
                                        }
                                        if(random == 1){
                                            printf("The answer is head\n\n");
                                        }else{
                                            printf("The answer is tail\n\n");
                                        }
                                        if(random == num){
                                            guess_user = true;
                                        }else{
                                            guess_user = false;
                                        }
                                        if(random == comp_guess){
                                            guess_ai = true;
                                        }else{
                                            guess_ai = false;
                                        }

                                        if(guess_user == true && guess_ai == true){
                                            user_coin = user_coin + bet;
                                            computer_coin = computer_coin + bet;
                                            printf("\t\t------\n");
                                            printf("\t\tDraw!\n");
                                            printf("\t\t------\n");
                                            printf("You now have %d\n", user_coin);
                                            printf("Ai now have %d\n", computer_coin);
                                        }else if(guess_user == true && guess_ai == false){
                                            user_coin = user_coin + bet*2;
                                            printf("\t\t------\n");
                                            printf("\t\tYou win\n");
                                            printf("\t\t------\n");
                                            printf("You now have %d\n", user_coin);
                                            printf("Ai now have %d\n", computer_coin);
                                        }else if(guess_user == false && guess_ai == true){
                                            computer_coin = computer_coin + bet*2;
                                            printf("\t\t------\n");
                                            printf("\t\tYou Lose!\n");
                                            printf("\t\t------\n");
                                            printf("You now have %d\n", user_coin);
                                            printf("Ai now have %d\n", computer_coin);
                                        }else{
                                            printf("\t\t------\n");
                                            printf("\t\tDraw\n");
                                            printf("\t\t------\n");
                                            printf("You now have %d\n", user_coin);
                                            printf("Ai now have %d\n", computer_coin);
                                        }
                                        
                                        num=5;
                                        n=0;
                                        guess_ai = false;
                                        guess_user = false;
                                        
                                        if(user_coin > 0 && computer_coin != 0)
                                        {
                                            //codes
                                            printf("Play More: Any Key for Yes or [N]o : ");
                                            scanf(" %c", &ans);
                                            if(computer_coin==0 || ans=='n' || ans=='N'){
                                                break;
                                            }
                                        }else if(computer_coin == 0 && user_coin == 0){
                                            printf("\t\t-----------------\n");
                                            printf("\t\tFinally All lose!\n");
                                            printf("\t\t-----------------\n");
                                            break;
                                        }
                                        else if(computer_coin == 0){
                                            printf("\n\n\t\t-------------------\n");
                                            printf("\t\t| Finally You win! |\n");
                                            printf("\t\t-------------------\n");
                                            break;
                                        }else{
                                            printf("\n\n\t\t-------------------\n");
                                            printf("\t\t| Finally You Lose! |\n");
                                            printf("\t\t-------------------\n");
                                            break;
                                        }
                                    }
                                    //end
                                }
                                //end of tail and head

                                //quit action
                                else if(choice == 4)
                                {
                                    break;
                                }
                                else{
                                    printf("\n\t\t-----------------\n");
                                    printf("\t\t| Invalid Choice |\n");
                                    printf("\t\t-----------------\n\n");
                                }  
                            }
                        } else{
                            printf("Your id is not valid\n");
                            break;
                        }
                        printf("press any key to back : ");
                        scanf(" %c", &ans);
                        if(ans >= 33 && ans <= 122){
                            break;
                        } 
                    //end of option 1

                    //option 2
                    } else if(option==2){ //register option
                        int count=0;
                        int n=0;
                        if(global_flag==1 || flag == 1){
                            break;
                        }

                        printf("\n\n\t\t-----------------\n");
                        printf("\t\tThis is Register\n");
                        printf("\t\t-----------------\n");

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
                                printf("\t\t-------------------------------\n");
                                printf("\t\t| ID must be 6 digits or more |\n");
                                printf("\t\t-------------------------------\n");
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
                                printf("\n\t\t----------------------------");
                                printf("\n\t\t!!! User Id Already Taken !!!");
                                printf("\n\t\t----------------------------\n");
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
                                    printf("\t\t----------------\n");
                                    printf("\t\t| ID not match |\n");
                                    printf("\t\t----------------\n");
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
            printf("\t\t--------------------------------------\n");
            printf("\t\t| YOU CAN'T PLAY THIS GAME! TRY LATER!|\n");
            printf("\t\t--------------------------------------\n");
        }
    }
    return 0;
}