DSA INTERVIEW QUESTIONS AND ANSWERS

1. What is the difference between file structure and storage structure?
The difference lies in the memory area accessed. Storage structure refers to the data structure in the memory of the computer system,
whereas file structure represents the storage structure in the auxiliary memory.

2. Are linked lists considered linear or non-linear Data Structures?
Linked lists are considered both linear and non-linear data structures depending upon the application they are used for. When used for
access strategies, it is considered as a linear data-structure. When used for data storage, it is considered a non-linear data structure.

3. How do you reference all of the elements in a one-dimension array?
All of the elements in a one-dimension array can be referenced using an indexed loop as the array subscript so that the counter runs
from 0 to the array size minus one. 

4. What are dynamic Data Structures? Name a few.
They are collections of data in memory that expand and contract to grow or shrink in size as a program runs. This enables the programmer
to control exactly how much memory is to be utilized.Examples are the dynamic array, linked list, stack, queue, and heap.

5. What is a Dequeue?
It is a double-ended queue, or a data structure, where the elements can be inserted or deleted at both ends (FRONT and REAR).

6. What operations can be performed on queues?
enqueue() adds an element to the end of the queue
dequeue() removes an element from the front of the queue
init() is used for initializing the queue
isEmpty tests for whether or not the queue is empty
The front is used to get the value of the first data item but does not remove it
The rear is used to get the last item from a queue.

7. What is the merge sort? How does it work?
Merge sort is a divide-and-conquer algorithm for sorting the data. It works by merging and sorting adjacent data to create bigger sorted 
lists, which are then merged recursively to form even bigger sorted lists until you have one single sorted list.

8.How does the Selection sort work?
Selection sort works by repeatedly picking the smallest number in ascending order from the list and placing it at the beginning. This process is repeated moving toward the end of the list or sorted subarray.

Scan all items and find the smallest. Switch over the position as the first item. Repeat the selection sort on the remaining N-1 items. We always iterate forward (i from 0 to N-1) and swap with the smallest element (always i).

Time complexity: best case O(n2); worst O(n2)

Space complexity: worst O(1)

9. What are the applications of graph Data Structure?
Transport grids where stations are represented as vertices and routes as the edges of the graph
Utility graphs of power or water, where vertices are connection points and edge the wires or pipes connecting them
Social network graphs to determine the flow of information and hotspots (edges and vertices)
Neural networks where vertices represent neurons and edge the synapses between them

10. What is an AVL tree?
An AVL (Adelson, Velskii, and Landi) tree is a height balancing binary search tree in which the difference of heights of the left
and right subtrees of any node is less than or equal to one. This controls the height of the binary search tree by not letting
it get skewed. This is used when working with a large data set, with continual pruning through insertion and deletion of data.

11.  Differentiate NULL and VOID ?
Null is a value, whereas Void is a data type identifier 
Null indicates an empty value for a variable, whereas void indicates pointers that have no initial size 
Null means it never existed; Void means it existed but is not in effect 

12. Do dynamic memory allocations help in managing data? How?
Dynamic memory allocation stores simple structured data types at runtime. It has the ability to combine separately allocated 
structured blocks to form composite structures that expand and contract as needed, thus helping manage data of data blocks
of arbitrary size, in arbitrary order.
