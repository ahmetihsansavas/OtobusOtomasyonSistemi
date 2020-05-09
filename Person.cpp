/*
 * Person.cpp
 *
 *  Created on: 24 Ara 2017
 *      Author: ahmetihsan
 */
#include<iostream>
#include<string.h>
#include"Person.h"
using namespace std;
//ve person source file aşağıda iki adet farklı yapıda
//constructor tanımlanmasına rağmen yine çözülemeyen
//array hatası için bu yapı kullanıldı ancak aynı hata yine alınıyor.
Person::Person();

Person::Person(string a,string s,int t,Persontype ps){
ad=a;
soyad=s;
tcno=t;
persontype=ps;
};
//istenilen metodlar...

void Person::setName(string a){
ad=a;
};
string Person::getName(){
return ad;
};

void Person::setSurname(string s){
soyad=s;
};

string Person::getSurname(){
return soyad;
};
void Person::setTc(int t){
tcno=t;
};
int Person::getTc(){
return tcno;
};
void Person::setPersontype(Persontype ps){
persontype=ps;
};
Persontype Person::getPersontype(){
return persontype;
};






