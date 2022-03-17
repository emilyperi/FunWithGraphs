#include "UndirectedGraphTest.h"
#include <iostream>

UndirectedGraphTest::UndirectedGraphTest() {
	this->_graph = UndirectedGraph();
}

UndirectedGraphTest::UndirectedGraphTest(UndirectedGraph g) {
	this->_graph = g;
}

void UndirectedGraphTest::setGraph(UndirectedGraph g) {
	this->_graph = g;
}

UndirectedGraph UndirectedGraphTest::getGraph() {
	return this->_graph;
}

void UndirectedGraphTest::testVertexSize() {
	int size = this->_graph.vertexSize();
	std::cout << "There are " << size << " vertices\n";
}

void UndirectedGraphTest::testAddThenSize() {
	testVertexSize();
	std::cout << "Adding one vertex\n";
	this->_graph.add();
	testVertexSize();

}

void UndirectedGraphTest::testEdgeSize() {
	int size = this->_graph.edgeSize();
	std::cout << "There are " << size << " edges\n";
}

void UndirectedGraphTest::testAddEdgeThenSize(int u, int v) {
	testEdgeSize();
	std::cout << "Adding edge " << "(" << u << ", " << v << ")\n";
	this->_graph.add(u, v);
	testEdgeSize();
}


void UndirectedGraphTest::testRemoveEdge(int u, int v) {
	testEdgeSize();
	std::cout << "Removing edge " << "(" << u << ", " << v << ")\n";
	this->_graph.remove(u, v);
	testEdgeSize();

}

void UndirectedGraphTest::testRemoveVertex(int v) {
	testVertexSize();
	testEdgeSize();
	std::cout << "Removing vertex " << v << "\n";
	this->_graph.remove(v);
	testVertexSize();
	testEdgeSize();
}