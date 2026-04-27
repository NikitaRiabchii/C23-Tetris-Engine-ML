#!/bin/bash
clang -std=c23 ../src/core.c ../src/common/actions.c ../src/common/get_block_function.c  -o tetris_test
mv tetris_test ../bin/my_personal_mac_m4_arm_verion_only_for_test