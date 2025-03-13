#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "iostream"
#include "fstream"
#include "algorithm"
#include "map"
#include "string"
#include "iomanip"
#include "climits"
#include "sstream"


class BitcoinExchange{

public:

    BitcoinExchange();
    BitcoinExchange(const std::string &filename);
    BitcoinExchange(const BitcoinExchange& cp);
    BitcoinExchange& operator=(const BitcoinExchange& cp);
    ~BitcoinExchange();

    void    compareData(const std::string &filename);

private:
    std::map<std::string, double> dateValues;

};


#endif
