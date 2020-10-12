#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cvr liball.a *.o
