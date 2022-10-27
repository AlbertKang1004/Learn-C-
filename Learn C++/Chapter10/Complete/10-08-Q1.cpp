#include <iostream>

struct Advertisement {
	int adsShown { };
	double percentageClicked { };
	double profit { };
};

void printAd(Advertisement &ad) {
//	std::cout << "Ads Shown: " << ad.adsShown << std::endl;
//	std::cout << "Percentage of People Clicked: " << ad.percentageClicked << std::endl;
//	std::cout << "Profit: " << ad.profit << std::endl;
	double total = ad.adsShown * ad.percentageClicked * ad.profit;
	std::cout << "Total Earnings: " << total;
}

int main() {
	Advertisement ad1 { };
	std::cout << "Enter the ads shown: ";
	std::cin >> ad1.adsShown;
	std::cout << "Enter the percentage of people clicked the advertisement: ";
	std::cin >> ad1.percentageClicked;
	std::cout << "Enter the profit: ";
	std::cin >> ad1.profit;

	printAd(ad1);

	return 0;
}
