Author
==========
"Bickley, Daniel", bickledb
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

1. add - The method was implemented and works correctly.
2. remove - The method was implemented and works correctly.
3. getCost - The method was implemented and works correctly.

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - The worst case running time for add is O(1). Because std::vector can be accessed randomly, the way the adjacency matrix is set up, the nodes the edge is to be added to are found without having to iterate through the vector. The rest of the operations take constant time, as they are all operations such as assigning variables.
2. remove - The remove method also takes O(1) time, because when an edge is needed to be removed, the vector is accessed randomly. Because the vector is accessed randomly, that operation takes O(1) time. Then, when finding the list of edges for the NodeThe rest of the method is simply changing variables around, which takes constant time. 
3. getCost - Similarly to add() and remove(), getCost takes O(1) time. GetCost() automatically finds the first node given, accesses it randomly, and uses a different vector to find all of the edges of the node. At the index of the second Node given, the edge for that specific node is listed. The method returns that value, and therefore only takes O(1) time.

TODO

#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

Definately look at the std::vector class as soon as possible. Using the vector class makes the lab much easier and easier to understand.