somain : so_main.o soxl.so
	g++ -o $@ $^ -ldl
soxl.so : so_xl.cpp so_xl.h
	g++ -fPIC -shared -o $@ $<
#so_main.o : so_main.cpp so_xl.h
#	g++ -c $<
.PHONY : clean
clean :
	-rm *.o *.so somain

