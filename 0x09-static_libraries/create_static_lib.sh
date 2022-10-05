#!/bin/bash
gcc -Wall -pedantic -Warror -Wextra -c *.c
ar rc liball.a *.o
