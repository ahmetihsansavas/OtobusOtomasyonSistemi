/*
 * Card.h
 *
 *  Created on: 26 Ara 2017
 *      Author: ahmetihsan
 */
//klasik header yapısı
#ifndef CARD_H_
#define CARD_H_
//cardtype türünde ve card sınıfından ulaşılan enum
enum Cardtype{
	Normal,Student,Retired
};
class Card{
//bizden istenilen metodlar...
public:
void setCardtype(Cardtype);
Cardtype getCardtype();
private:
int balance;
Cardtype card_type;
};





#endif /* CARD_H_ */
