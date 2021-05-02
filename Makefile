# test\Makefile

################################################################
## Makefile is used to build library "libmy_game.a",
## to use this library, make and run test (test_)
################################################################

# Compiler to use
CCOMPILER = g++

# Test name
#TEST = _character


################################################################
## LIBRARY
# Library path
#LIB_DIR = ../lib

# Library archive
LIB = my_figure
LIB_NAME = $(LIB_DIR)/lib$(LIB).a
#LIB_NAME = lib$(LIB).a

# Library source
SRC_LIB_DIR = src
SRC_LIB = $(wildcard $(LIB_DIR)/$(SRC_LIB_DIR)/*.cpp)
# Library include (headers)
INC_LIB_DIR = inc

# Library object
OBJ_LIB_DIR = obj
OBJ_LIB = $(patsubst %,$(LIB_DIR)/$(OBJ_LIB_DIR)/%, $(notdir $(SRC_LIB:.cpp=.o)))
################################################################

################################################################
## APPLICATION
TARGET = figure

# Test path
#TEST_DIR = test

# Use for final application
# Application source
SRC_APP = $(wildcard *.cpp)

# TODO - When there are all test apps, use argument to run each test
# As we are testing now, there will be only one test app for each test
#TEST_APP = $(wildcard $(TARGET).cpp)

# Application object
#TEST_OBJ_APP_DIR = obj
#OBJ_APP = $(patsubst %,$(TEST_OBJ_APP_DIR)/%, $(&(TEST_APP):.cpp=.o))
#OBJ_APP_DIR = obj
#OBJ_APP = $(patsubst %,$(OBJ_APP_DIR)/%, $(SRC_APP:.cpp=.o))
OBJ_APP = $(SRC_APP:.cpp=.o)
################################################################

################################################################
# Defining compiler, compiler flags and linker flags
CC = $(CCOMPILER)
DEBUG_FLAG = -g
CFLAGS_LIB = -std=c++11 -I$(LIB_DIR)/$(INC_LIB_DIR)
CFLAGS_APP = -std=c++11 -I$(LIB_DIR)/$(INC_LIB_DIR)
LFLAGS_APP = -l$(LIB) -L$(LIB_DIR)
W_PEDANTIC = -Wall -pedantic

# rm is Linux command, it is not installed with current MinGW
# that is why "RM = del" line is added (del is Windows command)
# if &(RM) is not defined it will be translated as rm
# if rm command is added, just comment line below
#RM = del
################################################################

## make library is first to set it as default make rule

################################################################
## make library
#$(LIB_NAME) : $(OBJ_LIB)
#	$(AR) cr $@ $^

#$(LIB_DIR)/$(OBJ_LIB_DIR)/%.o : $(LIB_DIR)/$(SRC_LIB_DIR)/%.cpp
#	$(CC) $(CFLAGS_LIB) -c $< -o $@
################################################################

################################################################
## make application
#$(TARGET) : $(OBJ_APP) $(LIB_NAME)
#	$(CC) $(LFLAGS_APP) -o $@ $^
$(TARGET) : $(OBJ_APP)
	$(CC) $(PEDANTIC) -o $@ $^

#$(OBJ_APP_DIR)/%.o : %.cpp
#%.o : %.cpp is NOT same as $(OBJ_APP) : $(SRC_APP) -> same cpp compiles to different obj file_name
%.o : %.cpp
	$(CC) $(DEBUG_FLAG) $(CFLAGS_APP) $(PEDANTIC) -c $< -o $@
################################################################


.PHONY : run all clean app_clean libs_build libs_clean help

# Run program
run : all
	./$(TARGET)

# Build project
all : $(TARGET)



# Run library (build library)
#libs_build : $(LIB_NAME)

# Clean program
clean : app_clean libs_clean

# Clean application
#app_clean :
#	$(RM) $(TARGET).exe obj\*.o

# Clean library
#libs_clean :
#	$(RM) ..\lib\obj\*.o ..\lib\lib$(LIB).a

# Changed because of Windows specific requirements
# g++ is adding .exe at the end of out file
# (can't use obj/*.o, have to use obj\*o)

# Clean application
app_clean :
	$(RM) $(TARGET) $(OBJ_APP)

# Clean library
libs_clean :
#	$(RM) $(OBJ_LIB) $(LIB_NAME)


help :
	@echo "src_lib: $(SRC_LIB)"
	@echo "obj_lib: $(OBJ_LIB)"
	@echo "src_app: $(SRC_APP)"
	@echo "obj_app: $(OBJ_APP)"