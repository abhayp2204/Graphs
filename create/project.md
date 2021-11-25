# Graph Algorithms
# Name: Abhay Patil
# Roll: 2020101022
this is the intro

## What is an algorithm?
In the most general sense, an algorithm is a series of instructions that tells the computer how to transform
some data in the world to useful information. For example, Insertion sort is an algorithm that tells a computer
how to convert data(a list of unsorted numbers) to information(a list of sorted numbers).

## How do we compare algorithms?
In the real world, we find that there are many cases where we cannot say that a specific algorithm is better
or worse than the other. It may be that one algorithm works better for certain kinds of inputs, but worse
for another kinds. For example, consider Insertion sort and Quick sort. Many would consider Quick sort to be
the superior algorithm and they would be right, because the average time complexity for it is O(nlogn) while
for Insertino sort it is O(n2). However, consider a situation where we already had a sorted array and due to
some memory corruption or human errors, some of the numbers were mmisplaced. If we know that most of the array
is sorted, we would prefer Insertion sort O(n) to Quick sort O(nlogn). Here, the array being mostly sorted
is taken advantage of by Insertion sort, but makes no difference to Quick sort.

Hence we must carefully analyze the problem at hand before deciding our algorithm. Aside from this, the most
objective methods of analyzing efficiency of algorithms are its Time Complexity and Space Complexity.
Typically we place more value on time complexity than space complexity, because time is more scarce than memory.

### Time Complexity
Time complexity is a measure of the amount of computer time is required to run an algorithm. We typically
estimate this by counting the number of elementary operations performed by an algorithm. One may consider
the worst case time complexity, average case time complexity and in some rare cases, the best case time
complexity to judge an algorithm's efficiency. The worst case is considered when the algorithm is crucial
to the working of a system, and failiure to execute within a certain time frame is not an option.

The most common representation of time complexitry is the Big O notation. In this, the number of elementary
operations (which will be proportional to the time) is measured as a factor of the input size n.
So if the time taken varies linearly with n, its complexity is O(n).
Constant time operations are not accounted for, as they are negligible. So O(n + K) is the same as O(n).

The best case is seldom used because the chances of it happening are slim, although an example of it being
used is already mentioned in the Insertion sort vs Quick sort analysis. Consider Bogo sort. It is an
algorithm literally designed to be slow. It computes random permutations of an unsorted list in the hope
that it will eventually end up with a sorted one. It's best case is O(n), that is when the first permutation
itself is sorted. Unlike Insertion sort however, the chances of this happening is practically 0, specifically 1/n!.

### Space Complexity
Space complexity of an algorithm describes the amount of memory required for an algoerithm to run. 
Here the memory required to store the input is not considered. We only care about the additional
memory needed.

O(1) space complexity means that the algorithm only requires constant additional memory.
O(n) space complexity means that the algorithm requires Kn space, where n is the input size.`

## Algorithm Paradigms
Algorithm paradigm is a generic framework which underlines the design of a class of algorithms.
Examples are as follows:
- Backtracking
- Brute-Force
- Divide and Conquer
- Dynamic Programming
- Greedy Algorithm
- Prune and Search

### Divide and Conquer (DAC)
This technique can be divided into 3 parts:
- Divide : This involves dividing the problem into smaller sub-problems
- Conquer: Solve the sub-problems recursively
- Combine: Combine the sub-problems to get the final solution of the main problem

Examples of DAC algorithms:
- Quicksort
- Merge Sort
- Karatsuba Algorithm (Fast multiplication)
- Strassen's Algorithm (Matrix multiplication)

### Greedy Algorithm
Greedy algorithms takes all of the data in a particular problem, and then sets a rule that decides which elements
need to be added to the solution at each step of the algorithm.

Greedy algorithms cannot be used everywhere. Consider the following problem.
We are required to find the algorithm with the largest sum. The greedy algorithm fails, because it makes
decisions based on the information it has at any one single step, without regard for the overall problem.
Herethe algorithm choses 12 because it is larger than 7. It has no way of knowing that the left branch
still has a higher sum overall.

![Tree Image](../img/tree.png)

For a greedy algorithm to work, it must satisfy the following two properties:
- `Greedy choice property`: An overall optimal solution can be reached by selecting the optimal solution at each step.
- `Optimal substructure`  : An optimal solution to the entire problem contains the optimal solutions to the sub-problems.

### Greedy Algorithms
### Dynamic Algorithms

## Graph Algorithms

### DFS
### BFS
### MST

## Applications of Graph Algorithms