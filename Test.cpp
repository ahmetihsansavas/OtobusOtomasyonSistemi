/*
 * Test.cpp
 *
 *  Created on: 29 Ara 2017
 *      Author: ahmetihsan
 */
#include<iostream>
#include<string.h>
#include"Person.h"
#include"Card.h"
#include"admin.h"
#include"user.h"
using namespace std;
//test class ında bizden istenilen test kullanıcıları oluşturuldu.
int main(void){
admin Admin1("hakkı","haklı",1234,Admin);
user User1("selin","saklı",111,User);
User1.cardtype1.setCardtype(Student);
User1.cardtype1.getCardtype();
User1.cardtype1.balance=10000;
User1.cardtype2.setCardtype(Student);
User1.cardtype2.getCardtype();
User1.cardtype2.balance=200;
int baslangıc,tc;
Person p1;
Person person[10]=new Person[];//alınan array hatası..


while(true){
	cout<<"IETT"<<endl;
	cout<<"1. yöentici işlemleri"<<endl;
	cout<<"2. kullanıcı işlemleri"<<endl;
	cin>>baslangıc;
	if(baslangıc==1){
	cout<<"yönetici menüsü......."<<endl;
	cin>>tc;
	if(Admin1.tcno==tc){
cout<<"1. Kullanıcı olustur."<<endl;
cout<<"2. Kullanıcı sil."<<endl;
	}



	}
	}

};





