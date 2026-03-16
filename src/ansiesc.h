#ifndef CMC_ANSI_ESCAPE_H
#define CMC_ANSI_ESCAPE_H

#define _STRFCT(x) #x
#define XSTR(x) _STRFCT(x)

#define _txtfmt(attr, fg, bg) \
    attr;fg;bg

#define txtfmt(attr, fg, bg) \
    XSTR(\e[_txtfmt(attr, fg, bg)m)

// text attribute
#define RESET           XSTR(\e[00m)
#define NORMAL          00
#define BOLD            01
#define FAINT           02
#define ITALICS         03
#define UNDERLINED      04

// foreground color
#define FG_DEFAULT      39
#define FG_BLACK        30
#define FG_RED          31
#define FG_GREEN        32
#define FG_YELLOW       33
#define FG_BLUE         34
#define FG_MAGENTA      35
#define FG_CYAN         36
#define FG_LGRAY        37

#define FG_GRAY         90
#define FG_LRED         91
#define FG_LGREEN       92
#define FG_LYELLOW      93
#define FG_LBLUE        94
#define FG_LMAGENTA     95
#define FG_LCYAN        96
#define FG_WHITE        97

// background color
#define BG_DEFAULT      49
#define BG_BLACK        40
#define BG_RED          41
#define BG_GREEN        42
#define BG_YELLOW       43
#define BG_BLUE         44
#define BG_MAGENTA      45
#define BG_CYAN         46
#define BG_LGRAY        47

#define BG_GRAY         100
#define BG_LRED         101
#define BG_LGREEN       102
#define BG_LYELLOW      103
#define BG_LBLUE        104
#define BG_LMAGENTA     105
#define BG_LCYAN        106
#define BG_WHITE        107

enum text_color {
    DEFAULT = 39,
    BLACK = 30,
    RED,
    GREEN,
    YELLOW, 
    BLUE,
    MAGENTA,
    CYAB,
    LGRAY,
    GRAY = 90,
    LRED,
    LGREEN,
    LYELLOW,
    LBLUE,
    LMAGENTA,
    LCYAN,
    WHITE,
};

#define fg_color(color) color;
#define bg_color(color) color + 10;

#define itoa(strbuf, nm) sprintf(strbuf, "%d", nm);

#endif