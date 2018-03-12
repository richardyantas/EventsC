
#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
//#include "event.h"
#include "date.h"
using namespace std;

//g++ main.cpp -std=c++11 -o main
//g++ main.cpp -std=c++14 -o main
//g++ main.cpp -std=c++17 -o main

int main(){

	//App::CEvent* e = new App::CEvent[10];
	App::CDate* d = new App::CDate("113218");

	cout << d << endl;


	/*
	ifstream datain("input.txt");  
	if( !datain.is_open() ){
		cout << "Error opening the file input.txt" << endl;		
	}

	string title,start,deadline;
	int row_file = 0;
	while( datain >> title >> start >> deadline ){		
		e[row_file].set_attributes(title,start,deadline);	
		row_file++;
	}
	int amout_of_rows;
	for(int row=0;row<amout_of_rows;row++){
		//e[row].print();
	}
	*/


	//cout << sizeof(App::CEvent) << endl;
	//cout << sizeof(e)/sizeof(App::CEvent) << endl;



	
	return 0;
}