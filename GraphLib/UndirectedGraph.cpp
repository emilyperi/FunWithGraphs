#include <list>
#include "UndirectedGraph.h"

UndirectedGraph::UndirectedGraph()
{
}

int UndirectedGraph::vertexSize()
{
	return _sizeVertex;
}

int UndirectedGraph::maxVertex()
{
	return _maxVertex;
}

int UndirectedGraph::edgeSize()
{
	return _sizeEdges;
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
	_vertices.push_back(new std::list<int> ());
	_sizeVertex += 1;
	_maxVertex = _vertices.size();

	return _sizeVertex;
}

int UndirectedGraph::add(int u, int v)
{
	if (u > _maxVertex || v > _maxVertex) {
		return 0;
	}
	else if (_vertices[u - 1] == NULL || _vertices[v - 1] == NULL) {
		return 0;
	}
	else {
		(*_vertices[u - 1]).push_back(v);
		_sizeEdges += 1;
		return _sizeEdges;
	}
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
