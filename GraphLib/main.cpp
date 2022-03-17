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
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(1, 2);
	 cout << "\n";
	 undirectT->testAddThenSize();
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(1, 2);
	 cout << "\n";
	 undirectT->testRemoveEdge(1, 2);
	 cout << "\n";
	 undirectT->testRemoveEdge(1, 2);
	 cout << "\n";
	 undirectT->testRemoveEdge(2, 1);
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(2, 1);
	 cout << "\n";
	 undirectT->testRemoveEdge(2, 1);
	 cout << "\n";
	 undirectT->testAddThenSize();
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(1, 3);
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(2, 3);
	 cout << "\n";
	 undirectT->testAddEdgeThenSize(3, 1);
	 cout << "\n";
	 undirectT->testRemoveVertex(3);

	return 0;
}