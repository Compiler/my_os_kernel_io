#include "../console.h"


unsigned int _position = 0;


void shift(){
    for(int pos = 0; pos < (VGA_WIDTH * VGA_HEIGHT * BYTES_PER_CHAR) - (VGA_WIDTH * BYTES_PER_CHAR); pos++){
        VGA_MEMORY[pos] = VGA_MEMORY[pos + VGA_WIDTH * BYTES_PER_CHAR];
    }


}

void new_line(){
    _position = (2 * ((_position/2) + (VGA_WIDTH - ((_position/2) % VGA_WIDTH))));
}
void print_character(char character){
    if(character == '\n'){
            new_line();
            return;
    }
    VGA_MEMORY[_position++] = character;
    VGA_MEMORY[_position++] = _console_color;
}

void print_string(char* str){
    unsigned int i = 0;
    while(str[i++] != NULL_TERMINATE){
            print_character(str[i-1]);
    }
}

void print_line(char* str){
    print_string(str);
    new_line();
}


void set_console_color(int newColor){
    _console_color = newColor;
}