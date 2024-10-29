all:
	bison -d -t 1907004.y
	flex 1907004.l
	g++ 1907004.tab.c lex.yy.c
	./a