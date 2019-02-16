/*
 * TicTacToe.c
 *
 *  Created on: Feb 15, 2019
 *      Author: gilescarlos32
 */

#include <stdio.h>

char square[3][3] = { {'*', '*', '*'},
						{'*', '*', '*'},
						{'*', '*', '*'} };

int checkwin();
void board();

int main()
{
    int player = 1, i, row, column;

    char mark;
    printf("\n\tTic Tac Toe\n\n");

    do {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a row:  ", player);
        scanf("%d", &row);
        printf("Player %d, enter a column:  ", player);
        scanf("%d", &column);

        mark = (player == 1) ? 'X' : 'O';

        if (row == 1 && column == 1 && square[0][0] == '*')
            square[0][0] = mark;
            
        else if (row == 1 && column == 2 && square[0][1] == '*')
        	square[0][1] = mark;
            
        else if (row == 1 && column == 3 && square[0][2] == '*')
        	square[0][2] = mark;
            
        else if (row == 2 && column == 1 && square[1][0] == '*')
        	square[1][0] = mark;
            
        else if (row == 2 && column == 2 && square[1][1] == '*')
        	square[1][1] = mark;
            
        else if (row == 2 && column == 3 && square[1][2] == '*')
        	square[1][2] = mark;
            
        else if (row == 3 && column == 1 && square[2][0] == '*')
        	square[2][0] = mark;
            
        else if (row == 3 && column == 2 && square[2][1] == '*')
        	square[2][1] = mark;
            
        else if (row == 3 && column == 3 && square[2][2] == '*')
        	square[2][2] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
        }
        i = checkwin();

        player++;
    } while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win! ", --player);
    else
        printf("==>\aTie Game!");


    return 0;
}

int checkwin()
{
    if ((square[0][0] == 'X' || square[0][0] == 'O')
    		&& square[0][0] == square[0][1] && square[0][1] == square[0][2])
        return 1;

    else if ((square[1][0] == 'X' || square[1][0] == 'O')
    		&& square[1][0] == square[1][1] && square[1][1] == square[1][2])
        return 1;
        
    else if ((square[2][0] == 'X' || square[2][0] == 'O') &&
    		square[2][0] == square[2][1] && square[2][1] == square[2][2])
        return 1;
        
    else if ((square[0][0] == 'X' || square[0][0] == 'O') &&
    		square[0][0] == square[1][0] && square[1][0] == square[2][0])
        return 1;
        
    else if ((square[0][1] == 'X' || square[0][1] == 'O') &&
    		square[0][1] == square[1][1] && square[1][1] == square[2][1])
        return 1;
        
    else if ((square[0][2] == 'X' || square[0][2] == 'O') &&
    		square[0][2] == square[1][2] && square[1][2] == square[2][2])
        return 1;
        
    else if ((square[0][0] == 'X' || square[0][0] == 'O') &&
    		square[0][0] == square[1][1] && square[1][1] == square[2][2])
        return 1;
        
    else if ((square[0][2] == 'X' || square[0][2] == 'O') &&
    		square[0][2] == square[1][1] && square[1][1] == square[2][0])
        return 1;
        
    else if (square[0][0] != '*' && square[0][1] != '*' && square[0][2] != '*' &&
    		square[1][0] != '*' && square[1][1] != '*' && square[1][2] != '*'
    		&& square[2][0] != '*' && square[2][1] != '*' && square[2][1] != '*')
        return 0;

    else
        return  - 1;
}

void board()
{
    printf("\nPlayer 1 (X)  -  Player 2 (O)\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[0][0], square[0][1], square[0][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[1][0], square[1][1], square[1][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[2][0], square[2][1], square[2][2]);

    printf("     |     |     \n\n");
}


