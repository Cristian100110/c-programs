#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

int main(){
    char mensaje[]="Una X";
    char str[80];
    int f, c;

    initscr();
    noecho();
    getmaxyx(stdscr, f, c);
    mvprintw(f/2,(c-strlen(mensaje))/2,"%s",mensaje);
    //fprintf(stdout,"jajajajaja");

    keypad(stdscr, TRUE);
    getstr(str);
    //mvprintw(LINES - 2, 0, "ha ingresado: %s", str);
    // mvprintw(f/2,0,"Esta pantalla tiene %d filas y %d columnas\n",f,c);
    refresh();
    getch();

    endwin();

    return EXIT_SUCCESS;

}
