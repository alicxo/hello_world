CXXFLAGS = -g -Wall -Wfatal-errors

ALL = demo

all: $(ALL)

demo: demo.cc Makefile
	$(CXX) $(CXXFLAGS) -o $@ $@.cc

clean:
	$(RM)	$(ALL) *.o

