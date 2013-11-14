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
    for (int i = 0; i<temp->edgeList.size(); i++) {
        if (temp->edgeList[i].dest == node2) {
            return temp->edgeList[i].cost;
        }
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
        bool keepSearching = true;
        bool alreadyExists = false;
        Node* temp = &adjList[node1];
        for (int i = 0; i<temp->edgeList.size() && keepSearching; i++) {
            if (temp->edgeList[i].dest == node2) {
                temp->edgeList[i].cost = cost;
                keepSearching = false;
                alreadyExists = true;
            }
        }
        keepSearching = true;
        if (alreadyExists){
        temp = &adjList[node2];
        for (int i = 0; i<temp->edgeList.size() && keepSearching; i++) {
            if (temp->edgeList[i].dest == node1) {
                temp->edgeList[i].cost = cost;
                keepSearching = false;
                alreadyExists = true;
            }
        }
      }
        
        else{
            temp->edgeList[temp->edgeList.size()-1] = Edge(cost, node2);
            temp = &adjList[node2];
            temp->edgeList[temp->edgeList.size()-1] = Edge(cost, node1);
            
        }
    }

    
}

//Remove the edge from node1 to node2, and also from node2 to node1.
// If there are no such edges, then don't do anything.
void Graph::removeEdge(int node1, int node2){
    bool keepSearching = true;
    bool alreadyExists = false;
    Node* temp = &adjList[node1];
    for (int i = 0; i<temp->edgeList.size() && keepSearching; i++) {
        if (temp->edgeList[i].dest == node2) {
            temp->edgeList[i].cost = -1;
            keepSearching = false;
            alreadyExists = true;
        }
    }
    keepSearching = true;
    if (alreadyExists){
        temp = &adjList[node2];
        for (int i = 0; i<temp->edgeList.size() && keepSearching; i++) {
            if (temp->edgeList[i].dest == node1) {
                temp->edgeList[i].cost = -1;
                keepSearching = false;
                alreadyExists = true;
            }
        }
    }
}
