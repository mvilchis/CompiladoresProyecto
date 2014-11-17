
all: interprete run

interprete:
	flex pylex.l
	bison --report=state -dv pypar.y -o pypar.cpp
	g++ pypar.cpp pylex.cpp builder.cpp composite.cpp  tabla_de_simbolos.cpp  -o proyecto
clean:
	rm *tab*
	rm lex.yy.c
run: 	
	./proyecto prueba_de_fuego.py
