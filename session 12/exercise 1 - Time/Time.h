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

        Time operator ++ (){ //prefix
            second++;
            Optimize();
            return *this;
        }

        Time operator -- (int){ //prefix
            Time tmp = *this; 
            --tmp.second;
            return tmp;
        }

        Time operator + (Time time){
            second = ToSecond() + time.ToSecond();
            minute = second / 60;
            hour = minute / 60;
            Optimize();
            return *this;
        }

        Time operator - (Time time){
            int tmp = ToSecond() - time.ToSecond();
            if (tmp < 0)
                hour = minute = second = 0;
            else{   
                second = tmp;
                minute = second / 60;
                hour = minute / 60;
                Optimize();
            } 
            return *this;
        }


        bool operator > (Time time){
            if (ToSecond() > time.ToSecond())
                return true;
            return false;
        }

        bool operator < (Time time){
            if (ToSecond() < time.ToSecond())
                return true;
            return false;
        }

        bool operator == (Time time){
            if (ToSecond() == time.ToSecond())
                return true;
            return false;
        }
};