#include <stdio.h>
#include <stdlib.h>

void printMenu() {
    printf("\nSelect an option:");
    printf("\n8 - Move up");
    printf("\t\t4 - Move left");
    printf("\n2 - Move down");
    printf("\t\t6 - Move right");
    printf("\n5 - To interact\n");
}

void printTable(int lines, int cols, char table[lines][cols]) {
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", table[i][j]);
        }
        printf("\n");
    }
}

void npcInteract() {
    system("cls");
    printf("NPC: Hello!");
    getchar();
}