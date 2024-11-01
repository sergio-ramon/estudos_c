#include <stdio.h>
#include <stdlib.h>
#include "walk.h"
#include "actions.h"

#define lines 6
#define cols 23

int main() {
    int op = 0, place;
    char table[lines][cols] = {
        {'X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',
        ' ','X',' ','X',' ','X',' ','X',' ','X'},
        {'X',' ','-',' ','-',' ','-',' ','-',' ','-',' ','-',
        ' ','-',' ','-',' ','-',' ','-',' ','X'},
        {'X',' ','-',' ','-',' ','P',' ','-',' ','-',' ','-',
        ' ','-',' ','-',' ','-',' ','-',' ','X'},
        {'X',' ','-',' ','-',' ','-',' ','-',' ','-',' ','-',
        ' ','-',' ','N',' ','-',' ','-',' ','X'},
        {'X',' ','-',' ','-',' ','-',' ','-',' ','-',' ','-',
        ' ','-',' ','-',' ','-',' ','-',' ','X'},
        {'X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',
        ' ','X',' ','X',' ','X',' ','X',' ','X'}
    };

    system("cls");
    printTable(lines, cols, table);
        
    while (1) {
        printMenu();
        scanf("%d%*c", &op);
        
        place = walk(op, lines, cols, table);

        if (place == 'N') npcInteract();

        system("cls");
        printTable(lines, cols, table);
    }

    return 0;
}