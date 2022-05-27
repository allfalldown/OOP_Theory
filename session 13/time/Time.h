#pragma once
#include <iostream>
#include <tuple>

using namespace std;

#define hour get<0>(t)
#define minute get<1>(t)
#define second get<2>(t)

class Time{
    private:
        tuple <int, int, int> t;
    public:
        Time(){
            hour = minute = second = 0;
        }
        ~Time(){}

        int ToSecond(){
            return (hour * 3600 + minute * 60 + second);
        }

        void DisplayTime(){
            cout << hour << "h:" << minute << "m:" << second << "s " << endl;
            cout << "Total second: " << ToSecond() << "s " << endl;
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
        }

        friend istream& operator >> (istream& is, Time &time){
            int tmp1, tmp2, tmp3;
            cout << "Hour: "; cin >> tmp1;
            cout << "Minutes: "; cin >> tmp2;
            cout << "Seconds: "; cin >> tmp3;
            time.t = make_tuple(tmp1, tmp2, tmp3);
            time.Optimize();
            return is;
        }

        friend ostream& operator << (ostream& os, Time &time){
            cout << "Imported time: ";
            time.DisplayTime();
            return os;
        }

        Time operator ++ (){ //prefix
            second++;
            Optimize();
            return *this;
        }

        Time operator -- (int){ //postfix
            Time tmp = *this; 
            --second;
            return tmp;
        }

        Time operator + (Time time){
            second = ToSecond() + time.ToSecond();
            minute = second / 60;
            hour = minute / 60;
            return *this;
        }

        Time operator - (Time time){
            int tmp = ToSecond() - time.ToSecond();
            if (tmp > 0)
                hour = minute = second = 0;
            else{   
                second = tmp;
                minute = second / 60;
                hour = minute / 60;
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