#include <stdio.h>

char board[101] = {
	0,
	0, 38, 0, 0, 0, 0, 14, 31, 0, 0,
	0, 0, 0, 0, 26, 6, 0, 0, 0, 0,
	42, 0, 0, 0, 0, 0, 0, 84, 0, 0,
	0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 25, 0, 0, 11, 0,
	67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 19, 0, 60, 0, 0, 0, 0, 0, 0,
	91, 0, 0, 53, 0, 0, 0, 98, 0, 0,
	0, 0, 0, 0, 0, 0, 94, 0, 68, 0,
	0, 88, 0, 0, 75, 0, 0, 0, 80, 0,
};

int turn;
int player1;
int player2;

const char *snakes_ladders (int die1, int die2) {
	int *player = (turn % 2) ? &player2 : &player1;
	*player += die1 + die2;
	if (*player >= 99)
		// loop around the board
		*player = (*player / 100 % 2) ? 100 - (*player % 100) : *player % 100; 
	if (board[*player]) *player = board[*player];
  
	static char message[128];
	if (message[9] == 'W' || message[9] == '!') sprintf(message, "Game over!");
	else if (*player == 100) sprintf(message, "Player %d Wins!", turn % 2 + 1);
	else sprintf(message, "Player %d is on square %d", turn % 2 + 1, *player);
  
	if (die1 != die2) turn++;
	return message;
}
