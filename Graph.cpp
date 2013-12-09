/*****
 * Author   : brinkmwj, deckerbd
 * Date     : 2009-11-06, 12/8/2013
 * Sources  : starter code provided by brinkmwj, rest of citations in code
 */
#include "Graph.h"

Graph::Graph(unsigned int numNodes){
	//TODO
	// Learned about vector's std methods from zhongm2 (http://www.cplusplus.com/reference/vector/vector/resize/)(https://github.com/JohnneyMing)
	adjList.resize(numNodes);
}

int Graph::getCost(int node1, int node2){
	//TODO
	// Return the value when edgeList==node2
	// If such point doesn't exist, return -1;
	
	for(int i=0; i<adjList[node1].edgeList.size(); i++)
	{
		if(adjList[node1].edgeList[i].dest==node2)
			return adjList[node1].edgeList[i].cost;
	}

	return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
	//TODO
	// Put the new edges at the end of each edgeList
	adjList[node1].edgeList.push_back(Edge(cost, node2));
	adjList[node2].edgeList.push_back(Edge(cost, node1));
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
	//TODO
}
