#include <iostream>
#include "MerkelMain.h"
#include "OrderBookEntry.h"
#include <vector>

MerkelMain::MerkelMain()
{

}

void MerkelMain::loadOrderBook()
{
    


    orders.push_back(OrderBookEntry{1000, 0.02,
                         "2020/03/17 17:01",   
                         "BTC/USDT",
                          OrderBookType::bid}   );

    orders.push_back(OrderBookEntry{1050, 0.02,
                         "2020/03/17 17:01",   
                         "BTC/USDT",
                          OrderBookType::bid}   );
    orders.push_back(OrderBookEntry{1050, 0.02,
                         "2020/03/17 17:01",   
                         "BTC/USDT",
                          OrderBookType::bid}   );
}

void MerkelMain::init()
{
    MenuOption userOption = MenuOption::Continue;
    loadOrderBook();

    while (userOption != MenuOption::Exit) {



        printMenu();
        askUserForOption();
        int userInput;
        std::cin >> userInput;

        // Validate user input
        if (userInput < 1 || userInput > 7) {
            printInvalidOption();
            continue;
        }

        // Convert user input to the corresponding enum value
        userOption = static_cast<MenuOption>(userInput);
        processUserOption(userOption);
    }

}

void MerkelMain::askUserForOption()
{
    std::cout << "Enter a number from 1 to 7 to select an option: " << std::endl;
}
// Function to print the menu
void MerkelMain::printMenu() {
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
    std::cout << "7: Exit" << std::endl;
    std::cout << "----------------------\n" << std::endl;
}

// Function to print help information
void MerkelMain::printHelp() {
    std::cout << "Help - your aim is to make money." << std::endl;
    std::cout << "Analyse the market and make bids" << std::endl;
    std::cout << "and offers. \n" << std::endl;
}

// Function to print exchange statistics
void MerkelMain::printExchangeStats() {
    std::cout << "\nOrder Book contains : " << orders.size() << " entries\n" << std::endl;
}

// Function to place an ask
void MerkelMain::placeAnAsk() {
    std::cout << "Place an ask\n" << std::endl;
}

// Function to place a bid
void MerkelMain::placeABid() {
    std::cout << "Place a bid\n" << std::endl;
}

// Function to print the wallet
void MerkelMain::printWallet() {
    std::cout << "Wallet\n" << std::endl;
}

// Function to continue
void MerkelMain::printContinue() {
    std::cout << "Continue\n" << std::endl;
}

// Function to exit
void MerkelMain::printExit() {
    std::cout << "Exit\n" << std::endl;
}

// Function to print an invalid option message
void MerkelMain::printInvalidOption() {
    std::cout << "Invalid option. Please enter a number between 1 and 7.\n" << std::endl;
}

// Function to get user input for the menu option
int MerkelMain::getUserOption() {
    int userOption;
    std::cout << "Type in 1-7" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

// Function to process the user's chosen option
void MerkelMain::processUserOption(MenuOption userOption) {
    switch (userOption) {
        case MenuOption::Help:
            printHelp();
            break;
        case MenuOption::ExchangeStats:
            printExchangeStats();
            break;
        case MenuOption::PlaceAsk:
            placeAnAsk();
            break;
        case MenuOption::PlaceBid:
            placeABid();
            break;
        case MenuOption::PrintWallet:
            printWallet();
            break;
        case MenuOption::Continue:
            printContinue();
            break;
        case MenuOption::Exit:
            printExit();
            break;
        default:
            printInvalidOption();
            break;
    }
}
