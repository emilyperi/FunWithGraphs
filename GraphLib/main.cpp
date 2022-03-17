#include <iostream>
#include "Graph.h"
#include "UndirectedGraph.h"
#include "DirectedGraph.h"
#include "UndirectedGraphTest.h"
using namespace std;


int main() {
	cout << "this is a main function\n";

	UndirectedGraphTest* undirectT = new UndirectedGraphTest();

	 undirectT->testAddThenSize();
	 undirectT->testAddEdgeThenSize(1, 2);
	 undirectT->testAddThenSize();
	 undirectT->testAddEdgeThenSize(1, 2);

	return 0;
}