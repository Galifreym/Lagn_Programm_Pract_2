#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    vector<string> weekDay { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
    vector<string> month {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    int wDay, mon, sec, min, hour, mday, year;
    cout << "Введите день недели(0 - Воскресенье, 1 - Понедельник, ..., 6 - Суббота): ";
        cin >> wDay;
        if (0>=wDay || wDay <= 6) {
            cout << "Введите месяц(0 - Январь, 1 - Февраль, ..., 11 - Декабрь): ";
            cin >> mon;
            if (0>=mon || mon <= 11) {
                cout << "Введите день(от 1 до 31): ";
                cin >> mday;
                if(0>mday || mday <= 31) {
                    cout << "Введите время(Часы(от 0 до 23), Минуты(от 0 до 59), Секунды(от 0 до 59)):";
                    cin >> hour >> min >> sec;
                    if(0>= hour || hour <= 23 || 0>=min || min <=59 || 0>=sec || sec <=59) {
                        cout << "Введите год: ";
                        cin >> year;
                        cout << weekDay[wDay] << " " << month[mon] << " " << mday << " " << hour << ":" << min << ":" << sec << " " << year << endl;
                }
            }
        }
    }
    return 0;
}