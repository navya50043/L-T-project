#ifndef __atm_H__
#define __atm_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();
#endif  /* #define __atm_H__ */
