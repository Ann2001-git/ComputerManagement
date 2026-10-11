#pragma once

#include <iostream>
using namespace std;
#include "GlobalFile.h"
#include <fstream>
#include <map>
#include <string>

class OrderFile
{
public:

	OrderFile();

	//更新预约记录
	void updateOrder();

	//记录预约条数
	int m_Size;

	//记录所有预约信息
	map<int, map<string, string>> m_orderData;

};
