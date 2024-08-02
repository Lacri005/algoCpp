// 哈希表
#include "hash_map.h"

ArrayHashMap::ArrayHashMap()
	{ 
		buckets = std::vector<Pair*>(100); 
	}


	/*释放内存*/
ArrayHashMap::~ArrayHashMap()
	{	
		for (auto &bucket : buckets) {
			delete bucket;
		}
		buckets.clear();
	}

	/*哈希函数*/
int ArrayHashMap::hashFunc(int key)
	{
		int index = key % 100;
		return index;
	}

	/*查询操作*/
std::string ArrayHashMap::get(int key)
	{
		int index = hashFunc(key);
		Pair* pair = buckets[index];
		return pair->val;
	}

	/*插入/添加操作*/
void ArrayHashMap::put(int key, std::string val)
	{
		Pair* pair = new Pair(key = key, val = val);
		int index = hashFunc(key);
		buckets[index] = pair;
	}

	/*删除操作*/
void ArrayHashMap::remove(int key)
	{
		int index = hashFunc(key);
		delete buckets[index];
		buckets[index] = nullptr;

	}

	/*获取所有键值对*/
std::vector<Pair*> ArrayHashMap::getPair()
	{
		std::vector<Pair*> getPair;
		for (Pair* pair : buckets)
		{
			if (pair != nullptr) {
				getPair.push_back(pair);
			}
		}
		return getPair;
	}

	/*获取所有的键*/
std::vector<int> ArrayHashMap::getKey()
	{
		std::vector<int> getKey;
		for (Pair* pair: buckets)
		{
			if (pair != nullptr)
			{
				getKey.push_back(pair->key);
			}
		}
		return getKey;
	}

	/*获取所有的值*/
std::vector<std::string> ArrayHashMap::getVal()
	{
		std::vector<std::string> getVal;
		for (Pair* pair : buckets)
		{
			if (pair != nullptr)
			{
				getVal.push_back(pair->val);
			}
		}
		return getVal;
	}

	/*打印哈希表*/
void ArrayHashMap::print()
	{
		for (Pair* pair : getPair())
		{
			std::cout << pair->key << "->" << pair->val << std::endl;
		}
	}




