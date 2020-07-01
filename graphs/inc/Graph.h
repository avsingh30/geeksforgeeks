/*
 * Graph.h
 *
 *  Created on: 01-Jul-2020
 *      Author: viraj
 */

#ifndef GRAPHS_INC_GRAPH_H_
#define GRAPHS_INC_GRAPH_H_

#include <list>
using namespace std;

namespace _GRAPH_ {

class Graph {
public:
	Graph();
	virtual ~Graph();
private:
	int V; //Number of vertices
	// Pointer to an array containing
	// adjacency lists
	list<int> *adj;
};

} /* namespace _GRAPH_ */

#endif /* GRAPHS_INC_GRAPH_H_ */
