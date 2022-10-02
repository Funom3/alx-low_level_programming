#!/bin/bash
gcc -Wall -c -pedantic -Werror -Wextra *.c
ar -rc liball.a *.o

