#include <stdint.h>
uint16_t rotate_block_90_left(uint16_t block){uint16_t rotated=0;for(int r=0;r<4;r++){for(int c=0;c<4;c++){uint16_t bit=(block>>(15-(r*4+c)))&1;int new_pos=(3-c)*4+r;if(bit){rotated|=(1<<(15-new_pos));}}}return rotated;}
uint16_t rotate_block_90_right(uint16_t block){uint16_t rotated=0;for(int r=0;r<4;r++){for(int c=0;c<4;c++){uint16_t bit=(block>>(15-(r*4+c)))&1;int new_pos=c*4+(3-r);if(bit){rotated|=(1<<(15-new_pos));}}}return rotated;}
