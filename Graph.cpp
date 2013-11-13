
/*****
 * Author   : Mingwei zhong
 * Date     : 2013-11-12
 * Sources  : All code is original
 */


#include "Graph.h"
#include <string>


//The logic I used to implement this lab is from: http://opendatastructures.org/ods-cpp/12_2_Graph_as_Collection_Li.html

Graph::Graph(unsigned int numNodes)
{
    //I found the resize() method here: http://www.cplusplus.com/reference/vector/vector/resize/
    adjList.resize(numNodes);
}


int Graph::getCost(int node1, int node2)
{
    //If node1 is invalid, return -1.
    if (node1 >= (int)adjList.size())
    {
        return -1;
    }

    //If node2 is invalid, return -1.
    if(node2 >= (int)adjList.size())
    {
        return -1;
    }


    //If the nodes are valid.
    //Find out the edge from node1 to node2 and return its cost.

    int SizeOfEdge = (int)adjList[node1].edgeList.size();

    for (int i = 0; i < SizeOfEdge; i++)
    {
        if (adjList[node1].edgeList[i].dest == node2)
        {
          return (int)adjList[node1].edgeList[i].cost;
        }
    }

    return -1;
}


void Graph::addEdge(int node1, int node2, double cost)
{
    //Throw exception if the cost is negative.
    if (cost < 0)
    {
        throw std::string("Cost can not be negative!");
    }
    if(node1 >= (int)adjList.size())
    {
        throw std::string("node1 is invalid!");
    }
    if(node2 >= (int)adjList.size())
    {
        throw std::string("node2 is invalid!");
    }

    //Add edge from node1 to node2
    adjList[node1].edgeList.push_back(Edge(cost, node2));

    //Add edge from node2 to node1
    adjList[node2].edgeList.push_back(Edge(cost, node1));
}

//Remove the edge from node1 to node2, and also from node2 to node1.
//If there are no such edges, then don't do anything.

//I used erase()method built in vector to remove the edge, I found the source here:
//http://www.cplusplus.com/reference/vector/vector/erase/
void Graph::removeEdge(int node1, int node2)
{
    if (node1 >= (int)adjList.size())
    {
        //do nothing.
    }

    if(node2 >= (int)adjList.size())
    {
        //do nothing.
    }

    //Remove the edge from node1 to node2 and node2 to node1.

    int SizeOfEdgeOne = (int)adjList[node1].edgeList.size();

    for (int i = 0; i < SizeOfEdgeOne; i++)
    {
        if (adjList[node1].edgeList[i].dest == node2)
        {
            adjList[node1].edgeList.erase(adjList[node1].edgeList.begin()+i);

            break;
        }
    }

    int SizeOfEdgeTwo = (int)adjList[node2].edgeList.size();

    for (int i = 0; i < SizeOfEdgeTwo; i++)
    {
        if (adjList[node2].edgeList[i].dest == node1)
        {
            adjList[node2].edgeList.erase(adjList[node2].edgeList.begin()+i);

            break;
        }
    }
}
