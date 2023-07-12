#include <iostream>

class Date {
private:
    int year_;
    int month_;
    int day_;

public:
    Date() {year_ = 2023; month_ = 7; day_ = 12;}

    void SetDate(int year, int month, int day);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);
    
    void ShowDate();
};

void Date::SetDate(int year, int month, int day){
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::AddYear(int inc){
    year_ += inc;
}

void Date::AddMonth(int inc){
    month_ += inc;
    
    if (month_ > 12 ){
        int temp_year = month_ / 12;
        int temp_month = month_ % 12;
        AddYear(temp_year);
        month_ = temp_month;
    }
}

void Date::AddDay(int inc){
    // if (month_ == 2){
    //     day_ 
    //     int max_day = 28;
    // }
}

void Date::ShowDate(){
    std::cout << year_ << std::endl;
    std::cout << month_ << std::endl;
    std::cout << day_ << std::endl;
}



int main() {
    Date date;
    date.ShowDate();
    date.AddMonth(12);
    date.ShowDate();

    return 0;
}



