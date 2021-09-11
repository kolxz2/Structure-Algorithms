/*
 * BookLib.h
 *
 *  Created on: Sep 11, 2021
 *      Author: nik
 */
#include <iostream>
#include <string>
#ifndef BOOKLIB_H_
#define BOOKLIB_H_

class BookLib {
public:
	void Meny();
	void BookSet(std::string name, std::string autor, int year, int page);
	void BookDel();
	void BookInLib();
	bool BookFoundByName(std::string name);
	virtual ~BookLib();
private:
	int  year;
	int  page;
	std::string name;
	std::string autor;
};

#endif /* BOOKLIB_H_ */
