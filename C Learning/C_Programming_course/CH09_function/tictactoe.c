#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int checkWin (void);       // check if anyone wins
void redrawBoard (void);    // redraw the board
void markBoard (void);      // set the selection to the array and check for invalid move
char board[11] = "0123456789";
int gamevalue = 0;
int p1number;
int p2number;
bool turn = true;           // true means p1's turn. false means p2's turn.


// main game
int main(void)
{

    printf("\n\tTic-Tac-Toe Game\n\n");

    printf("\nPlayer 1 ---> O\nPlayer 2 ---> X\n\nPlayer 1 goes first.\n\n");

    redrawBoard();

    while(gamevalue == 0)
    {
        markBoard();
        redrawBoard();
        checkWin();
    }

    if(gamevalue == -1)
    {
        printf("\nGame End. It's a draw game.\n");
    }
    else if (turn == false){
        printf("\nGame End. Player 1 wins!\n");
    }
    else if (turn == true){
        printf("\nGame End. Player 2 wins!\n");
    }

    return 0;
}

// update the board status
void redrawBoard(void)
{
    system("cls");
    printf("\n\n");
    printf("     |     |   \n");
    printf("  %c  |  %c  |  %c\n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |   \n");
    printf("  %c  |  %c  |  %c\n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |   \n");
    printf("  %c  |  %c  |  %c\n", board[7], board[8], board[9]);
    printf("     |     |   \n");
}

// two player mark
void markBoard(void)
{

    if (turn == true)
    {
        printf("\n\nPlayer 1 enter the number to put O: ");
        scanf ("%d", &p1number);
        board[p1number] = 'O';
        turn = false;
    }
    else if (turn == false)
    {
        printf("\n\nPlayer 2 enter the number to put X: ");
        scanf ("%d", &p2number);
        board[p2number] = 'X';
        turn = true;
    }
}

// check win/draw.
// 1 means gameover and result is win/lose.
// 0 means still in progress
// -1 means gameover and result is draw.
int checkWin(void)
{
    // 1 status
    if (board[1] == board [2] && board[2]==board[3] )
    {
        gamevalue = 1;
    }
    else if (board[4] == board [5] && board[5]==board[6] )
    {
        gamevalue = 1;
    }
    else if (board[7] == board [8] && board[8]==board[9] )
    {
        gamevalue = 1;
    }
    else if (board[1] == board [4] && board[4]==board[7] )
    {
        gamevalue = 1;
    }
    else if (board[2] == board [5] && board[5]==board[8] )
    {
        gamevalue = 1;
    }
    else if (board[3] == board [6] && board[6]==board[9] )
    {
        gamevalue = 1;
    }
    else if (board[1] == board [5] && board[5]==board[9] )
    {
        gamevalue = 1;
    }
    else if (board[3] == board [5] && board[5]==board[7] )
    {
        gamevalue = 1;
    }

    // draw status
    else if
    (
        (board[1] != '1') && (board[2] != '2') && (board[3] != '3')&&
        (board[4] != '4') && (board[5] != '5') && (board[6] != '6')&&
        (board[7] != '7') && (board[8] != '8') && (board[9] != '9')
    )
    {
        gamevalue = -1;
    }
}
