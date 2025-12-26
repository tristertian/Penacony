#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

/* 工具：从文件读 n 个整数到 vec */
bool readInts(const string& file, vector<int>& vec, size_t n)
{
    ifstream fin(file);
    if (!fin) return false;
    int x;
    while (fin >> x && n--) vec.push_back(x);
    return true;
}

/* 工具：向文件追加 vec 中所有整数，空格分隔 */
bool appendInts(const string& file, const vector<int>& vec)
{
    ofstream fout(file, ios::app);
    if (!fout) return false;
    for (int x : vec) fout << x << ' ';
    return true;
}

/* 工具：把 vec 中整数覆写到文件，空格分隔 */
bool writeInts(const string& file, const vector<int>& vec)
{
    ofstream fout(file);
    if (!fout) return false;
    for (size_t i = 0; i < vec.size(); ++i)
        fout << vec[i] << (i + 1 == vec.size() ? '\n' : ' ');
    return true;
}

int main()
{
    const string src = "in.txt";
    const string f1  = "f1.txt";
    const string f2  = "f2.txt";

    /* 1. 读入 20 个整数 */
    vector<int> data;
    if (!readInts(src, data, 20) || data.size() != 20) {
        cerr << "无法读取 " << src << " 或数据不足 20 个\n";
        return 1;
    }

    /* 2. 拆成两份，各 10 个，分别写入 f1.txt 和 f2.txt */
    vector<int> d1(data.begin(), data.begin() + 10);
    vector<int> d2(data.begin() + 10, data.end());
    if (!writeInts(f1, d1) || !writeInts(f2, d2)) {
        cerr << "写入 f1/f2 失败\n";
        return 1;
    }

    /* 3. 把 f1 的 10 个数追加到 f2 末尾 */
    vector<int> tmp;
    if (!readInts(f1, tmp, 10)) {
        cerr << "读取 f1 失败\n";
        return 1;
    }
    if (!appendInts(f2, tmp)) {
        cerr << "追加到 f2 失败\n";
        return 1;
    }

    /* 4. 把 f2 当前全部 20 个整数读回，排序后覆写 */
    vector<int> merged;
    if (!readInts(f2, merged, 20) || merged.size() != 20) {
        cerr << "读取合并后的 f2 失败\n";
        return 1;
    }
    sort(merged.begin(), merged.end());
    if (!writeInts(f2, merged)) {
        cerr << "写入排序后的 f2 失败\n";
        return 1;
    }

    cout << "全部步骤完成！请检查 f1.txt 和 f2.txt\n";
    return 0;
}
