#pragma once
#include <iostream>

using namespace std;

class Time{
    private:
        int hour, minute, second, day, week;
    public:
        Time(){
            hour = minute = second = day = week = 0;
        }
        ~Time(){}

        int ToSecond(){
            return (hour * 3600 + minute * 60 + second);
        }

        void Optimize(){
            int tmp = 0;
            if (second > 59){
                tmp = second - 59;
                second = 59;
            }
            minute += tmp;
            if (minute > 59){
                tmp = minute - 59;
                minute = 59;
            }
            hour += tmp;
            if (hour > 23){
                tmp = hour - 23;
                hour = 23;
            }
            day += tmp / 24;
            if (day > 6){
                tmp = day - 6;
                day = 6;
            } else tmp = 0;
            week += tmp;
        }

        friend istream& operator >> (istream& is, Time &time){
            cout << "Hour: "; cin >> time.hour;
            cout << "Minutes: "; cin >> time.minute;
            cout << "Seconds: "; cin >> time.second;
            time.Optimize();
            return is;
        }

        friend ostream& operator << (ostream& os, Time &time){
            cout << "Imported time: ";
            if (time.week > 0)
                cout << time.week << "w:";
            if (time.day > 0)
                cout << time.day << "d:";
            cout << time.hour << "h:" << time.minute << "m:" << time.second << "s " << endl;
            cout << "Total second: " << time.ToSecond() << "s " << endl;
            return os;
        }

        friend Time operator ++ (Time &time){
            time.second++;
            time.Optimize();
            return time;
        }

        friend Time operator -- (Time &time){
            time.second--;
            return time;
        }

        Time operator + (Time time){
            hour += time.hour;
            minute += time.minute;
            second += time.second;
            Optimize();
            return *this;
        }
};