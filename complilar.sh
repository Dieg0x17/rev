#!/bin/bash
if [ -n $1 ] && [ -r $1 ]; then
	echo "Desactivamos ASLR"
	echo 0 > /proc/sys/kernel/randomize_va_space
	echo "Compilando.. "
	gcc -ggdb -fno-stack-protector -m32 -mpreferred-stack-boundary=2 -o $1.o $1
else
	echo "Activamos ASLR"
	echo 1 > /proc/sys/kernel/randomize_va_space

fi
