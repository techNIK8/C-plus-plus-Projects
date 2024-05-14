1) Static workload assignment in a for loop (“Static” Program)
Parallelization of the Ramer–Douglas–Peucker algorithm over the multiple polylines contained in the polylines_small list that need to be processed. 
Let's take for example a case in which the list polylines_small contains 100 polylines and how in the program you will implement 4 threads have been created. 
The first parallelization logic you should follow is for each thread to statically delegate to simplify for 100/4 = 25 contiguous polylines in the 
polylines_small list. Each thread will then serially execute the Ramer–Douglas–Peucker algorithm for each polyline it has been assigned to process.
2) Dynamic workload assignment in a for loop (“Dynamic” Program)
This time the parallelization followed is for each thread to dynamically delegate to simplify a set of polylines. Each thread will then serially execute the Ramer–Douglas–Peucker 
algorithm for each polyline it has been assigned to process.
3) Parallelization using tasks (Program “Task1”)
The longest distance of a point from the line defined by the first and last point of the polyline is greater than a certain value, then two new, smaller polylines 
are created and the algorithm is repeated recursively for each of the new polylines.
Implementation of a parallel version of the algorithm so that when a polyline is split into two smaller ones, then a new task is created for the first one, while the 
second one will be processed by the current task.
4) Parallelization using tasks (Program “Task2”)
Implementation of a parallel version of the algorithm so that when a polyline is split into two smaller ones, then a new task will be created for both new polylines.
