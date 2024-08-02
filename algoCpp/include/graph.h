#pragma once
#ifndef _GRAPH_
#define _GRAPH_

#include <iostream>
#include <vector>
#include <stdexcept>



class GraphAdjMat
{
private:
	std::vector<int> vertices;//顶点索引
	std::vector<std::vector<int>> adjMat;
public:
	GraphAdjMat(const std::vector<int>& vertices, const std::vector<std::vector<int>>& adjMat);
	/*添加顶点*/
	void addVertex(int val);
	void removeVertex(int index);// 移除顶点
	void addEdge(int i, int j);// 添加边
	void removeEdge(int i, int j);//删除边
	void print();//打印邻接矩阵
	int size() const;
	void printVector(std::vector<int>& vectices);
	void printVectorMatrix(std::vector<std::vector<int>>& adjMat);
	~GraphAdjMat();
};


#endif // !_GRAPH_

