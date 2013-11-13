/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"

Graph::Graph(unsigned int numNodes){
	adjList.resize(numNodes);
}

int Graph::getCost(int node1, int node2){
  Node curNode = adjList.at(node1);
  for (int i = 0; i < curNode.edgeList.size(); i++) {
	  if (curNode.edgeList.at(i).dest == node2) 
		  return i;
  }
  return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
  Node toAdd = adjList.at(node1);
  Edge* newEdge = new Edge(cost,node2);
  toAdd.edgeList.push_back(*newEdge);

  Node toAdd2 = adjList.at(node2);
  Edge* newEdge2 = new Edge(cost,node1);
  toAdd.edgeList.push_back(*newEdge2);
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
  //TODO
}
