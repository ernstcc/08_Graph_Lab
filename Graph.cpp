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
	int index = 0;
	while(index < adjList[node1].edgeList.size()){
		if(adjList[node1].edgeList[index].dest == node2){
			return (int)adjList[node1].edgeList[index].cost;
		}
		index = index + 1;
	}
	return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
  if(cost < 0){
	throw (std::string)"Not a valid cost to update.";
  }
  else{
	  // check node1's edges
	  if(getCost(node1, node2) == -1){
		adjList[node1].edgeList.push_back(*new Edge(cost, node2));
	  }
	  else{
		  for(int i = 0; i < adjList[node1].edgeList.size(); i++){
			if(adjList[node1].edgeList[i].dest == node2){
				adjList[node1].edgeList[i].cost = cost;
			}
		  }
	  }
	  // check node2's edges
	  if(getCost(node2, node1) == -1){
		adjList[node2].edgeList.push_back(*new Edge(cost, node1));
	  }
	  else{
		  for(int i = 0; i < adjList[node2].edgeList.size(); i++){
			if(adjList[node2].edgeList[i].dest == node1){
				adjList[node2].edgeList[i].cost = cost;
			}
		  }
	  }
  }
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
  if(getCost(node1, node2) != -1){
	int count = 0;
	while(count < adjList[node1].edgeList.size()){
		if(adjList[node1].edgeList[count].dest == node2){
			adjList[node1].edgeList.erase(
				adjList[node1].edgeList.begin() + count);
		}
		count++;
	}
  }
  if(getCost(node2, node1) != -1){
	int count = 0;
	while(count < adjList[node2].edgeList.size()){
		if(adjList[node2].edgeList[count].dest == node1){
			adjList[node2].edgeList.erase(
				adjList[node2].edgeList.begin() + count);
		}
		count++;
	}
  }
}
