# SortingVisualizations2015
A program made to time various sorting algorithms, written in 2015 for a university course. 


The requirements of the assignment were to implement a program to allow the user to test inputs of variable sizes in one of the following starting orders: ascending, descending, or randomized. The program would then proceed to time itself while it sorted the input using one of the following ways:

- Bubble sort
- Heap sort
- Insertion sort
- Merge sort (recursive)
- Selection sort
- Shell sort
- Quick sort (recursive) w/right-most element as pivot
- Quick sort (recursive) w/right-most element as pivot and switch to insertion sort when reaches user-inputted cutoff size
- Quick sort (recursive) w/median of three as pivot

The program would finally conclude with displaying the time it took to run that specific test. 

There were no requirements as to whether this needed to be done as just a console program or an external GUI, so I had decided to do the latter. At the time, I had recently learned about Qt and the various visual tools it came with that made creating applications more simple. 

In addition to the basic assignment requirements, I had also implemented a graph which compared a sorting algorithm's time across multiple sizes of inputs. This allowed me to have a rough validation for the time complexities I was learning about for each algorithm.
