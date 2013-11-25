/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"

Graph::Graph(unsigned int numNodes){
	adjList.resize(numNodes);
	for (int i = 0; i < numNodes; i++) {
		adjList[i].edgeList.resize(numNodes);

	}
	
}

int Graph::getCost(int node1, int node2){
  Node curNode = adjList.at(node1);
  Edge toRtn = curNode.edgeList[node2];
  return toRtn.cost;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
	Node* addEdge = &adjList[node1];
	addEdge->edgeList[node2].cost = cost;
	addEdge->edgeList[node2].dest = node2;

	Node* secondEdge = &adjList[node2];
	secondEdge->edgeList[node1].cost = cost;
	secondEdge->edgeList[node1].dest = node1;
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
  Node* delEdge = &adjList[node1];
  delEdge->edgeList[node2].cost = -1;
  delEdge->edgeList[node2].dest = -1;
  delEdge = &adjList[node2];
  delEdge->edgeList[node1].cost = -1;
  delEdge->edgeList[node1].dest = -1;
}
