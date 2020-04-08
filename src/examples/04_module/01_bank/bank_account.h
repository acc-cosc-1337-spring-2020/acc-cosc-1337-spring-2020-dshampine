//bank_account.h
#include "string"
#include <iostream>

#ifndef BANK_ACCOUNT_H//header guard
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	BankAccount() = default; //default constructor
	explicit BankAccount(int b) : balance{ b } {}
	virtual int get_balance()const = 0; // const makes it so function can't be changed e.g. balance can't be changed before return
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() const { return rate; }
	friend void display_balance(const BankAccount& b); //friend function to access private variables
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b); //allows custome defined cout messages from class
	friend std::istream& operator>>(std::istream& in, BankAccount& b); //allows custom cin defined cin messages from class

protected:
	int balance{ 0 }; //balance can be changed, not a const.

private:
	const int min_balance_to_open{ 25 };
	static double rate; //shared across all classes; can't be assiged in class.
	static double init_rate() { return .025; }
};

#endif

#ifndef INVALID_H
#define INVALID_H

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};

#endif