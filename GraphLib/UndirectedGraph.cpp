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
	return inRange(v) && exist(v);
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
	if (contains(u) && contains(v)) {
		getEdges(u)->push_back(v);
		_sizeEdges += 1;
		return _sizeEdges;
	}
	return 0;
}

void UndirectedGraph::remove(int v)
{
	if (contains(v)) {
		for (std::list<int>* edgeList : _vertices) {
			if (edgeList) {
				size_t sizeBefore = edgeList->size();
				edgeList->remove(v);
				size_t sizeAfter = edgeList->size();
				_sizeEdges -= (sizeBefore - sizeAfter);
			}
		}

		_sizeEdges -= _vertices[v - 1]->size();
		delete _vertices[v - 1];
		_vertices[v - 1] = NULL;
		_sizeVertex -= 1;
	}

}

void UndirectedGraph::remove(int u, int v)
{
	if (contains(u)) {
		std::list<int>* uEdges = getEdges(u);
		size_t sizeBefore = uEdges->size();
		uEdges->remove(v);
		size_t sizeAfter = uEdges->size();
		_sizeEdges -= (sizeBefore - sizeAfter);
	}
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

bool UndirectedGraph::inRange(int v) {
	return v <= _vertices.size() && v > 0;
}

bool UndirectedGraph::exist(int v) {
	return getEdges(v) != NULL;
}

std::list<int>* UndirectedGraph::getEdges(int v) {
	return _vertices[v - 1];
}
