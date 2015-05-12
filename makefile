lab5:HugeInt.o lab5.cpp
	g++ -o lab5 HugeInt.o lab5.cpp
HugeInt.o:HugeInt.h HugeInt.cpp
	g++ -c HugeInt.cpp
