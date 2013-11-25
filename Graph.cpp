/*****
 * Author   : brinkmwj
 * Date     : 2009-11-06
 * Sources  : All code is original
 */
#include "Graph.h"
#include <string>

Graph::Graph(unsigned int numNodes){
    adjList.resize(numNodes);
    for (int i=0; i<adjList.size(); i++) {
        adjList[i].edgeList.resize(numNodes);
    }
}

int Graph::getCost(int node1, int node2){
    Node* temp = &adjList[node1];
        if (temp->edgeList[node2].dest == node2) {
            return temp->edgeList[node2].cost;
        }

  return -1;
}

//Add an edge from node1 to node2, and from node2 to node1, with
// the given cost. If the cost is < 0, throw a string exception.
void Graph::addEdge(int node1, int node2, double cost){
    if (cost<0) {
        throw (std::string)"Invalid cost.";
    }
    
    else{
        Node* temp = &adjList[node1];
            if (temp->edgeList[node2].dest != -1) {
                temp->edgeList[node2].cost = cost;
                temp = &adjList[node2];
                if(temp->edgeList[node1].dest != -1) {
                    temp->edgeList[node1].cost = cost;
                }
            }
        else{
            temp->edgeList[node2] = Edge(cost, node2);
            temp = &adjList[node2];
            temp->edgeList[node1] = Edge(cost, node1);
            
        }
    }

    
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
    Node* temp = &adjList[node1];
    
        if (temp->edgeList[node2].dest != -1) {
            temp->edgeList[node2].cost = -1;
            temp = &adjList[node2];
            if (temp->edgeList[node1].dest != -1) {
                temp->edgeList[node1].cost = -1;
            }

        }
            
    }
