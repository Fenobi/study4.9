#define _CRT_SECURE_NO_WARNINGS
//#include <graphics.h>
//#include <MMSystem.h>//�������ֵ�ͷ�ļ�
//
//#include <Windows.h>
//
//
//#pragma comment(lib, "Winmm.lib")
//
//int main()
//{
//	//����һ�����ڣ�����������Ϊ3840���ؿ�2160���ظ�
//	initgraph(682, 384);
//
//	//��ͼƬabc1.jpg���ص���ǰ����
//	loadimage(0, _T("abc1.jpg"));
//
//	//��������
//	mciSendString(_T("play 541408708_nb2-1-64.mp3"), 0, 0, 0);
//	//mciSendString(L"open Marry.mp3 alias MYBGM", 0, 0, 0);  //mp3 �ļ����ܴ�mp3������Ҫ��.mp3
//	//mciSendString(L"play Marry repeat", 0, 0, 0);
//
//
//	system("pause");
//
//	closegraph();//�ѵ�ǰ���ڹر�
//
//	return 0;
//}

#include <easyx.h>
#include <stdio.h>
#include <conio.h>

void kong_zhi(char x)
{
	switch (x)
	{
	case 'w':
	case 'W':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 's':
	case 'S':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 'd':
	case 'D':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case 'a':
	case 'A':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case ' ':
	{
		printf("%c->%d\n", x, x);
		break;
	}
	case '\r'://�س�
	{
		printf("%c->%d\n", x, x);
		break;
	}
	}
}

int main()
{
	printf("����wsad���������Ҷ�����\n");
	char x = _getch();
	kong_zhi(x);
	return 0;
}