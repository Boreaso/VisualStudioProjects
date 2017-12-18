#pragma once

#include <assert.h>
#include<iostream>
using namespace std;

template <typename T>
bool isArray(T)
{
	return false;
}

template <typename T>
bool isArray(T[])
{
	return true;
}

template<class T>
int len(T& arr)
{
	//cout << sizeof(arr[0]) << endl;
	//cout << sizeof(arr) << endl;
	assert(isArray(arr));
	return sizeof(arr) / sizeof(arr[0]);
}

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
