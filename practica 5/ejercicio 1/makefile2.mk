run: ej2
	./ej2

ej2: ej2.c funcion.c
	gcc -o ej2 ej2.c funcion.c
	