#pragma once
#ifndef _HASH_MAP_
#define _HASH_MAP_


#include <iostream>
#include <vector>
#include <string>
// using namespace std; 使用命名空间

// 字典节点
struct Pair
{
	int key;
	std::string val;
	Pair(int key, std::string val):key(key), val(val){}
};

class ArrayHashMap
{
private:
	std::vector<Pair*> buckets;

public:
	/*初始化数组 100个桶*/
	ArrayHashMap();
	/*释放内存*/
	~ArrayHashMap();
	/*哈希函数*/
	int hashFunc(int key);
	/*查询操作*/
	std::string get(int key);
	/*插入/添加操作*/
	void put(int key, std::string val);
	/*删除操作*/
	void remove(int key);
	/*获取所有键值对*/
	std::vector<Pair*> getPair();
	/*获取所有的键*/
	std::vector<int> getKey();
	/*获取所有的值*/
	std::vector<std::string> getVal();
	/*打印哈希表*/
	void print();
};
#endif // !_HASH_MAP_