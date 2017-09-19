#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <list>
#include <direct.h>
#include <stdio.h>
#include <tchar.h>
#include <WinInet.h>
#pragma comment (lib,"User32.lib")
using namespace std;
class CopyFile
{
public:
	CopyFile();
	virtual ~CopyFile();
	void copy(string &path_for_copy, string &path_for_save);
private:
	string path_for_copy = "\\VN-SO10-NC100CD\DevelopmentTeamShared\Projects\Info3\01.Doc\HQ\Spec";
	string path_for_save = "D:\\Spec";

};

