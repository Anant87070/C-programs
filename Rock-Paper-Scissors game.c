#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Function to generate a random number between 0 and n-1
int generateRandomNumber(int n){
    srand(time(NULL));  //srand take seed as an input and is defined inside stdio.h
    return rand()%n;
}
//Function to determine the winner b/w the player and the computer

int greater(char char1, char char2) {
    if (char1 == char2) {
        return -1;  // Draw
    }
    else if ((char1 == 'r' && char2 == 's') || 
             (char1 == 'p' && char2 == 'r') || 
             (char1 == 's' && char2 == 'p')) {
        return 1;  // Player wins
    }
    else {
        return 0;  // Herculas wins
    }
}

int main(){
    int playerScore = 0,HerScore =0, temp;
    char playerChar,HerChar;
    char dict[] ={'r','p','s'};
    printf("\nHYE GUY! Welcome to the Rock Paper Scissor Game.\n");
    printf("You will face off against Herculas(computer)!\n"); 
    printf("Let's Start the Game...\n");
    //Game has a 3 rounds
    for(int i=0;i<3;i++)
    {
    
    printf("Round %d:\n", i+1);
    printf("Player 1's Turn:\n");
    printf(" Choose Your Option:\n 1:ROCK\n 2:Paper\n 3:Scissors\n");
    scanf("%d",&temp);
    getchar();
    playerChar= dict[temp-1];
    printf("You chose %c\n\n",playerChar);

    //Generat computer's input

    printf("Herculas Turn:\n");

    //   printf("choose 1 for Rock , 2 for Paper and 3 for Scissor\n");
    temp = generateRandomNumber(3) + 1;
    HerChar= dict[temp-1];
    printf("Herculas chose %c\n",HerChar);

    // Compare the scores
    if(greater(HerChar,playerChar)==1){
        HerScore +=1;
        printf("Herculas Got it!\n");
    }
    else if(greater(HerChar,playerChar)== -1){
           printf("It's a Draw!\n");
    }
    else{
        playerScore +=1;
        printf("You Got it!\n");
    }
    printf("SC0RE:\nYou: %d\nHerculas:%d\n\n",playerScore,HerScore );
    }
    
    if(playerScore > HerScore){
        printf("you win the game\n");
    }
    else if(playerScore < HerScore){
        printf("Herculas win the game\n");
    }
    else{
        printf("It's a Draw\n");
    }
    return 0;
} 