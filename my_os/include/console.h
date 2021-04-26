#ifndef CONSOLE_H
#define CONSOLE_H

#define NULL_TERMINATE '\0'



#define CONSOLE_BLACK           0x00
#define CONSOLE_BLUE            0x01
#define CONSOLE_GREEN           0x02
#define CONSOLE_CYAN            0x03
#define CONSOLE_RED             0x04
#define CONSOLE_PURPLE          0X05
#define CONSOLE_BROWN           0X06
#define CONSOLE_GRAY            0X07
#define CONSOLE_DARK_GRAY       0X08
#define CONSOLE_LIGHT_BLUE      0X09
#define CONSOLE_LIGHT_GREEN     0X0A
#define CONSOLE_LIGHT_CYAN      0X0B
#define CONSOLE_LIGHT_RED       0X0C
#define CONSOLE_LIGHT_PURPLE    0X0D
#define CONSOLE_YELLOW          0X0E
#define CONSOLE_WHITE           0X0F


#define BYTES_PER_CHAR           2
#define CONSOLE_COLOR_DEFAULT   CONSOLE_LIGHT_GREEN
static int _console_color = CONSOLE_COLOR_DEFAULT;

static char* const VGA_MEMORY = (char*) 0xb8000;
static const int VGA_WIDTH =    80;
static const int VGA_HEIGHT=    25;

extern unsigned int _position;


void set_console_color(int);
void new_line();
void print_character(char);
void print_string(char*);
void print_line(char*);
void shift();

#endif