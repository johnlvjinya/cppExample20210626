#pragma once
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

void csv_write01()
{
    ofstream outFile("output/s01_write_csv_test1.csv", ios::out);
    //ios::out�����û���ļ�����ô���ɿ��ļ���������ļ�������ļ�
    if (!outFile)
    {
        //cout << "���ļ�ʧ�ܣ�" << endl;
        exit(1);
    }
    //д��3������

    outFile << "col1" << ",";
    outFile << "col2" << ",";
    outFile << "col3" << ",";
    outFile << "col4" << endl;

    for (int i = 0; i < 3; i++)
    {
        outFile << 12 << ",";
        outFile << 13 << ",";
        outFile << 14 << ",";
        outFile << "NaN" << endl;
    }
    outFile.close();
    //cout << "д���������" << endl;
}

