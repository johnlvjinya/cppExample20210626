#pragma once
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

void csv_write01()
{
    ofstream outFile("output/s01_write_csv_test1.csv", ios::out);
    //ios::out：如果没有文件，那么生成空文件；如果有文件，清空文件
    if (!outFile)
    {
        //cout << "打开文件失败！" << endl;
        exit(1);
    }
    //写入3行数据

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
    //cout << "写入数据完成" << endl;
}

