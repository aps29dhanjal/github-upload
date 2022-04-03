#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include"src/draw_board.c"
#include"src/win.c"
#include "inc/functions.h"


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main(){
	
	int player = 1;
    int i ;
    int choice;
    char player1_name[15];
    char player2_name[15];
	char mark; 
    printf("Enter player1 name : ");
    scanf("%s",&player1_name);
    printf("Enter player2 name : ");
    scanf("%s",&player2_name);
	do {
		draw(square,player1_name,player2_name);
		
        if(player % 2 ==0){
            player=2;
            printf("%s, enter the choice : ",player2_name);
        }
        else{
            player=1;
             printf("%s, enter the choice : ",player1_name);
        }
		
		scanf("%d",&choice);
		
        if(player == 1){
            mark='X';
        }
        else{
            mark='O';
        }
        
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
				printf("Invalid option, Enter correct choice");
				player--;
				getch();
			}
			i = checkWin(square);
			player++;	
		
	}while(i == -1);
	
	draw(square,player1_name,player2_name);
	if(i==1){

		
        if(--player==1){
printf("--%s WON",player1_name);
        }
        else{
            printf("--%s WON",player2_name);
        }
		
	}
	else {
		printf("--GAME DRAW");
	}
		getch();
		return 0;
}

