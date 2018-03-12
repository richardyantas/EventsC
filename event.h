#pragma once
//#include<iotream>
namespace App{

	#include<string>
	#include<sstream>

	using namespace std;


	class CEvent{
		std::string name;
		CDate start;
		CDate deadline;
	public:
		CEvent(){}
		CEvent(std::string _name,
				     CDate _start,
				  CDate _deadline):name(_name),start(_start),deadline(_deadline){}	
		void set_attributes(std::string _name,CDate _start,CDate _deadline);
		void print();
	};

	void CEvent::set_attributes(std::string _name,CDate _start,CDate _deadline){
		name     = _name;
		start    = _start;
		deadline = _deadline;
	}

	void CEvent::print(){
		std::cout << "{" << name << ",";
		std::cout << start << ",";
		std::cout << deadline << "}" << std::endl;
	}

}




