#pragma once

//自定义数据类型
//定义所有的用户操作为枚举

#define 查看所有 1
#define 新增 2
#define 删除 3
#define 修改 4
#define 查询 5
#define 保存文本 6
#define 保存二进制 7

//定义存储账号密码的结构体
typedef struct _PASSWORD
{
	char website[100]; //站点名
	char userName[100]; //账户名
	char passWord[100]; //密码
	char note[100]; //备注
}PASSWORD,*PPASSWORD;

//全局变量，常量的声明
#define NUM 1000	//初始化密码本容量
extern int g_nNum;	//当前密码本容量

