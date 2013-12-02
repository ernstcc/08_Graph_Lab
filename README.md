Author
==========
"Gardner, Daniel", gardnedn
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

1. add - compiles and passes test
2. remove - compiles and passes test
3. getCost - compiles and passes test.

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - O(1)- random access through the adjList, as is the edgelist, and then we simply assign the cost and dest which is constant time
2. remove - worst case is that there is no edge between them and we must loop through the entire edgeList. therefore O(m)
3. getCost - O(m) looping through the edges to find the edge with dest==node2, if there is no edge than it loops through all the edges, then just returns -1.


#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.
adj list http://i.imgur.com/jw9EKIV.png?1?9332

//note-could not make a table with 11 rows so 0--0 suggests a 0 whereas if the arrangement were true itd be 0--1 in the first column.
adj matrix. http://i.imgur.com/reAz3Mx.png?1?1791


#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

look up vectors and familiarize yourself with their basic concept.
i prefer cplusplus.com which vectors can be found under http://www.cplusplus.com/reference/vector/vector/

