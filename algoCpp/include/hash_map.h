#pragma once
#ifndef _HASH_MAP_
#define _HASH_MAP_


#include <iostream>
#include <vector>
#include <string>
// using namespace std; ʹ�������ռ�

// �ֵ�ڵ�
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
	/*��ʼ������ 100��Ͱ*/
	ArrayHashMap();
	/*�ͷ��ڴ�*/
	~ArrayHashMap();
	/*��ϣ����*/
	int hashFunc(int key);
	/*��ѯ����*/
	std::string get(int key);
	/*����/��Ӳ���*/
	void put(int key, std::string val);
	/*ɾ������*/
	void remove(int key);
	/*��ȡ���м�ֵ��*/
	std::vector<Pair*> getPair();
	/*��ȡ���еļ�*/
	std::vector<int> getKey();
	/*��ȡ���е�ֵ*/
	std::vector<std::string> getVal();
	/*��ӡ��ϣ��*/
	void print();
};
#endif // !_HASH_MAP_