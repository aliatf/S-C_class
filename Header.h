#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib,"ws2_32.lib")
#include <stdio.h>
#include <winsock2.h> // Wincosk2.h ������ ���� ������ windows!
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MY_PORT 666; // ����, ������� ������� ������ 666

// ������ ��� ������ ���������� �������� �������������
#define PRINTNUSERS if (nclients) printf("%d user on-line\n", nclients); \
         else printf("No User on line\n");
class Server 
{
	int handle();
	int nclients = 0;
	
	
};