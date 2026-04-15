#include "global-config.h"
#include "block_generation_functions.h"
#include "player_actions_functions.h"



void print_blosk(const uint8_t get_blosk[4][4]){
    for(int i=0; i<4; i++){
        printf("\n");
    for(int j=0; j<4; j++){
        printf("%d,",get_blosk[i][j]);
    }}}
int main(){
for (int i =0; i<7; i++){print_blosk(get_shape_of_blosk_funktion(PERMUTATIONS_OF_ALL_ELEMENTS[0][i]));}
return 0;}
