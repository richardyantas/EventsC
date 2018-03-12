#pragma once
namespace App{
	#include<iostream>
	class CDate{
		int day;
		int month;
		int year;
		friend std::ostream &operator << (std::ostream &os,const CDate &p);
	public:
		CDate(){}
		CDate(int _day,int _month,int _year):day(_day),month(_month),year(_year){}
		CDate(std::string _date){			
			std::string::size_type sz;
			int __date = std::stoi(_date);   // c++11
			year  =__date%100;
			__date=__date/100;
			month =__date%100;
			__date=__date/100;
			day   =__date;						
		}
		CDate operator- (const CDate &date)const{
			return CDate(day-date.day, month-date.month, year-date.year);
		}		
	};

	std::ostream &operator << (std::ostream &os,const App::CDate &p){
		os << "hello_richar";
		return os;
	}

}

