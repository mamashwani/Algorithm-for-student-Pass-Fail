# Algorithm-for-student-Pass-Fail
An algorithm to solve how many days it would take for a class to retain students who won't drop the class


# Notes
- The input file has the size of the array in the first line followed by a string of integers that are supposed to represent the probability a student will fail the class. After adding all these values into a dynamic array, the program must simulate students dropping the class if the student to the left of them has a lower chance of failing the class. Every day as the array shrinks as certain students drop the class, the program is complete when the array comes to a point that represnets a class row where every student who looks to their left sees a student with a higher chance of failing than them. 

# Notes
- The 9 "input3x.txt" files are the 9 input files that were used to test this code
- The 9 "output3x.txt" files are the files outputted by the program.
- The 9 "ans3x.txt" files are files containing the correct output that should occur from each corresponding input file, and are available
for comparison to the outputs files to ensure correct output. 
- This code was tested on the University of Houston's Linux server and passed all the test cases.
- The "ArgumentManager.h" file parses arguments to sequentially open the 9 input files to automatically test the code on the server.
- The "test.sh" file is a SHELL script for automatically testing the input files on the Linux server.
- The "compile.sh" file is  SHELL script for automatically compiling the code on the Linux server before running the tests.
