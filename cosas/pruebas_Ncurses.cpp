#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(){
    int startx, starty, width, height;
    initscr();
    height = 100;
    width = 30;

    starty = (LINES - height) / 2;
    startx = (COLS - width) / 2;
    printw("x");
    refresh();
    getch();

    endwin();

    return EXIT_SUCCESS;

}
