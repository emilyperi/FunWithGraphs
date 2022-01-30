#include <list>
#include "pch.h"
#include "UndirectedGraph.h"

UndirectedGraph::UndirectedGraph()
{
}

int UndirectedGraph::vertexSize()
{
	return 0;
}

int UndirectedGraph::maxVertex()
{
	return 0;
}

int UndirectedGraph::edgeSize()
{
	return 0;
}

bool UndirectedGraph::isDirected()
{
	return false;
}

int UndirectedGraph::outDegree(int v)
{
	return 0;
}

int UndirectedGraph::inDegree(int v)
{
	return 0;
}

bool UndirectedGraph::contains(int v)
{
	return false;
}

bool UndirectedGraph::contains(int u, int v)
{
	return false;
}

int UndirectedGraph::add()
{
	return 0;
}

int UndirectedGraph::add(int u, int v)
{
	return 0;
}

void UndirectedGraph::remove(int v)
{
}

void UndirectedGraph::remove(int u, int v)
{
}

std::iterator<std::forward_iterator_tag, int> UndirectedGraph::successors(int v)
{
	return std::iterator<std::forward_iterator_tag, int>();
}

std::iterator<std::forward_iterator_tag, int> UndirectedGraph::rSuccessors(int v)
{
	return std::iterator<std::forward_iterator_tag, int>();
}

std::iterator<std::forward_iterator_tag, int> UndirectedGraph::predecessors(int v)
{
	return std::iterator<std::forward_iterator_tag, int>();
}

std::iterator<std::forward_iterator_tag, int> UndirectedGraph::rPredecessors(int v)
{
	return std::iterator<std::forward_iterator_tag, int>();
}

std::iterator<std::forward_iterator_tag, int[]> UndirectedGraph::edges()
{
	return std::iterator<std::forward_iterator_tag, int[]>();
}

int UndirectedGraph::edgeId(int u, int v)
{
	return 0;
}
