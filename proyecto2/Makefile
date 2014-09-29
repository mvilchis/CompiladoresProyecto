
all: interprete run

interprete:
	flex pylex.l
	bison --report=state -dv pypar.y -o pypar.cpp
	g++ pylex.cpp pypar.cpp -o proyecto
clean:
	rm *tab*
	rm lex.yy.c
run: 	
	./proyecto prueba_de_fuego.py
