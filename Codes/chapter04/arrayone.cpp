// arrayone.cpp -- small arrays of integers
#include <iostream>
#include <iterator>

int main()
{
    using namespace std;

    int yams[3];  // Creates array with three elements.
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};  // Creates array with three elements initialized to 20, 30, 5.
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    cout << "Size of one element content = " << yams[0] << "\n";

    float hotelTips[5] = {5.0, 2.5};
    long totals[500] = {1};
    short things[] = {1, 5, 3, 8};
    double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4};  // C++11 style initialization.
    unsigned int counts[10]{};
    float balances[100]{};

    char dog[8] = {'b', 'e', 'a', 'g', 'l', 'e', 's', 'w'};
    char cat[8] = {'f', 'e', 'l', 'i', 'n', 'e', 's', '\0'};
    size_t num_elements = sizeof things / sizeof(short);
    num_elements = std::size(things);
    char fish[] = "Bubbles";

    cout << "The number of elements in things is " << num_elements << endl;

    // Keep these arrays in scope to demonstrate declarations used in this sample.
    (void)hotelTips;
    (void)totals;
    (void)earnings;
    (void)counts;
    (void)balances;
    (void)dog;
    (void)cat;
    (void)fish;

    cin.get();
    cin.get();
    return 0;
}