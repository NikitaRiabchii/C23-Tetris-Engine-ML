#include "./global_core_variables.h"
#include <stdint.h>
#include <stdlib.h>
#include <time.h>


uint16_t get_blok_function(void){
    static uint16_t blocks_array[7]={I_SHAPE_BLOK,J_SHAPE_BLOK,L_SHAPE_BLOK,O_SHAPE_BLOK,S_SHAPE_BLOK,T_SHAPE_BLOK,Z_SHAPE_BLOK};
    static uint16_t position = 0;
    if (position % 7 == 0) {
    srand(time(NULL));
    for (int i = 6; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = blocks_array[i];
        blocks_array[i] = blocks_array[j];
        blocks_array[j] = temp;
    }}
    return blocks_array[position++ % 7];
}
