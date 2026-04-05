#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>

using namespace std;

// 获取星期字符串
string getWeekday(int wday) {
    string weekdays[] = { "日", "一", "二", "三", "四", "五", "六" };
    return "星期" + weekdays[wday];
}

int main() {
    while (true) {
        system("cls");

        time_t now = time(0);
        tm* t = localtime(&now);

        int hour = t->tm_hour;
        string period = "";
        if (hour >= 12) {
            period = " PM";
            if (hour > 12) hour -= 12;
        }
        else {
            period = " AM";
            if (hour == 0) hour = 12;
        }

      