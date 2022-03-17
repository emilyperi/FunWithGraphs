#pragma once
#include <iterator>

class Graph
{
public:
	// Returns number of vertices
	virtual int vertexSize() = 0;

	// Returns number of edges
	virtual int edgeSize() = 0;

	// Returns the maximum vertex number, or zero if no vertices
	virtual int maxVertex() = 0;

	// Returns true iff a directed graph
	virtual bool isDirected() = 0;

	// Returns number of outgoing edges incident to v, or 0 if v not in graph
	virtual int outDegree(int v) = 0;

	// Returns number of incoming edges incident to v, or 0 if v not in graph
	virtual int inDegree(int v) = 0;

	// Synomyn for outDegree for undirected graphs
	int degree(int v);

	// Returns true iff u is a vertex in graph
	virtual bool contains(int v) = 0;

	// Returns true if an edge exists between vertices u an v
	virtual bool contains(int u, int v) = 0;

	// Creates and returns new vertex and inserts into graph
	virtual int add() = 0;

	// Creates an edge from vertex u to vertex v and returns a unique edge identifier. Has no affect if (u, v) already exists
	virtual int add(int u, int v) = 0;

	// Removes vertix v from graph
	virtual void remove(int v) = 0;

	// Removes edge from vertex u to vertex v from graph
	virtual void remove(int u, int v) = 0;

	// Returns an interator over all vertices that can be reached from v's outgoing egdes
	virtual std::iterator<std::forward_iterator_tag, int> successors(int v) = 0;

	// Returns a reverse iterator over all vertices that can be reached from v's outgoing egdes
	virtual std::iterator<std::forward_iterator_tag, int> rSuccessors(int v) = 0;

	// Returns an iteartor over all of the vertices that connect to v via incoming edges
	virtual std::iterator<std::forward_iterator_tag, int> predecessors(int v) = 0;

	// Returns a reverse iteartor over all of the vertices that connect to v via incoming edges
	virtual std::iterator<std::forward_iterator_tag, int> rPredecessors(int v) = 0;

	// Synonym for sucessors for undirected graphs
	std::iterator<std::forward_iterator_tag, int> neighbors(int v);

	// Returns an iterator over all of graph's ecdges, in which edges are reprsented at a two int array
	virtual std::iterator<std::forward_iterator_tag, int[]> edges() = 0;

protected:

	// Internal function for error checking
	void checkMyVertex(int v);

	// Returns an ID associated with each edge (u, v)
	virtual int edgeId(int u, int v) = 0;

};