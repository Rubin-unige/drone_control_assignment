
#include <ncurses.h>
#include <unistd.h>  

int main() {

    // Define window dimensions
    int height = 20, width = 50, start_y = 0, start_x = 0;
    WINDOW *win = newwin(height, width, start_y, start_x);

    // Main game loop
    int ch;
    mvwprintw(win, 1, 1, "Drone Simulator");
    box(win, 0, 0); // Draw border
    wrefresh(win);

    while ((ch = getch()) != 'q') { // Press 'q' to quit
        werase(win);
        mvwprintw(win, 1, 1, "Key pressed: %c", ch);
        box(win, 0, 0);
        wrefresh(win);
        usleep(100000); // Sleep for 100ms
    }

    delwin(win);
    endwin();
    return 0;
}
