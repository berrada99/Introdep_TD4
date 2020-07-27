#include<stdio.h>
#include<curses.h>

int sub(int n1, int n2)
{
    // Just commenting	
    return n1 - n2;
}

int add(int n1, int n2)
{
    return n1 + n2;	
}

int main()
{
    printf("%i\n", sub(2, 3));	
    printf("%i\n", add(2, 3));	
    printf("Hello World\n");

    initscr();
    raw();
    printw("Hello World");
    getch();
    endwin();
    return 0;
}
