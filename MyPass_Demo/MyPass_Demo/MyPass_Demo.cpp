// MyPass_Demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"ctrl.h"
#include"data.h"	//修改点：添加了文件头
#include<stdlib.h>	//自己加的
//#include<io.h>	//自己加的


int _tmain(int argc, _TCHAR* argv[])
{
	//PPASSWORD pPwd = nullprt;//密码数组
	PPASSWORD pPwd = NULL;	//修改点

	int nCount = 0;
	g_nNum = 0;

	readInfo(&pPwd, &nCount);

	//自己界面加的一些内容
	system("title 简易密码本 v1.2.1   By: 追风少年");
	system("color 0F");
	system("mode con cols=50 lines=35");

	

	//开始检测是否有data.i文件
// 	if (_access("data.i", 0)!=0)	//这个函数可以判断文件是否存在
// 	{
// 		system("cd.>data.i");	//不存在是自动创建
// 	}

	while (true)
	{
		printf("\n\n");
		printf("\t\t++++++++++++++++++\n");
		printf("\t\t++++  密码本  ++++\n");
		printf("\t\t++++++++++++++++++\n");
		printf("\n\n");
		printf("功能选项：\n\n");
		printf("\t1 查看所有密码\n");
		printf("\t2 新增密码\n");
		printf("\t3 删除密码\n");
		printf("\t4 修改密码\n");
		printf("\t5 查询密码\n");
		printf("\t6 生成文件\n");
		//自己添加
		printf("\t7 退出程序\n\n");
		printf("请输入你的选择: ");
	

		//OPTION op;
		int op;	//修改点
		scanf_s("%d", &op);
		switch (op)
		{
		case 查看所有:
			searchAllInfo(pPwd, nCount);
			break;
		case 新增:
			insertInfo(pPwd, &nCount);
			break;
		case 删除:
			if (nCount == 0)	//判断空文件
			{
				printf("\n目前没有保存过密码,请先进行添加操作\n\n");
				system("pause");
				system("cls");
				break;
			}
			deleteInfo(pPwd, &nCount);
			break;
		case 修改:
			if (nCount == 0)
			{
				printf("\n目前没有保存过密码,请先进行添加操作\n\n");
				system("pause");
				system("cls");
				break;
			}
			alterInfo(pPwd, nCount);
			break;
		case 查询:
			searchInfo(pPwd, nCount);
			break;
		case 保存文本:
			SaveInfoA(pPwd, nCount);
			break;
		case 7:
			exit(0);	//退出程序
			break;
		default:
			break;

		}
	}
	return 0;
}


