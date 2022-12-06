.PHONY: process copy clean

CC=gcc
INCLUDE_PATH=../include
CFLAGS=-I$(INCLUDE_PATH) -g -Wall -c
INSTALL_PATH=/usr/bin/
LIBRARY_PATH=../library/
LDFLAGS=
SFILE=$(wildcard *.c)
DFILE=$(patsubst %.c,%.o,$(SFILE))
TARGET=process_copy
RM = rm -rf

$(TARGET) :$(DFILE) 
	$(CC) $^  -o $@

%.o:%.c
	$(CC) $(CFLAGS) $<

clean:
	$(RM) $(TARGET)
	$(RM) $(DFILE)
