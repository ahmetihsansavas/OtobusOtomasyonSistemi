/*
 * user.cpp
 *
 *  Created on: 25 Ara 2017
 *      Author: ahmetihsan
 */
#include<iostream>
#include "user.h"
#include<string.h>
#include"Card.h"
#include"Person.h"
//metodların detaylı hali ve admin de ki gibi bir constructor
user::user(string a,string b, int c, Persontype pp):Person(a,b,c,pp)
{
	ad=a;
	soyad=b;
	tcno=c;
	persontype=pp;
user::setPersontype(User);
user::getPersontype();
}

//kart okuma işlemlerinin yapıldığı metod
void user::ReadCard(Card c){
if(c.card_type==Student)
c.balance=c.balance-1000;
else if(c.card_type==Normal)
c.balance=c.balance-2000;
else
c.balance=c.balance-0;
};
//kart a para yükleme metodu..
void user::loadCard(Card c,int i){
	c.balance=c.balance+i;
};
//kalan bakiye..
void user::showCardState(Card c){
cout<<"kalan bakiye"<<c.balance<<endl;
}




