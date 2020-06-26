#my general makefile template
CXX = gcc
CFLAGS = -Wall -Werror -pedantic -fpic -g
LIBSDIR = -L. -L/usr/lib
INCLUDEDIR = -I. -I/usr/include

#Library-related macros
#1st
LIBCORENAME = Init
LIBTARGET :=lib$(LIBCORENAME:=.so) #adding the "lib" prefix and the .so extension to LIBCORENAME
LIBSOURCE = $(LIBCORENAME)
LIBSOURCECFILE = $(LIBSOURCE:=.c)
LIBSOURCEOFILE = $(LIBSOURCE:=.o)

#Library-related macros PAS OUBLIER DE RAJOUTER -l$(LIBCORENAME2)
#2nd
LIBCORENAME2 = randomcase
LIBTARGET2 :=lib$(LIBCORENAME2:=.so) #adding the "lib" prefix and the .so extension to LIBCORENAME
LIBSOURCE2 = $(LIBCORENAME2)
LIBSOURCECFILE2 = $(LIBSOURCE2:=.c)
LIBSOURCEOFILE2 = $(LIBSOURCE2:=.o)

#Application-related macros
EXESOURCE = main
TARGET = $(EXESOURCE:=.exe)
EXESOURCECFILE = $(EXESOURCE:=.c)
EXESOURCEOFILE = $(EXESOURCE:=.o)

#Color settings for text messages according to terminal color table: black=0, red=1, green=2, yellow=3, blue=4, magenta=5, cyan=6, white=7     
COLOR=1

#To overload the content of the LD_LIBRARY_PATH
# export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:.

#Running the program
run: $(TARGET)
	@tput setaf ${COLOR} #setting color
	@echo "\n Running the executable " $(TARGET)
	@tput sgr0 #resetting color settings
	sh exportLD.sh $(TARGET)

all: $(TARGET) 

#Generating the executable
$(TARGET): $(EXESOURCEOFILE) $(LIBTARGET) $(LIBTARGET2) 
	@tput setaf ${COLOR} #setting color
	@echo "\n Generating the executable " $@ "from " $<
	@tput sgr0 #resetting color settings
	$(CXX) $(EXESOURCEOFILE) -l$(LIBCORENAME) -l$(LIBCORENAME2) $(LIBSDIR) -o $(TARGET) -lm

#Generating the 1st library binary code
# libmenu.so : menu.o
# gcc -Wall -Werror -pedantic -fpic -g -shared menu.o -o libmenu.so 

$(LIBTARGET): $(LIBSOURCEOFILE)
	@tput setaf ${COLOR} #setting color
	@echo "\n Generating the library binary code (shared lib .dll on Windows or .so on Linux) from object files (.o) " $@
	@tput sgr0 #resetting color settings
	$(CXX) $(CFLAGS) -shared $(LIBSOURCEOFILE) -o $(LIBTARGET)
	
#Generating the 2nd library binary code
# libdisplay.so : display.o
# gcc -Wall -Werror -pedantic -fpic -g -shared display.o -o libdisplay.so 

$(LIBTARGET2): $(LIBSOURCEOFILE2)
	@tput setaf ${COLOR} #setting color
	@echo "\n Generating the library binary code (shared lib .dll on Windows or .so on Linux) from object files (.o) " $@
	@tput sgr0 #resetting color settings
	$(CXX) $(CFLAGS) -shared $(LIBSOURCEOFILE2) -o $(LIBTARGET2)

	
#Generating an object file from a C file having the same name
.c.o:
	@tput setaf ${COLOR} #setting color
	@echo "\n Generating object file (.o)" $@ " from c source file (.c)" $<
	@tput sgr0 #resetting color settings
	$(CXX) $(CFLAGS) $(INCLUDEDIR) -c -o $@ $<

#Cleaning the content of the current directory
clean:
	@tput setaf ${COLOR} #setting color
	@echo "\n Cleaning temporary files"
	@tput sgr0 #resetting color settings
	rm -rf *.o *~ *.so *.exe

	

