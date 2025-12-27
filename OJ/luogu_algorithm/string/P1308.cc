#include <iostream>
#include <string>
using namespace std;

void lowercase(string& str){
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 'a' - 'A';
        }
    }
}

int main(){
    string obj, article;
    
    // 正确读取顺序
    getline(cin, obj);
    getline(cin, article);
    
    // 转换为小写
    lowercase(obj);
    lowercase(article);
    
    // 在文章前后加空格，确保匹配边界单词
    string searchText = " " + article + " ";
    string target = " " + obj + " ";
    
    int cnt = 0;
    int firstPos = -1;
    
    size_t t_pos = 0;
    while ((t_pos = searchText.find(target, t_pos)) != string::npos) {
        if (cnt == 0) {
            // 计算在原文中的位置：减去前面添加的空格
            firstPos = t_pos;
        }
        cnt++;
        t_pos++; // 移动位置继续查找
    }
    
    if (cnt == 0) {
        cout << -1 << endl;
    } else {
        cout << cnt << " " << firstPos << endl;
    }
    
    return 0;
}