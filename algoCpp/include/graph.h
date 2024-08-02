#pragma once
#ifndef _GRAPH_
#define _GRAPH_

#include <iostream>
#include <vector>
#include <stdexcept>



class GraphAdjMat
{
private:
	std::vector<int> vertices;//��������
	std::vector<std::vector<int>> adjMat;
public:
	GraphAdjMat(const std::vector<int>& vertices, const std::vector<std::vector<int>>& adjMat);
	/*��Ӷ���*/
	void addVertex(int val);
	void removeVertex(int index);// �Ƴ�����
	void addEdge(int i, int j);// ��ӱ�
	void removeEdge(int i, int j);//ɾ����
	void print();//��ӡ�ڽӾ���
	int size() const;
	void printVector(std::vector<int>& vectices);
	void printVectorMatrix(std::vector<std::vector<int>>& adjMat);
	~GraphAdjMat();
};


#endif // !_GRAPH_

