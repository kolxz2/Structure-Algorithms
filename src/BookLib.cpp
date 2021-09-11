/*
 * BookLib.cpp
 *
 *  Created on: Sep 11, 2021
 *      Author: nik
 */

#include "BookLib.h"

void BookLib::Meny(){
	std:: cout << "1. Add book in the Library" << std::endl;
	std:: cout << "2. Delete book from the Library" << std::endl;
	std:: cout << "3. Show book in the Library" << std::endl;
	std:: cout << "4. Found book by name in the Library" << std::endl;
}

void BookLib::BookSet(std::string name, std::string autor, int year, int page){
	this->name  = name;
	this->autor = autor;
	this->page  = page;
	this->year  = year;
}

void BookLib::BookDel(){

}

void BookLib::BookInLib(){
	std::cout << "Name book is:" << this->name << std::endl;
	std::cout << "The author of the book is:" << this->autor << std::endl;
	std::cout << "The book has " << this->page << " pages" << std::endl;
	std::cout << "The book is written in :" << this->year << std::endl;

}

bool BookLib::BookFoundByName(std::string name){
	return this->name == name;
}

BookLib::~BookLib() {
	// TODO Auto-generated destructor stub
}

