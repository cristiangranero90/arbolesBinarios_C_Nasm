nasm -f elf32 nuevo.asm -o arbol.o
gcc -m32 -o ejecutable arbol.o -g arbol.c

