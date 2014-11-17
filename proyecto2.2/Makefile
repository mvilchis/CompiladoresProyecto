all: compila run

compila:
	g++ composite.cpp  -o composite -c
	g++ builder.cpp  -o builder -c
	g++ visitor.cpp -o visitor
run: 	
	./visitor
clean:
	rm builder
	rm visitor
	rm composite
	
