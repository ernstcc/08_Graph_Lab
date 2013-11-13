/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"

Graph::Graph(unsigned int numNodes){
  //TODO
	 //std::vector<Node> adjList[numNodes];	
	std::vector<Node> adjList;
	//int* adjList = new int[numNodes];
	//int* edgeList = new int[1];	
	std::vector<Node> edgeList;
	Edge();
}

int Graph::getCost(int node1, int node2){
  //TODO 	
	for (int i = 0; i < adjList.size(); i++){
		//if (adjList[i] == node1){
	
	//	}
	}
  return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
  //TODO
	if (cost < 0)
		throw std::string("cost < 0");
	
	Edge(cost,node2);
	Edge(cost, node1);

	//if (cost < 0)
	//for (int i = 0; i < numVertices; i++){
		//if (adj[i].
	//}
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
  //TODO
}
