Author
==========
"Zhong, Mingwei", zhongm2
08_Graph_Lab
============

Implement a simple graph class

Requirements
------------

1. Implement all methods of the `Graph` class.

Reading
=======
"Open Data Structures," Chapter 12, the whole chapter. http://opendatastructures.org/ods-cpp/12_Graphs.html

Questions
=========

#### 1. Which of the above requirements work, and which do not? For each requirement, write a brief response.

********************************************************************************


1. add - Works. Access the node1/node2 in adjacency list, append its adjacent
node(node1/node2) to it, and add cost.

2. remove - Works. Access the node1/node2 in adjacency list, search for target
 adjacent node(node1/node2), and erase it.

3. getCost - Works. Access the node1/node2 in adjacency list, search for target
 adjacent node(node1/node2), and return the cost.


********************************************************************************

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.


********************************************************************************


1. add - Constant time. Because vector is random access.

2. remove - `O(d)` 

3. getCost - `O(d)`


********************************************************************************


#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.


https://github.com/JohnneyMing/08_Graph_Lab/tree/zhongm2/Exercise12.1



#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

I think using vector to build adjacency list is the best choice, because I used  to see somebody build adjacency list by using linked list, then I realized the
 performance of using linked list is so bad.
