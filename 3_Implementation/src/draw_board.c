#include"../inc/functions.h"
void draw(char square[10],char player1_name[15],char player2_name[15]){
	
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("%s (X) \n%s (O) \n\n\n",player1_name,player2_name);
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}

