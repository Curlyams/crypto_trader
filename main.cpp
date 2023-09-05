#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"





double computeAveragePrice(std::vector<OrderBookEntry> orderBookEntries) {
    double totalPrice = 0;
    for (int i = 0; i < orderBookEntries.size(); i++) {
        totalPrice += orderBookEntries[i].price;
    }
    return totalPrice / orderBookEntries.size();
}

double computeLowPrice(std::vector<OrderBookEntry> orderBookEntries0){
    double lowPrice = orderBookEntries0[0].price;
    for (int i = 0; i < orderBookEntries0.size(); i++) {
        if (orderBookEntries0[i].price < lowPrice) {
            lowPrice = orderBookEntries0[i].price;
        }
    }
    return lowPrice;
}

double computeHighPrice(std::vector<OrderBookEntry> orderBookEntries0){
    double highPrice = orderBookEntries0[0].price;
    for (int i = 0; i < orderBookEntries0.size(); i++) {
        if (orderBookEntries0[i].price > highPrice) {
            highPrice = orderBookEntries0[i].price;
        }
    }
    return highPrice;
}

double computePriceSpread(std::vector<OrderBookEntry> orderBookEntries){
    return computeHighPrice(orderBookEntries) - computeLowPrice(orderBookEntries);
}

int main() {
    

    MerkelMain app{};
    app.init();

    
    // double averagePrice = computeAveragePrice(orders);
    // double lowPrice = computeLowPrice(orders);
    // double highPrice = computeHighPrice(orders);
    // double priceSpread = computePriceSpread(orders);

    // std::cout << "The average price is " << averagePrice << std::endl;
    // std::cout << "The low price is " << lowPrice << std::endl;
    // std::cout << "The high price is " << highPrice << std::endl;
    // std::cout << "The price spread is " << priceSpread << std::endl;

    // return 0;
} 
