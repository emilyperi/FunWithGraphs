#include <iterator>
#include "pch.h"
#include "Graph.h"


std::iterator<std::forward_iterator_tag, int> Graph::neighbors(int v)
{
    return successors(v);
}

void Graph::checkMyVertex(int v)
{
}

int Graph::degree(int v)
{
    return outDegree(v);
}
