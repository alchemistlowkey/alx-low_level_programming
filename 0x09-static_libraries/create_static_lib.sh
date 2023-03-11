#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -Wno-unused -std=gnu89 -c *.c
ar -rc liball.a *.o
