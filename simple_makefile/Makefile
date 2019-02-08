OBJS = test.o \
#	   list.o
#
SRCS = $(OBJS:.o=.c)

CC = gcc

INC = -I/home/koo/test/
CFLAGS = -g $(INC)

TARGET = test

all: depend
	@$(MAKE) $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o test $(OBJS)

depend:
	$(CC) -MM $(INC) $(SRCS) > .depend

clean:
	rm -rf $(OBJS) $(TARGET)

sinclude .depend
