Author
==========
"Griffith, David", griffid5
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

1. add - Working and passed all of Dr. Brinkman's tests.
2. remove - Working and passed all of Dr. Brinkman's tests.
3. getCost - Working and passed all of Dr. Brinkman's tests.

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - The worst case runtime for this method is O(1) because we are using vectors which give us direct access into the list to place the new edge. 
2. remove - The worst case runtime for this method is O(d) because we may have to go through all the edges in the list.
3. getCost - The worst case runtime for this method is O(d) because we may have to go through all the edges in the list.

TODO

#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.

http://i.imgur.com/1kdrThN.png?1

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

I would recommend looking at http://www.cplusplus.com/reference/vector/vector/ to learn about vectors. 