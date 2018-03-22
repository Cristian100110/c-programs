#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(){
    initscr();
    printw("Hola esto es texto\n");
    refresh();
    getch();
    def_prog_mode();
    endwin();
    system("/bin/sh");
    reset_prog_mode();

    refresh();

    printw("otras palabras\n");
    refresh();
    getch();
    endwin();



    return EXIT_SUCCESS;

}
