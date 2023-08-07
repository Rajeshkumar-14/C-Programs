#include <stdio.h>
#include <stdlib.h>

int get_possible_ways(int row, int col, int dest_row, int dest_col);

int main()
{
    int row = 4, col = 4;
    int dest_row = 4, dest_col = 8;
    int count = get_possible_ways(row, col, dest_row, dest_col);

    printf("Number of possible ways: %d", count);
    return 0;
}

int get_possible_ways(int row, int col, int dest_row, int dest_col)
{
    int i, j, count = 0;
    int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

    // check if destination is already reached
    if (row == dest_row && col == dest_col) {
        return 1;
    }

    // check for each possible move
    for (i = 0; i < 8; i++) {
        int new_row = row + moves[i][0];
        int new_col = col + moves[i][1];

        // check if move is within board limits
        if (new_row >= 1 && new_row <= 9 && new_col >= 1 && new_col <= 9) {

            // make the move recursively
            count += get_possible_ways(new_row, new_col, dest_row, dest_col);
        }
    }

    return count;
}
