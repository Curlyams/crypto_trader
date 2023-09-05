#pragma once
#include <vector>
#include "OrderBookEntry.h"
enum class MenuOption {
    Help = 1,
    ExchangeStats,
    PlaceAsk,
    PlaceBid,
    PrintWallet,
    Continue,
    Exit
};

class MerkelMain
{
    public:
        MerkelMain();

        void init();
    
    private:
        void loadOrderBook();    
        // Function to print the menu
        void printMenu();
        // Function to print help information
        void printHelp(); 
        // Function to print exchange statistics
        void printExchangeStats(); 
        // Funcion to place an ask
        void placeAnAsk(); 
        // Function to place a bid
        void placeABid(); 
        // Function to print the wallet
        void printWallet(); 
        // Function to continue
        void printContinue();
        // Function to exit
        void printExit();
        // Function to print an invalid option message
        void printInvalidOption();
        // Function to get user input for the menu option
        int getUserOption(); 
        // Function to process the user's chosen option
        void processUserOption(MenuOption userOption); 
        // Function to ask the user for a valid option
        void askUserForOption();

        std::vector<OrderBookEntry> orders;

};