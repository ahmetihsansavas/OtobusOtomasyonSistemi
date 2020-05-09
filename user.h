/*
 * user.h
 *
 *  Created on: 25 Ara 2017
 *      Author: ahmetihsan
 */
//yine bir header içinde ki class yapısı user person la kalıtıldı
#ifndef USER_H_
#define USER_H_
#include"Person.h"
#include"Card.h"
class user:public Person{
public:
user(string a,string b,int c,Persontype pp);
void ReadCard(Card c);
void loadCard(Card c,int i);
void showCardState(Card c);

private:
Card cardtype1;
Card cardtype2;
};



#endif /* USER_H_ */
