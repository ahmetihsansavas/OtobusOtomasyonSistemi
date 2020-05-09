/*
 * admin.cpp
 *
 *  Created on: 24 Ara 2017
 *      Author: ahmetihsan
 */
#include<iostream>
#include<string.h>
#include"admin.h"
#include"Person.h"
using namespace std;
//metodların içleri detaylı hali.aşağıda ki ise bir constructor..
admin::admin(string a,string b,int tc,Persontype p):Person(a,b,tc,p){
	ad=a;
	soyad=b;
	tcno=tc;
	persontype=p;
	admin::setPersontype(Admin);
	admin::getPersontype();
}

//kullanıcı olusturma metodu normalde paramatre olarak
//person array almıyordu ancak alınan hatadan dolayı array ı testte
//tanımlamaya karar verdım.
void admin::createUser(string ad,string soyad,int tc,Persontype pp,Person personeller[],int i){
personeller[i].ad=ad;
personeller[i].soyad=soyad;
personeller[i].tcno=tc;
personeller[i].setPersontype(User);
personeller[i].getPersontype();

};
void admin::deleteUser(int tc,Person personeller[]){
	for(int i=0;i<sizeof(personeller);i++){
if(personeller[i].tcno==tc)
personeller[i].tcno='NULL';
	};

}; //teknik olarak kullanıcı silinmiyor

void admin::showPersonState(Person p,Person personeller[]){
cout<<p.ad<<endl;
cout<<p.soyad<<endl;
cout<<p.tcno<<endl;
cout<<p.persontype<<endl;
};
//kullanıcı bulma metodu
//yine yukarda belirttiğim gibi personeller arrayı zorunluluktan parametre olarak verildi
void admin::findUser(int tc,Person personeller[]){
	for(int i=0;i<sizeof(personeller);i++){
if(personeller[i].tcno==tc)
cout<<personeller[i].ad;
	};

};



