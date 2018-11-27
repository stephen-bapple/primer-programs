# This file isn't strictly necessary for this assignment but
# helps demonstrate how to compile files separately.

# Compile each of the C++ files separately.
g++ -c fact.cc
g++ -c factMain.cc

# Link the object code.
g++ factMain.o fact.o # Intentionally use a.out

