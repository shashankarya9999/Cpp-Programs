#include <iostream>
#include "Account_Utility.h"

// displays Account objects in a  vector of Account objects 
void display(const std::vector<Account> &accounts) 
{
    std::cout << "\n------------------ Accounts --------------------" << std::endl;
    
    for(const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) 
{
    std::cout << "\n------------ Depositing to Accounts ------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) 
{
    std::cout << "\n-------------- Withdrawing from Accounts ----------------------" <<std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// helper functions for Savings Account class

// displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) 
{
    std::cout << "\n------------------ Savings Accounts ----------------------" << std::endl;
    
    for(const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) 
{
    std::cout << "\n-------------- Depositing to Savings Accounts ------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) 
{
    std::cout << "\n------------------ Withdrawing from Savings Accounts -------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// helper functions for Checking Account class

// displays Checking Account objects in a vector of Checking Account objects 
void display(const std::vector<Checking_Account> &accounts) 
{
    std::cout << "\n-------------------- Checking Accounts ---------------------------" << std::endl;
    
    for(const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<Checking_Account> &accounts, double amount) 
{
    std::cout << "\n--------------- Depositing to Checking Accounts ---------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// withdraw supplied amount from each Checking Account object in the vector
void withdraw(std::vector<Checking_Account> &accounts, double amount) 
{
    std::cout << "\n--------------- Withdrawing from Checking Accounts -----------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// helper functions for Trust Account class

// displays Trust Account objects in a vector of Trust Account objects 
void display(const std::vector<Trust_Account> &accounts) 
{
    std::cout << "\n------------------- Trust Accounts ----------------------------" << std::endl;
    
    for(const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// deposits supplied amount to each Trust Account object in the vector
void deposit(std::vector<Trust_Account> &accounts, double amount) 
{
    std::cout << "\n--------------- Depositing to Trust Accounts-----------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// withdraw supplied amount from each Trust Account object in the vector
void withdraw(std::vector<Trust_Account> &accounts, double amount) 
{
    std::cout << "\n----------------- Withdrawing from Trust Accounts----------------------" << std::endl;
    
    for(auto &acc:accounts)  
    {
        if(acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}