/*
 * admin.h
 *
 *  Created on: 24 Ara 2017
 *      Author: ahmetihsan
 */

#ifndef ADMIN_H_
#define ADMIN_H_
#include<string.h>
#include "Person.h"
using namespace std;
//admin in özelliklerini tanımlağımız bir header file yapısı ek olarak
//person la kalıtım yapılmıstır.
class admin :public Person{
//metodlar..
public:
	admin(string,string,int,Persontype);
	void createUser(string,string,int,Persontype,Person personeller[],int);
	void deleteUser(int tc,Person personeller[]);
	void showPersonState(Person p,Person personeller[]);
	void findUser(int tc,Person personeller[]);

};



#endif /* ADMIN_H_ */
