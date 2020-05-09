/*
 * Card.cpp
 *
 *  Created on: 25 Ara 2017
 *      Author: ahmetihsan
 */
//card ın source file ı arayüzde tanımladığımız metodları detaylı bir şekilde dolduruyoruz.
#include<iostream>
#include"Card.h"
using namespace std;
Cardtype Card::getCardtype(){
return card_type;
}
void Card::setCardtype(Cardtype c){
	card_type=c;
}
