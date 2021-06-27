
#include<iostream>
#include<cmath>

//  d代码运行时间
# include<ctime> 


// C++标准模版库（STL）中的vector（向量）也可以实现变长数组
#include<vector>

using namespace std;

int prime_number(int n) {
    
    time_t begin, end;
    begin = clock();

    vector<int>obj;//创建一个向量存储容器 int

    bool b = true;
    for (int i = 2; i < n; i++){
        b = true;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                b = false;
                break;
            }
        }

        // 将找到的素数保存到obj这个vector中
        //if (b){
        //    obj.push_back(i); // push_back(elem)在数组最后添加数据 
        //}
    }

    // 输出找到的素数
    //for (int i = 0; i < obj.size(); i++)//size()容器中实际数据个数 
    //{
    //    cout << obj[i] << ",";
    //}

    end = clock();
    cout <<n<< "运行时间: " << double(end - begin) / CLOCKS_PER_SEC << endl;

    return 0;

}