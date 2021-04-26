#include "include/console.h"



void kernel_early(void) {
}

int main(void) {
	print_line("Line 1");
	print_line("Line 2\nLine 3");
	print_string("Line 4\nLine 5\n");
	print_character('6');
	print_character('\n');
	print_character('7');
	print_character('\n');
	print_line("This is a line string");
	print_string("The following is a character: ");
	print_character('L');
	set_console_color(CONSOLE_CYAN);
	print_line("\nThis string\nhas new\nlines every\ntwo words");
}
