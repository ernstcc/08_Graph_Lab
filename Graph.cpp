/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"

Graph::Graph(unsigned int numNodes){
	adjList.resize(numNodes);
  //TODO
}

int Graph::getCost(int node1, int node2){
	std::vector<Edge> x =adjList.at(node1).edgeList;
	std::vector<Edge> y =adjList.at(node2).edgeList;

	for(unsigned int i=0;i<x.size();i++)
			if(x.at(i).dest==node2)
				return x.at(i).cost;
	for(unsigned int j=0;j<y.size();j++)
		if(y.at(j).dest==node2)
				return y.at(j).cost;
  return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
	if(cost<0)
		throw std::string("Can't have a cost lower than 0");
	Edge* x = new Edge(cost, node2);
	adjList.at(node1).edgeList.push_back(*x);
	x= new Edge(cost, node1);
	adjList.at(node2).edgeList.push_back(*x);

}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
	for(unsigned int i=0;i<adjList.at(node1).edgeList.size();i++)
		if(adjList.at(node1).edgeList.at(i).dest==node2){
			adjList.at(node1).edgeList.at(i).cost=-1;
			break;
		}

	for(unsigned int i=0;i<adjList.at(node2).edgeList.size();i++)
		if(adjList.at(node2).edgeList.at(i).dest==node1){
			adjList.at(node2).edgeList.at(i).cost=-1;
			break;
		}

  //TODO
}
