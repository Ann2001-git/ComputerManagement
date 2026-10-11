#pragma once

#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>
#include <vector>
#include "ComputerRoom.h"
#include <fstream>
#include "GlobalFile.h"
#include "OrderFile.h"

//学生类
class Student : public Identity
{
public:

	Student();
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;
};