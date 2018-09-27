===========
DESCRIPTION
===========

This demo illustrates the performance gains
that are made possible by simply using a
different data structure.

In the demo, we generate N (initially set 
to 10 million) random numbers. Then the
user is asked for an integer X, indicating
the number of searches they wish to perform.

The program then search performs X searches
by searching for every integer from 0 to X.

There is also a utility that measures the
time taken to perform the search.

====================
COMPILE INSTRUCTIONS
====================

There are two main files, demo_slow.cpp and
demo_fast.cpp. You will compile and run them
separately in order to compare performance.

To compile the slow demo, type:

g++ -std=c++11 demo_slow.cpp -o slow

To run the slow demo after compiling, type:

./slow


Example run:

Generated 10000000 random numbers in 865 ms

Enter number of searches to perform (-1 to stop): 10
Took 191 ms.

Enter number of searches to perform (-1 to stop): 100
Took 1828 ms.

Enter number of searches to perform (-1 to stop): -1


The slow demo is slow because it uses an array to
store all the random numbers generated, and when it
performs a search, it searches through the entire
array each time. We will see later in the course
why this results in such slow performance.

The fast demo performs exactly the same task as the
slow demo, namely it generates some random numbers,
stores them, and performs a number of searches.

The only difference is that it does not store the
numbers in an array. It stores them in a data
structure called MyStruct, which has been defined
in the libcool.a library.

Therefore to compile the fast demo, type:

g++ -std=c++11 demo_fast.cpp -L. -lcool -o fast

The -L flag tells the compiler where to look
for additional libraries. We have specified
the current folder (represented by .).
So that's why we have the -L. option above.

We are also telling it to use the cool library.
In order for that to work, we have to use the
-lcool flag. The file libcool.a must be in the
folder specified by -L (in this case the
current folder).

Now to run the fast demo, type:

./fast

Example run:

Generated 10000000 random numbers in 2792 ms

Enter number of searches to perform (-1 to stop): 10
Took 0 ms.

Enter number of searches to perform (-1 to stop): 100
66
Took 0 ms.

Enter number of searches to perform (-1 to stop): -1