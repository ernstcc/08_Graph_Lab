/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"
#include <iostream>

Graph::Graph(unsigned int numNodes){
    
    adjList.resize(numNodes);
    
    for (int i = 0; i < numNodes; i++){
        adjList[i] = *new Node();
    }
}

int Graph::getCost(int node1, int node2){
    int cost = 0;
    bool found = false;
    
    for (int i = 0; i < adjList[node1].edgeList.size() && found == false; i++){
        if (adjList[node1].edgeList.at(i).dest == node2)
            cost = adjList[node1].edgeList.at(i).cost;
            found = true;
    }
    if (found == false)
        return -1;
    
    return cost;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
    if (cost < 0)
        throw new std::string("Can't add an edge with cost less than zero");
    adjList[node1].edgeList.push_back(*new Edge(cost, node2));
    adjList[node2].edgeList.push_back(*new Edge(cost, node1));
    
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
    
    if (getCost(node1, node2) != -1) {
        for (int i = 0; i < adjList[node1].edgeList.size(); i++){
            if (adjList[node1].edgeList.at(i).dest == node2)
                adjList[node1].edgeList.erase(adjList[node1].edgeList.begin() + i - 1);
        }
        for (int i = 0; i < adjList[node2].edgeList.size(); i++){
            if (adjList[node2].edgeList.at(i).dest == node1)
                adjList[node2].edgeList.erase(adjList[node2].edgeList.begin() + i - 1);
        }
      
    }
}
