#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int array[] = { 1,2,3,4,5 };
    vector<int> v1(array, array + 5);//��������
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    vector<int>v2(5, 10);//��������5��10
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    v1.assign(v2.begin(), v2.end());//��v2��ֵ����v1
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    v1.resize(10);//�������ĳ��ȱ䳤
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    v1.resize(2);//�������ĳ��ȱ��
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    
    return 0;

}