#!/bin/bash

clang++ --std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Werror $@ \
&& \
./a.out
