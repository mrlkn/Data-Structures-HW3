hepsi:	derle	program	calistir

derle:
	g++	-I	./include/	-o	./lib/islem.o	-c	./src/islem.cpp
	g++	-I	./include/	-o	./lib/kuyruk.o	-c	./src/kuyruk.cpp
	g++	-I	./include/	-o	./lib/ikiliaramaagaci.o	-c	./src/ikiliaramaagaci.cpp
	g++	-I	./include/	-o	./lib/dugum.o	-c	./src/dugum.cpp
program:
	g++	-I	./include/	-o	./bin/program	./lib/ikiliaramaagaci.o	./lib/islem.o	./lib/dugum.o	./lib/kuyruk.o	./src/main.cpp
calistir:
	./bin/program.exe