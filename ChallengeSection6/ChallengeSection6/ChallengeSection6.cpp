// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

int main()
{
    //Variables
    const double small_room_cost  { 25.00 };
    const double large_room_cost  { 35.00 };
    const double tax_rate         { 0.06 };
    const int    valid_days       { 30 };
    unsigned int small_room_input { 0 };
    unsigned int large_room_input { 0 };
    //exec
    std::cout << "Welcome to Frank's Carpet Cleaning Service" << std::endl;
    std::cout << "\nHow many small room you need to be cleaned?" << std::endl;
    std::cin >> small_room_input;
    std::cout << "How many large room you need to be cleaned?" << std::endl;
    std::cin >> large_room_input;
    std::cout << "\n=============================" << std::endl;
    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_room_input << std::endl;
    std::cout << "Number of large rooms: " << large_room_input << std::endl;
    std::cout << "Price per small room: $" << small_room_cost << std::endl;
    std::cout << "Price per large room: $" << large_room_cost << std::endl;
    
    std::cout 
        << "Cost : $" 
        <<  (small_room_input * small_room_cost) + 
            (large_room_input * large_room_cost) 
        << std::endl;
    
    const double cost_total_rooms{ (small_room_input * small_room_cost) + (large_room_input * large_room_cost) };
    const double cost_total_rooms_tax{ (cost_total_rooms * tax_rate) }; //Calculate the tax of 6%
    const double total_cost_estimate{ cost_total_rooms + cost_total_rooms_tax };
    
    std::cout 
        << "Tax: $" 
        << cost_total_rooms_tax 
        << std::endl;
    
    std::cout << "\n=============================" << std::endl;
    std::cout << "Total Estimate: $" << total_cost_estimate << std::endl;
    std::cout << "This estimate is valid for " << valid_days << " days" << std::endl;

    return 0;
}

