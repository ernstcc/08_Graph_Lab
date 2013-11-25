Author
==========
"Blase, Douglas", blasedd
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

1. add - Method implemented, as evidenced by successful returns of getCost.
2. remove - Method implemented, as evidenced by the successful returns of getCost.
3. getCost - Method implemented, as it reports the expected data back to the user.

#### 2. For each of your methods, what is the worst-case running time? You may write your answer in terms of `n` (the number of vertices), `m` (the number of edges), `d` (the maximum degree of any node in the graph), or any combination of these. Try to give the most informative bound that you can.

1. add - The worst-case running time is constant, since the vectors are random access.
2. remove - The worst-case running time is constant, since the vectors are random access.
3. getCost - The worst-case running time is constant, since the vectors are random access.


#### 3. Exercise 12.1 from http://opendatastructures.org/ods-cpp/12_4_Discussion_Exercises.html. You may want to draw by hand, upload the picture online (Instagram, Twitter, imgur, or some place like that), and then just put a link here.

Part 1: pic.twitter.com/ZJbpsOm03y
Part 2: pic.twitter.com/mzPj0005WH

#### 4. What is one question that confused you about this exercise, or one piece of advice you would share with students next semester?

Don’t think of the vectors as anything overly special; they’re very similar to arrays and arraylists in java.