# Algorithm-for-student-Pass-Fail
An algorithm to solve how many days it would take for a class to retain students who won't drop the class


# Notes
- The input file has the size of the array in the first line followed by a string of integers that are supposed to represent the probability a student will fail the class. After adding all these values into a dynamic array, the program must simulate students dropping the class if the student to the left of them has a lower chance of failing the class. Every day as the array shrinks as certain students drop the class, the program is complete when the array comes to a point that represnets a class row where every student who looks to their left sees a student with a higher chance of failing than them. 

