#pragma once
#include"data.h"	//修改点


//查看所有密码
void searchAllInfo(PASSWORD pwd[], int nCount);
//新增密码
void insertInfo(PASSWORD pwd[], int *pnCount);
//删除密码
void deleteInfo(PASSWORD pwd[], int *pnCount);
//修改密码
void alterInfo(PASSWORD pwd[], int pnCount);
//查询密码
void searchInfo(PASSWORD pwd[], int pnCount);
//保存密码(文本形式)
void SaveInfoA(PASSWORD pwd[], int pnCount);
//保存密码(二进制形式)
void SaveInfoB(PASSWORD pwd[], int pnCount);


//从本地文件中读取密码，用于初始化密码本
void readInfo(PPASSWORD * ppPwd, int *pnCount);

