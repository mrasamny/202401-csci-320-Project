a.out: pg.o
	$(CC) -o $@ $?
pg.o:pg.c
	$(CC) -c $?



