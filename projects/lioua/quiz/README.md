# CS362

Name: Arthur Liou
ONID: lioua

## HOW TO
To run the testme program, please run `make all` in the terminal / console. This will compile and run the file. 

Note: It may take several million (maybe a billion) iterations before reaching the "reset" and returning the printf error, (make: *** [all] Error 200)

# Sample Error
error profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous GCDA file: corrupt arc tag (0x00000079)
profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous GCDA file: corrupt arc tag (0x00007465)
profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous GCDA file: corrupt arc tag (0x00676e69)
profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous GCDA file: corrupt arc tag (0x0000656d)
profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous GCDA file: corrupt arc tag (0x00000000)
profiling: /Users/arthurliou/cs/osu/CS362-W2019/projects/lioua/quiz/testme.gcda: cannot merge previous run count: corrupt object tag (0x0000656d)

make: *** [all] Error 200

### Random Notes used during testing

CFLAGS= -Wall -fpic -coverage -std=c99 -g
____

gcc -Wall -fpic -coverage -std=c99 -g -o testme testme.c
 
./testme