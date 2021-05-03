#include "include/console.h"
#include "io.h"


void kernel_early(void) {
}

int main(void) {
	
    unsigned char byte;
    unsigned char word[4];
    int index= 0;
    while(1){
        while(byte = scan()){
                print_character(charmap[byte]);
                if(index < 4) word[index++] = charmap[byte];
                else{
                    word[0] = word[1];word[1] = word[2];word[2] = word[3];
                    word[3] = charmap[byte];
                }
                if(word[0] == 'e' && word[1] == 'x' && word[2] == 'i' && word[3] == 't') print_line("\nGoodbye.");  
            }
    }
}
