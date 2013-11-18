Author
==========
"Turner, Chace", turnerce
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

1. add - Add is working fine
2. remove - remove is working fine
3. getCost - getCost is working fine

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - Worst-case running time should be Ø(1).  Adding a new edge doesn't depend on the degree of any other node, number of edges, or number of nodes. It directly accesses and adds data to an edgeList vector.
2. remove - The worst case running time for remove is Ø(3d).  Remove() uses getCost to make sure a connection exists between node1 and node2 (Ø(d) for node1), then loops through the edgeList of each node to find the correct edge, and erases it (Ø(d) for each node).
3. getCost - Worst case run time for getCost should be Ø(d) for the number of edges in the edge list of node1.  If the loop doesn't find an edge that we're looking for, it will have spent time looking at each edge element for node1.

The reason none of these methods' running times depend on n is because none of them are iterating through our adjList, they are iterating the edgeLists of the specific nodes we pass to them.  We would only have running times of Ø(n) if we were required to find a specific node before performing operations on it; here they are given.

#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.

http://t.co/9qoxGcDuVs

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

I would advise students next semester to do this lab (and others) as soon as possible after learning about the ADT in class.  It made it much easier to use the information on the top of your head paired with the assigned reading.