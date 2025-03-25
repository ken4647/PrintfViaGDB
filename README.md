# PrintfViaGDB

A simple but useful library with scripts for printf debugging (on MCUs) without specific pins.

## Usage

1. link the library to your project
2. include the library header file in your code
3. call the `delog()` function with the desired format string and arguments
4. run your code with GDB with scripts

## Notes

- The library only support single channel of output.
- Why use static variables instead of dynamic memory allocation? To ensure gdb can access the variables even if the program starts before the library is loaded.

## Example

run command:
```bash
make -f test/Makefile
```

which will compile the example code and run it with GDB with scripts.
the example code is located in `test/main.c` and the gdb's python scripts are located in `scripts/gdb_printf.py`.

you will get the following output:
```
...
INFO message: 216970
INFO message: 216971
INFO message: 216972
INFO message: 216973
INFO message: 216974
INFO message: 216975
INFO message: 216976
INFO message: 216977
INFO message: 216978
INFO message: 216979
INFO message: 216980
INFO message: 216981
INFO message: 216982
INFO message: 216983
INFO message: 216984
INFO message: 216985
INFO message: 216986
INFO message: 216987
INFO message: 216988
INFO message: 216989
INFO message: 216990
INFO message: 216991
INFO message: 216992
INFO message: 216993
INFO message: 216994
INFO message: 216995
INFO message: 216996
INFO message: 216997
INFO message: 216998
INFO message: 216999
INFO message: 217000
INFO message: 217001
INFO message: 217002
INFO message: 217003
INFO message: 217004
INFO message: 217005
INFO message: 217006
INFO message: 217007
INFO message: 217008
INFO message: 217009
INFO message: 217010
INFO message: 217011
INFO message: 217012
INFO message: 217013
INFO message: 217014
INFO message: 217015
INFO message: 217016
INFO message: 217017
INFO message: 217018
INFO message: 217019
INFO message: 217020
INFO message: 217021
INFO message: 217022
INFO message: 217023
INFO message: 217024
INFO message: 217025
INFO message: 217026
INFO message: 217027
INFO message: 217028
INFO message: 217029
INFO message: 217030
INFO message: 217031
INFO message: 217032
INFO message: 217033
INFO message: 217034
INFO message: 217035
INFO message: 217036
INFO message: 217037
INFO message: 217038
INFO message: 217039
INFO message: 217040
INFO message: 217041
INFO message: 217042
INFO message: 217043
INFO message: 217044
INFO message: 217045
INFO message: 217046
INFO message: 217047
INFO message: 217048
INFO message: 217049
INFO message: 217050
INFO message: 217051
INFO message: 217052
INFO message: 217053
INFO message: 217054
INFO message: 217055
INFO message: 217056
INFO message: 217057
INFO message: 217058
INFO message: 217059
INFO message: 217060
INFO message: 217061
...
```
