#pragma once
#include "Graph.h"
class UndirectedGraph :
    public Graph
{
public:
    // Default Constructor
    UndirectedGraph();

    int vertexSize() override;

    int maxVertex() override;

    int edgeSize() override;

    bool isDirected() override;

    int outDegree(int v) override;

    int inDegree(int v) override;

    bool contains(int v) override;

    bool contains(int u, int v) override;

    int add() override;

    int add(int u, int v) override;

    void remove(int v) override;

    void remove(int u, int v) override;

    std::iterator<std::forward_iterator_tag, int> successors(int v) override;

    std::iterator<std::forward_iterator_tag, int> rSuccessors(int v) override;

    std::iterator<std::forward_iterator_tag, int> predecessors(int v) override;

    std::iterator<std::forward_iterator_tag, int> rPredecessors(int v) override;

    std::iterator<std::forward_iterator_tag, int[]> edges() override;

protected:
    int edgeId(int u, int v) override;


private:
    std::list<std::list<int>> _vertices;
    int _maxVertex = 0;
    int _sizeVertex = 0;
    int _sizeEdges = 0;

};

