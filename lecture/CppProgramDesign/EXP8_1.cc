#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

/* 从文件读 n 个整数到 vec */
void readInts(const string& file, vector<int>& vec, size_t n)
{
    ifstream fin(file, ios::out);
    int x;
    while (fin >> x && n--) {vec.push_back(x);}
}

/* 向文件追加 vec 中所有整数，空格分隔 */
void appendInts(const string& file, const vector<int>& vec)
{
    ofstream fout(file, ios::app);
    for (int x : vec) {fout << x << ' ';}
}

/* 把 vec 中整数覆写到文件，空格分隔 */
void writeInts(const string& file, const vector<int>& vec)
{
    ofstream fout(file);
    for (size_t i = 0; i < vec.size(); ++i)
        fout << vec[i] << (i + 1 == vec.size() ? '\n' : ' ');
}

int main()
{
    const string src = "in.txt";
    const string f1  = "f1.txt";
    const string f2  = "f2.txt";

    /* 读入 20 个整数 */
    vector<int> data;
    readInts(src, data, 20);
    /* 拆成两份，各 10 个，分别写入 f1.txt 和 f2.txt */
    vector<int> d1(data.begin(), data.begin() + 10);
    vector<int> d2(data.begin() + 10, data.end());
    writeInts(f1, d1);
    writeInts(f2, d2);

    /* 把 f1 的 10 个数追加到 f2 末尾 */
    vector<int> tmp;
    readInts(f1, tmp, 10);
    appendInts(f2, tmp);

    /* 把 f2 当前全部 20 个整数读回，排序后覆写 */
    vector<int> merged;
    readInts(f2, merged, 20);
    sort(merged.begin(), merged.end());
    writeInts(f2, merged);
}