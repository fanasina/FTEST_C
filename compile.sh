#!/bin/bash
gcc test/is_good.c src/ftest/ftest.c src/tools_t/tools_t.c \
  src/permutation_t/permutation_t.c src/set_theoric_t/set_theoric_t.c \
  -I./src $1 -o launch_is_good_c #&& ./launch_is_good_c -h -p
