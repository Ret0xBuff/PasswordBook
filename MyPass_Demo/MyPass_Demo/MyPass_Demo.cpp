// MyPass_Demo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"ctrl.h"
#include"data.h"	//�޸ĵ㣺������ļ�ͷ
#include<stdlib.h>	//�Լ��ӵ�
//#include<io.h>	//�Լ��ӵ�


int _tmain(int argc, _TCHAR* argv[])
{
	//PPASSWORD pPwd = nullprt;//��������
	PPASSWORD pPwd = NULL;	//�޸ĵ�

	int nCount = 0;
	g_nNum = 0;

	readInfo(&pPwd, &nCount);

	//�Լ�����ӵ�һЩ����
	system("title �������뱾 v1.2.1   By: ׷������");
	system("color 0F");
	system("mode con cols=50 lines=35");

	

	//��ʼ����Ƿ���data.i�ļ�
// 	if (_access("data.i", 0)!=0)	//������������ж��ļ��Ƿ����
// 	{
// 		system("cd.>data.i");	//���������Զ�����
// 	}

	while (true)
	{
		printf("\n\n");
		printf("\t\t++++++++++++++++++\n");
		printf("\t\t++++  ���뱾  ++++\n");
		printf("\t\t++++++++++++++++++\n");
		printf("\n\n");
		printf("����ѡ�\n\n");
		printf("\t1 �鿴��������\n");
		printf("\t2 ��������\n");
		printf("\t3 ɾ������\n");
		printf("\t4 �޸�����\n");
		printf("\t5 ��ѯ����\n");
		printf("\t6 �����ļ�\n");
		//�Լ����
		printf("\t7 �˳�����\n\n");
		printf("���������ѡ��: ");
	

		//OPTION op;
		int op;	//�޸ĵ�
		scanf_s("%d", &op);
		switch (op)
		{
		case �鿴����:
			searchAllInfo(pPwd, nCount);
			break;
		case ����:
			insertInfo(pPwd, &nCount);
			break;
		case ɾ��:
			if (nCount == 0)	//�жϿ��ļ�
			{
				printf("\nĿǰû�б��������,���Ƚ�����Ӳ���\n\n");
				system("pause");
				system("cls");
				break;
			}
			deleteInfo(pPwd, &nCount);
			break;
		case �޸�:
			if (nCount == 0)
			{
				printf("\nĿǰû�б��������,���Ƚ�����Ӳ���\n\n");
				system("pause");
				system("cls");
				break;
			}
			alterInfo(pPwd, nCount);
			break;
		case ��ѯ:
			searchInfo(pPwd, nCount);
			break;
		case �����ı�:
			SaveInfoA(pPwd, nCount);
			break;
		case 7:
			exit(0);	//�˳�����
			break;
		default:
			break;

		}
	}
	return 0;
}


