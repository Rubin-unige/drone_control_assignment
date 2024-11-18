
#include <ncurses.h>
#include <unistd.h>  

int main() {

    initscr();            // Start ncurses mode

    // Define window dimensions
    int height = 20, width = 50, start_y = 0, start_x = 0;
    WINDOW *win = newwin(height, width, start_y, start_x);

    // Main simulatio board
    int ch;
    mvwprintw(win, 1, 1, "Drone Simulator");
    box(win, 0, 0);
    wrefresh(win);

    while ((ch = getch()) != 'q') { 
        werase(win);
        mvwprintw(win, 1, 1, "Key pressed: %c", ch);
        box(win, 0, 0);
        wrefresh(win);
        usleep(100000); 
    }

    delwin(win);
    endwin();
    return 0;
}
