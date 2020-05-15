all:	
	bison -d -v project1.y
	flex project1.lex
	gcc -o parser project1.tab.c lex.yy.c -lfl
