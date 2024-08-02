#include "graph.h"

GraphAdjMat::GraphAdjMat(const std::vector<int>& vertices, const std::vector<std::vector<int>>& edges)
{
	for (int val : vertices)//��Ӷ���
	{
		addVertex(val);
	}
	for (std::vector<int> edge: edges)//��ӱ�
	{
		addEdge(edge[0], edge[1]);
	}
}


/*��Ӷ���*/
void GraphAdjMat::addVertex(int val)
{
	int n = size();
	vertices.push_back(val);
	adjMat.emplace_back(std::vector<int>(n, 0));//�ڽӾ������һ��
	for (std::vector<int>& rom : adjMat) rom.push_back(0);//�ڽӾ������һ��
}

/*�Ƴ�����*/
void GraphAdjMat::removeVertex(int index)
{
	if (index > size()) throw std::out_of_range("���㲻����");// ʹ��<stdexcept>�׳��쳣
	vertices.erase(vertices.begin() + index);// ɾ������
	adjMat.erase(adjMat.begin() + index);// ɾ��һ��
	for (std::vector<int>& rom : adjMat) rom.erase(rom.begin() + index);//ɾ��һ��
};


/*��ӱ�*/
void GraphAdjMat::addEdge(int i, int j)
{
	if (i >= size() || j >= size() || i < 0 || j < 0 || i == j) throw std::out_of_range("���㲻���ڣ�");
	adjMat[i][j] = 1;
	adjMat[j][i] = 1;// ��ӱ�
}

/*ɾ����*/
void GraphAdjMat::removeEdge(int i, int j)
{
	if (i >= size() || j >= size() || i < 0 || j < 0 || i == j) throw std::out_of_range("���㲻���ڣ�");
	adjMat[i][j] = 1;
	adjMat[j][i] = 0; // ɾ���ߣ������ڽӾ����е���ֵ��Ϊ0.
}

/*��ӡ�ڽӾ���*/
void GraphAdjMat::print()
{
	std::cout << "�����б�" << std::endl;
	printVector(vertices);
	std::cout << "�ڽӾ���" << std::endl;
	printVectorMatrix(adjMat);
}


void GraphAdjMat::printVector(std::vector<int>& vectices)
{
	for (int v : vectices) std::cout << v << " ";
	std::cout << std::endl;
}

void GraphAdjMat::printVectorMatrix(std::vector<std::vector<int>>& adjMat)
{
	for (std::vector<int>& rom : adjMat)
	{
		for (int v : rom) std::cout << v << " ";
		std::cout << std::endl;
	}
	
}

/*��ȡ��������*/
int GraphAdjMat::size() const
{
	return vertices.size();
}


GraphAdjMat::~GraphAdjMat()
{

}