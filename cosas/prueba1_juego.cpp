#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define x 100
#define y 30
#define win 1

int main(){
    int ch;
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw("Presiona cualquier tecla\n");
    ch = getch();
    if(ch == KEY_F(1))
        printw("Esto no se que hace");
    else {
        printw("La tecla que has pulsado es ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    refresh();
  //  getyx(win, x, y);
    getch();
    endwin();



    return EXIT_SUCCESS;

}
