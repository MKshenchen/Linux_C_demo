cc = gcc
cflags = -Wall

srcs = $(wildcard *.c)
bins = $(patsubst %.c,%,$(srcs))

all: $(bins)

%: %.c
	$(cc) $(cflags) $< -o $@

.PHONY: clean

clean:
	rm -f $(bins)
