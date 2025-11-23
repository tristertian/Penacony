#include <iostream>
#include <cstring>
using namespace std;

class Token{
private:
    int nums[100], num_cnt, word_cnt, symbol_cnt;
    string words[100], a;
    char others[100];
    char*p;
public:
    Token(){
        memset(nums, 0, sizeof(nums));
        memset(words, '\0', sizeof(words));
        memset(others, '\0', sizeof(others));
        num_cnt=0, word_cnt=0, symbol_cnt=0;
    }
    int get_num_cnt(){
        return num_cnt;
    }
    int get_word_cnt(){
        return word_cnt;
    }
    int get_symbol_cnt(){
        return symbol_cnt;
    }
    int*get_nums(){
        return nums;
    }
    string*get_words(){
        return words;
    }
    char*get_others(){
        return others;
    }
    void extract_num() {
        int value = 0;
        while (*p >= '0' && *p <= '9') {
            value = value*10 + (*p-'0');
            p++;  //移动指针
        }
        nums[num_cnt] = value;
    }
    void extract_word() {
        while (*p >= 'a' && *p <= 'z') {
            words[word_cnt] += *p;
            p++;
        }
    }
    void extract_symbol() {
        others[symbol_cnt] = *p;
        p++;
    }
    void scan(){
        getline(cin, a);
        a += ' ';
        p = &a[0];
    }
    void traverse(){
        while (*p != '\0') {
            if (*p >= '0' && *p <= '9') {
                extract_num();
                num_cnt++;
            } else if (*p >= 'a' && *p <= 'z'){
                extract_word();
                word_cnt++;
            } else if (*p=='=' || *p=='+' || *p==';' || *p=='(' || *p==')' || *p=='{' || *p=='}') {
                extract_symbol();
                symbol_cnt++;
            } else {
                p++;
            }
        }
    }
    template<class T>
    void print(int cnt, T*array, string label){
        cout << "There are " << cnt << ' ' << label;
        for (int i = 0; i < cnt; i++) {
            cout << array[i] << (i!=cnt-1 ? ' ' : '\n');
        }
    }
};

int main(){
    Token obj;
    obj.scan();
    obj.traverse();
    obj.print<int>(obj.get_num_cnt(), obj.get_nums(), "integers:");
    obj.print<string>(obj.get_word_cnt(), obj.get_words(), "words:");
    obj.print<char>(obj.get_symbol_cnt(), obj.get_others(), "symbols:");
    cout<<"\n田佩宁 202512898\n";
}