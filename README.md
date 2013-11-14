Author
==========
"Contini, Nick", continnd
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

1. add - add is implemented and should work correctly
2. remove - remove is implemented and should work correctly
3. getCost - getCost is implemented and should work correctly

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - O(d), since every time an edge is added, all the program does is simply jump to the point in the adjancey list that contains the edges that connect to that node. If the vector needs to reallocate itself to be larger, it will reallocate itself and then add the item to the ed of the vector.
2. remove - O(d), since every time an edge is added, all the program does is simply jump to the point in the adjancey list that contains the edges that connect to that node. Then the method will look at all th methods and look for the edge that connects to the specified node, and delete it.
3. getCost -  O(d), since every time an edge is added, all the program does is simply jump to the point in the adjancey list that contains the edges that connect to that node. Then the method will look at all th methods and look for the edge that connects to the specified node, and return its cost


#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. 
https://github.com/continnd/08_Graph_Lab/blob/continnd/exercise_12.1.png

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

The one tough thing about this lab was no knowing how vectors work. Other than that, most everything is self explanatory.
