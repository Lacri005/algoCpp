// ��ϣ��
#include "hash_map.h"

ArrayHashMap::ArrayHashMap()
	{ 
		buckets = std::vector<Pair*>(100); 
	}


	/*�ͷ��ڴ�*/
ArrayHashMap::~ArrayHashMap()
	{	
		for (auto &bucket : buckets) {
			delete bucket;
		}
		buckets.clear();
	}

	/*��ϣ����*/
int ArrayHashMap::hashFunc(int key)
	{
		int index = key % 100;
		return index;
	}

	/*��ѯ����*/
std::string ArrayHashMap::get(int key)
	{
		int index = hashFunc(key);
		Pair* pair = buckets[index];
		return pair->val;
	}

	/*����/��Ӳ���*/
void ArrayHashMap::put(int key, std::string val)
	{
		Pair* pair = new Pair(key = key, val = val);
		int index = hashFunc(key);
		buckets[index] = pair;
	}

	/*ɾ������*/
void ArrayHashMap::remove(int key)
	{
		int index = hashFunc(key);
		delete buckets[index];
		buckets[index] = nullptr;

	}

	/*��ȡ���м�ֵ��*/
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

	/*��ȡ���еļ�*/
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

	/*��ȡ���е�ֵ*/
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

	/*��ӡ��ϣ��*/
void ArrayHashMap::print()
	{
		for (Pair* pair : getPair())
		{
			std::cout << pair->key << "->" << pair->val << std::endl;
		}
	}




