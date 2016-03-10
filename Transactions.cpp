/*
 * Transactions.cpp
 *
 *  Created on: Mar 9, 2016
 *      Author: cdelprato0
 */

#include "Transactions.h"

Transactions::Transactions() {

	itemName = " ";
	price = 0.0;
	amount = 0;

}

Transactions::~Transactions() {

}

Date Transactions::GetDate(){
	return date;
}

Member Transactions::GetMemberNumber(){
	return memNum;
}

string Transactions::GetItemName(){
	return itemName;
}

float Transactions::GetPrice(){
	return price;
}

int Transactions::GetAmount(){
	return amount;
}


void Transactions::SetDate(int month, int day, int year){
	Date date;

	date.SetDayMonthAndYear(day, month, year);
}

void Transactions::SetMemberNumber(Member number){
	memNum = number;
}

void Transactions::SetItemName(string name){
	itemName = name;
}

void Transactions::SetPrice(float cost){
	price = cost;

}

void Transactions::SetAmount(int tAmount){
	amount = tAmount;

}
