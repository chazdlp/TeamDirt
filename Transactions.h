/*
 * Transactions.h
 *
 *  Created on: Mar 9, 2016
 *      Author: cdelprato0
 */

#ifndef TRANSACTIONS_H_
#define TRANSACTIONS_H_

#include "Date.h"
#include "Member.h"

class Transactions {

public:
	Transactions();
	virtual ~Transactions();


	//Getters
	Date GetDate();
	Member GetMemberNumber();
	string GetItemName();
	float GetPrice();
	int GetAmount();

	//Setters
	void SetDate(int month, int day, int year);
	void SetMemberNumber(Member number);
	void SetItemName(string name);
	void SetPrice(float cost);
	void SetAmount(int tAmount);


private:
	Date date;
	Member memNum;
	string itemName;
	float price;
	int amount;
};

#endif /* TRANSACTIONS_H_ */
