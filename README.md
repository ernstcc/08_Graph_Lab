Author
==========
"Kojs, Michelle", kojsmn
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

1. add - This requirement works. An edge is added with the given costs. I did this by adding an edge to both nodes with the given cost.
2. remove - This requirement works. An edge is removed. I did this by removing both edges from both nodes and setting their cost and dest to -1.
3. getCost - This requirement works. A cost from one edge to another is returned. I did this by finding the edge and cost in the first given node and returning it.

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - The worst-case running time is 0(nm)
2. remove - The worst-case running time is 0(nm)
3. getCost - The worst-case running time is 0(nm)


#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.
adjacencyList - https://www.facebook.com/photo.php?fbid=10200892257857428&set=a.1053200138957.2008345.1494394684&type=3&theater
AadjacencyMatrix - https://www.facebook.com/photo.php?fbid=10200892257897429&set=a.1053200138957.2008345.1494394684&type=3&theater

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?
One piece of advice that I would share with students next semester is to draw out the vectors because this really helps you visualize what is going on.