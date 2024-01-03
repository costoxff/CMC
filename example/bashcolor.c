#include <stdio.h>
#include "bashcolor.h"

#define put_fmt_str(str, fmt) \
    printf("%s%s%s\n", fmt, str, RESET)

#define next_line printf("\n")


int main()
{
    put_fmt_str("Hello World!", txtfmt(NORMAL,     FG_DEFAULT, BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(BOLD,       FG_DEFAULT, BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(FAINT,      FG_DEFAULT, BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(ITALICS,    FG_DEFAULT, BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(UNDERLINED, FG_DEFAULT, BG_DEFAULT));

    next_line;

    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_BLACK,    BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_RED,      BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_GREEN,    BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_YELLOW,   BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_BLUE,     BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_MAGENTA,  BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_CYAN,     BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LGRAY,    BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_GRAY,     BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LRED,     BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LGREEN,   BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LYELLOW,  BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LBLUE,    BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LMAGENTA, BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_LCYAN,    BG_DEFAULT));
    put_fmt_str("Hello World!", txtfmt(NORMAL, FG_WHITE,    BG_DEFAULT));

    next_line;

    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_BLACK));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_RED));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_GREEN));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_YELLOW));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_BLUE));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_MAGENTA));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_CYAN));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LGRAY));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_GRAY));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LRED));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LGREEN));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LYELLOW));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LBLUE));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LMAGENTA));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_LCYAN));
    put_fmt_str("Hello World!", txtfmt(NORMAL, BG_DEFAULT ,BG_WHITE));

    return 0;
}