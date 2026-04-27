#include<stdint.h>
#include<stdio.h>
// #include "./common/global_core_variables.h"
uint16_t get_blok_function(void);



// void print_block(uint16_t block){
// for(int r=0;r<4;r++){
// for(int c=0;c<4;c++){
// uint16_t bit=(block>>(15-(r*4+c)))&1;
// printf("%c ",bit?'1':'0');
// }printf("\n");}}

int main(){
    for (int i=0;i<49;i++){
        uint16_t block=get_blok_function();
        printf("%d\n",block);
    }
    
return 0;}
    
