
// 查看数据类型
#include <typeinfo>

// 保存文件
#include<iostream>
#include<fstream>
#include<string>

// json 参考: https://github.com/nlohmann/json
#include "json.hpp"  

using namespace std;

int main_json_test01() {
    using json = nlohmann::json;

    json j1 = {
      {"pi", 3.141},
      {"happy", true},
      {"name", "Niels"},
      {"nothing", nullptr},
      {"answer", {
        {"everything", 42}
      }},
      {"list", {1, 0, 2}},
      {"object", {
        {"currency", "USD"},
        {"value", 42.99}
      }}
    };
    cout <<"j1==>"<< typeid(j1).name() << "\n" << j1 <<endl;

    // C++11 auto可以在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型
    auto j2 = R"({"happy": true,"pi": 3.141})"_json;
    cout << "j2==>" << typeid(j2).name() << "\n" << j2 << endl;

    auto j3 = json::parse(R"({"happy": true, "pi": 3.141})");
    cout << "j3==>" << typeid(j3).name() << "\n" << j3 << endl;

    auto j4 = R"({"happy": true,"pi": 3.141})";
    cout << "j4==>" << typeid(j4).name() << "\n" << j4 << endl;


    // 将json变成字符串
    std::string s = j1.dump();

    ofstream os;     //创建一个文件输出流对象
    os.open("output/json_test1.json");//将对象与文件关联
    os << s;   //将输入的内容放入json文件中
    os.close();

    // 打开json文件读取为字符串，然后解析成json格式
    ifstream myfile("output/json_test1.json");
    string temp;
    if (!myfile.is_open())
    {
        cout << "未成功打开文件" << endl;
    }

    string str0 = "";
    while (getline(myfile, temp))
    {
        str0 += temp;
    }
    myfile.close();
    auto j5 = json::parse(str0);
    cout << "j5==>" << typeid(j5).name() << "\n" << j5 << endl;


	return 0;
}