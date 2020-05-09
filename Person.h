/*
 * Person.h
 *
 *  Created on: 24 Ara 2017
 *      Author: ahmetihsan
 */
//header file yani kısaca arayüz.
#ifndef PERSON_H_
#define PERSON_H_
#include<string.h>
using namespace std;
enum Persontype{
//Persontype türünde olan enum ı Person da tanımlıyoruz...
	User,Admin
};
//class ı header içinde tanımlıyoruz
class Person{
//aşağıda ki metodlara erişebilmek için default olan private yerine public yapıyoruz.
public:
	Person(string,string,int,Persontype);
	Person();
	void setName(string);
	string  getName();
	void setSurname(string);
	string getSurname();
	void setTc(int);
	int getTc();
	void setPersontype(Persontype);
	Persontype getPersontype();
private:
string ad,soyad;
int tcno;
Persontype persontype;
//üst taraftaki person özelliklerini metodlarla değiştirebilmek için private tanımladık..
};




#endif /* PERSON_H_ */
