CC = g++
CFLAGS = -Wall -g -pg -fpermissive
OBJFILES = hello.o
TARGET = hello
RM = rm -f

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES); rm *.o

clean:
	rm -f $(OBJFILES) $(TARGET)
