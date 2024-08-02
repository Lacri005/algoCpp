#include "graph.h"

GraphAdjMat::GraphAdjMat(const std::vector<int>& vertices, const std::vector<std::vector<int>>& edges)
{
	for (int val : vertices)//添加顶点
	{
		addVertex(val);
	}
	for (std::vector<int> edge: edges)//添加边
	{
		addEdge(edge[0], edge[1]);
	}
}


/*添加顶点*/
void GraphAdjMat::addVertex(int val)
{
	int n = size();
	vertices.push_back(val);
	adjMat.emplace_back(std::vector<int>(n, 0));//邻接矩阵添加一行
	for (std::vector<int>& rom : adjMat) rom.push_back(0);//邻接矩阵添加一列
}

/*移除顶点*/
void GraphAdjMat::removeVertex(int index)
{
	if (index > size()) throw std::out_of_range("顶点不存在");// 使用<stdexcept>抛出异常
	vertices.erase(vertices.begin() + index);// 删除顶点
	adjMat.erase(adjMat.begin() + index);// 删除一行
	for (std::vector<int>& rom : adjMat) rom.erase(rom.begin() + index);//删除一列
};


/*添加边*/
void GraphAdjMat::addEdge(int i, int j)
{
	if (i >= size() || j >= size() || i < 0 || j < 0 || i == j) throw std::out_of_range("顶点不存在！");
	adjMat[i][j] = 1;
	adjMat[j][i] = 1;// 添加边
}

/*删除边*/
void GraphAdjMat::removeEdge(int i, int j)
{
	if (i >= size() || j >= size() || i < 0 || j < 0 || i == j) throw std::out_of_range("顶点不存在！");
	adjMat[i][j] = 1;
	adjMat[j][i] = 0; // 删除边，即将邻接矩阵中的数值变为0.
}

/*打印邻接矩阵*/
void GraphAdjMat::print()
{
	std::cout << "顶点列表" << std::endl;
	printVector(vertices);
	std::cout << "邻接矩阵" << std::endl;
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

/*获取顶点数量*/
int GraphAdjMat::size() const
{
	return vertices.size();
}


GraphAdjMat::~GraphAdjMat()
{

}