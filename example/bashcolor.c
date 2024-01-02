#include <stdio.h>
#include "bashcolor.h"

#define put_color_str(str, fg, bg) \
    printf("%s%s%s%s\n", fg, bg, str, RESET)

#define put_fmt_str(str, fmt) \
    printf("%s%s%s\n", fmt, str, RESET)

#define next_line printf("\n")


int main()
{
    char *str = "Hellow World";

    put_fmt_str(str, NORMAL);
    put_fmt_str(str, BOLD);
    put_fmt_str(str, FAINT);
    put_fmt_str(str, ITALICS);
    put_fmt_str(str, UNDERLINED);

    next_line;

    put_color_str(str, BLACK, BG_DEFAULT);
    put_color_str(str, RED, BG_DEFAULT);
    put_color_str(str, GREEN, BG_DEFAULT);
    put_color_str(str, YELLOW, BG_DEFAULT);
    put_color_str(str, BLUE, BG_DEFAULT);
    put_color_str(str, MAGENTA, BG_DEFAULT);
    put_color_str(str, CYAN, BG_DEFAULT);
    put_color_str(str, LGRAY, BG_DEFAULT);

    put_color_str(str, GRAY, BG_DEFAULT);
    put_color_str(str, LRED, BG_DEFAULT);
    put_color_str(str, LGREEN, BG_DEFAULT);
    put_color_str(str, LYELLOW, BG_DEFAULT);
    put_color_str(str, LBLUE, BG_DEFAULT);
    put_color_str(str, LMAGENTA, BG_DEFAULT);
    put_color_str(str, LCYAN, BG_DEFAULT);
    put_color_str(str, WHITE, BG_DEFAULT);

    next_line;

    put_color_str(str, WHITE, BG_BLACK);
    put_color_str(str, WHITE, BG_RED);
    put_color_str(str, WHITE, BG_GREEN);
    put_color_str(str, WHITE, BG_YELLOW);
    put_color_str(str, WHITE, BG_BLUE);
    put_color_str(str, WHITE, BG_MAGENTA);
    put_color_str(str, WHITE, BG_CYAN);
    put_color_str(str, BLACK, BG_LGRAY);

    put_color_str(str, WHITE, BG_GRAY);
    put_color_str(str, BLACK, BG_LRED);
    put_color_str(str, BLACK, BG_LGREEN);
    put_color_str(str, BLACK, BG_LYELLOW);
    put_color_str(str, BLACK, BG_LBLUE);
    put_color_str(str, BLACK, BG_LMAGENTA);
    put_color_str(str, BLACK, BG_LCYAN);
    put_color_str(str, BLACK, BG_WHITE);

    return 0;
}