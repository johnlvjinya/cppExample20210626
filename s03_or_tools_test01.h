
// �鿴��������
#include <typeinfo>

// �����ļ�
#include<iostream>
#include<fstream>
#include<string>

// json �ο�: https://github.com/nlohmann/json
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

    // C++11 auto����������������ʱ����ݱ�����ʼֵ�������Զ�Ϊ�˱���ѡ��ƥ�������
    auto j2 = R"({"happy": true,"pi": 3.141})"_json;
    cout << "j2==>" << typeid(j2).name() << "\n" << j2 << endl;

    auto j3 = json::parse(R"({"happy": true, "pi": 3.141})");
    cout << "j3==>" << typeid(j3).name() << "\n" << j3 << endl;

    auto j4 = R"({"happy": true,"pi": 3.141})";
    cout << "j4==>" << typeid(j4).name() << "\n" << j4 << endl;


    // ��json����ַ���
    std::string s = j1.dump();

    ofstream os;     //����һ���ļ����������
    os.open("output/json_test1.json");//���������ļ�����
    os << s;   //����������ݷ���json�ļ���
    os.close();

    // ��json�ļ���ȡΪ�ַ�����Ȼ�������json��ʽ
    ifstream myfile("output/json_test1.json");
    string temp;
    if (!myfile.is_open())
    {
        cout << "δ�ɹ����ļ�" << endl;
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