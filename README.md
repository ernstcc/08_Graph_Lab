Author
==========
"Emrick, Garrett", emrickgj
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

1. add - Add works as it should, adding when necessary. I also have it sorting the entries as it goes along, making the data easier to manage. When the set is very large, makes it easy to use binary search, and will stop searching if it goes past it's value.
2. remove - Remove works as it should, following the above method it will remove and take advantage of the sorted list.
3. getCost - Get Cost works as it should, and returns once it has the applicable data. Returns -1 if there is no associated cost (no connection).

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - Add will work (at worst possible case), d^2. It does this because it will run through all edges in the add function
2. remove - Remove will work similarly, worst case being d^2
3. getCost - Get cost also runs similarly, worst case being d

TODO

#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

TODO
