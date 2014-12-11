/*****
	Collin Ernst
	Last modified 12/7/14
	Code is original with help from Dr. Brinkman and web resources such as cplusplus.com and stackoverflow.com
 */
#include "Graph.h"
#include <stack>
#include <vector>

Graph::Graph(unsigned int numNodes){
	adjList.resize(numNodes);
}

double Graph::getCost(int node1, int node2){
	if (node1>adjList.size() - 1 || node2 > adjList.size() - 1 || node1 < 0 || node2 < 0){
		throw std::string("Node not present in graph");
	}
	else{
		for (unsigned int x = 0; x < adjList[node1].edgeList.size(); x++){
			if (adjList[node1].edgeList[x].dest == node2){
				return adjList[node1].edgeList[x].cost;
			}
		}
	}
	
	return -1.0;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
	if (cost < 0){
		throw std::string("Invalid Cost");
	}
	for (unsigned int x = 0; x < adjList[node1].edgeList.size(); x++){
		if (adjList[node1].edgeList[x].dest == node2){
			adjList[node1].edgeList[x].cost = cost;

			for (unsigned int y = 0; y < adjList[node2].edgeList.size(); y++){
				if (adjList[node2].edgeList[y].dest == node1){
					adjList[node2].edgeList[y].cost = cost;
					return;
				}
			}
		}
	}

	adjList[node1].edgeList.push_back(Edge(cost, node2));
	adjList[node2].edgeList.push_back(Edge(cost, node1));
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
	if (node1>adjList.size() - 1 || node2 > adjList.size() - 1 || node1 < 0 || node2 < 0){
		throw std::string("Node not present in graph");
	}
	for (unsigned int x = 0; x < adjList[node1].edgeList.size(); x++){
		if (adjList[node1].edgeList[x].dest == node2){
			adjList[node1].edgeList.erase(adjList[node1].edgeList.begin() + x);

			for (unsigned int y = 0; y < adjList[node2].edgeList.size(); y++){
				if (adjList[node2].edgeList[y].dest == node1){
					adjList[node2].edgeList.erase(adjList[node2].edgeList.begin() + y);
					return;
				}
			}
		}
	}
}

void Graph::DFS(int start){
	if (start>adjList.size() - 1 || start < 0){
		throw std::string("Invalid starting node");
	}
	else{
		std::stack<int> openList;
		std::vector<int> closedList;

		closedList.resize(adjList.size());
		
		openList.push(start);

		while (!openList.empty()){
			int u = openList.top();
			openList.pop();
			closedList[u] = 1;

			for (unsigned int x = 0; x < adjList[u].edgeList.size(); x++){
				if (closedList[adjList[u].edgeList[x].dest == 0]){
					openList.push(adjList[u].edgeList[x].dest);
					closedList[adjList[u].edgeList[x].dest] = 1;
				}
			}
		}
	}
}
