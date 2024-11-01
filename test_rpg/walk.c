#include <stdio.h>

char walk(int op, int lines, int cols, char table[lines][cols]) {
    int found = 0;
    char place = ' ';

    switch (op) {
        case 8:
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < cols; j++) {
                    char actual = table[i][j];
                    char upper = table[i-1][j];
                    if (actual == 'P' && upper == '-' && !found) {
                        table[i][j] = '-';
                        table[i-1][j] = 'P';
                        found = 1;
                    }
                }
            }
            break;
        
        case 2:
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < cols; j++) {
                    char actual = table[i][j];
                    char lower = table[i+1][j];
                    if (actual == 'P' && lower == '-' && !found) {
                        table[i][j] = '-';
                        table[i+1][j] = 'P';
                        found = 1;
                    }
                }
            }
            break;

        case 4:
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < cols; j++) {
                    char actual = table[i][j];
                    char left = table[i][j-2];
                    if (actual == 'P' && left == '-' && !found) {
                        table[i][j] = '-';
                        table[i][j-2] = 'P';
                        found = 1;
                    }
                }
            }
            break;

        case 6:
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < cols; j++) {
                    char actual = table[i][j];
                    char right = table[i][j+2];
                    if (actual == 'P' && right == '-' && !found) {
                        table[i][j] = '-';
                        table[i][j+2] = 'P';
                        found = 1;
                    }
                }
            }
            break;

        case 5:
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < cols; j++) {
                    if (table[i][j] == 'P') {
                        if (table[i][j+2] == 'N') {
                            place = table[i][j+2];
                        } else if (table[i][j-2] == 'N') {
                            place = table[i][j-2];
                        } else if (table[i+1][j] == 'N') {
                            place = table[i+1][j];
                        } else if (table[i-1][j] == 'N') {
                            place = table[i-1][j];
                        }
                    }
                }
            }
            return place;
            break;

        default:
            printf("\nInvalid option");
            break;
    }

    return 0;
}