//  "ki    thuat lap trinh          "
#include<iostream>
#include<string.h>
using namespace std;

void del(char* s, int pos) {
    for (int i = pos; i < strlen(s); i++) {
        s[i] = s[i + 1];
    }
}
void Standardize(char* s) {
    // xóa kí tự khoảng trắng ở đầu
    while (s[0] == ' ') {
        del(s, 0);
    }
    // xoá kí tự khoảng trắng ở cuối
    while (s[strlen(s) - 1] == ' ') {
        del(s, strlen(s) - 1);
    }
    // xóa kí tự khoảng trắng ở giữa
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            del(s, i + 1);
            i--;
        }
    }
    // viết kí tự hoa ở đầu
    if (s[0] >= 97 && s[0] <= 122) {
        s[0] -= 32;
    }
    // viết hoa ở kí tự đầu của các chữ đằng sau
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == ' ') {
            i++;
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 'a' - 'A';
            }
        }
        else // in thường
        {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 'a' - 'A';
            }
        }
    }
}
int main()
{
    char s[100];
    cout << "Enter string: ";
    cin.getline(s, 100);
    Standardize(s);
    cout << "String after standarizing: ";
    cout << s;
    return 0;
}


