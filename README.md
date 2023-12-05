# Sample CMakeLists for OpenCV

This repository contains a simple `CMakeLists` that can serve as a starter for `OpenCV` code.

List of files needed
```bash
CMakeLists.txt
Quick_brown_fox.png
README.md
main.cpp
```
## Running the code

```bash
$ cmake CMakeLists.txt
CXX Standard:
-- Configuring done (0.0s)
-- Generating done (0.0s)
-- Build files have been written to: /tmp/sampleCode

$ make all
[ 50%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[100%] Linking CXX executable main
[100%] Built target main

$ ./main
Testing OpenCV
OpenCV version: 4.5.0
Major version: 4
Minor version: 5
Subminor version: 0
```

# Cleanup
```bash
rm -vrf Makefile CMakeFiles Inverted_Fox.png cmake_install.cmake CMakeCache.txt
```
