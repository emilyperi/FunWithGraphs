#pragma once
#include "UndirectedGraph.h"

class UndirectedGraphTest {
public:
	// Default Constructor
	UndirectedGraphTest();

	// Constructor from existing Undirected Graph
	UndirectedGraphTest(UndirectedGraph g);

	void setGraph(UndirectedGraph g);

	UndirectedGraph getGraph();

	void testVertexSize();

	void testAddThenSize();

	void testEdgeSize();

	void testAddEdgeThenSize(int u, int v);

private:
	UndirectedGraph _graph;
};