#include <stdlib.h>
#define MIN(n, m) ((n < m) ? n : m)
#define MAX(n, m) ((n > m) ? n : m)

enum state {UP, DOWN, LEFT, RIGHT};

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
	*outsz = rows * cols;
	int *array = malloc(sizeof(int) * *outsz);
  
	char state = RIGHT;
	int x = 0, y = 0;
	int min_col = 0, max_col = cols-1;
	int min_row = 0, max_row = rows-1;
  
	for (size_t step = 0; step < *outsz; step++) {
		array[step] = mx[y][x];
		switch(state) {
		case RIGHT:
			x = MIN(x + 1, max_col);
			if (x != max_col) break;
			state = DOWN;
			min_row++;
			break;
		case DOWN:
			y = MIN(y + 1, max_row);
			if (y != max_row) break;
			state = LEFT;
			max_col--;
			break;
		case LEFT:
			x = MAX(x - 1, min_col);
			if (x != min_col) break;
			state = UP;
			max_row--;
			break;
		case UP:
			y = MAX(y - 1, min_row);
			if (y != min_row) break;
			state = RIGHT;
			min_col++;
			break;
		}
	} 
  
	return array;
}
