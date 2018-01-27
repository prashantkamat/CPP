CC=g++

CFLAGS=-c -Wall

all: ppkamat

ppkamat: ppkamat_agency.o ppkamat_team.o ppkamat_player.o
	$(CC) ppkamat_agency.o ppkamat_team.o ppkamat_player.o -o ppkamat

ppkamat_agency.o: ppkamat_agency.cc
	$(CC) -c ppkamat_agency.cc

ppkamat_team.o: ppkamat_team.cc
	$(CC) -c ppkamat_team.cc

ppkamat_player.o: ppkamat_player.cc
	$(CC) -c ppkamat_player.cc

clean:
	rm -rf *o ppkamat

