
#include<iostream>
#include<cmath>

//  d��������ʱ��
# include<ctime> 


// C++��׼ģ��⣨STL���е�vector��������Ҳ����ʵ�ֱ䳤����
#include<vector>

using namespace std;

int prime_number(int n) {
    
    time_t begin, end;
    begin = clock();

    vector<int>obj;//����һ�������洢���� int

    bool b = true;
    for (int i = 2; i < n; i++){
        b = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                b = false;
                break;
            }
        }

        // ���ҵ����������浽obj���vector��
        //if (b){
        //    obj.push_back(i); // push_back(elem)���������������� 
        //}
    }

    // ����ҵ�������
    //for (int i = 0; i < obj.size(); i++)//size()������ʵ�����ݸ��� 
    //{
    //    cout << obj[i] << ",";
    //}

    end = clock();
    cout <<n<< "����ʱ��: " << double(end - begin) / CLOCKS_PER_SEC << endl;

    return 0;

}