#include <iostream>
#include <string>
#include "../../include/Circle.h"
#include "../../include/Commodity.h"
#include "../../include/Quest4.h"

using namespace std;

int main() {
    cout << "============== Question 1 ==============" << "\n";
    //Circle c1(20);
    //cout << "Area: " << c1.get_area() << "\n";

    cout << "============== Question 2 ==============" << "\n";
    //Circle circle(5);
    
    //Way 1
    //int area = circle.get_area();
    //cout << "Area = " << area << "\n";
    //double circumference = circle.get_circumference();
    //cout << "Circumference = " << circumference << "\n";

    //Way 2
    //cout << "Area = " << circle.get_area() << "\n";
    //cout << "Circumference = " << circle.get_circumference() << "\n";

    cout << "============== Question 3 ==============" << "\n";

    //const double quantity = 2.5;
    //Commodity commodity("Norvegia", 123, 73.50);

    //cout << "Varenavn: " << commodity.get_name()
    //     << ", varenr: " << commodity.get_id()
    //     << " Pris pr enhet: " << commodity.get_price() 
    //     << "\n";

    //cout << "Kilopris: " << commodity.get_price() << "\n";
    //cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity)
    //    << " uten moms" << "\n";
    //cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity)
    //    << " med moms" << "\n";

    //commodity.set_price(79.60);
    //cout << "Ny kilopris: " << commodity.get_price() << "\n";
    //cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity)
    //    << " uten moms" << "\n";
    //cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity)
    //    << " med moms" << "\n";


    cout << "============== Question 4 ==============" << "\n";

    //each one explained in header file
    Quest4 qt4;
    qt4.read_words();
    qt4.build_sentence();
    qt4.print_lengths();
    qt4.copy_and_modify();
    qt4.print_sentence_start();
    qt4.contains_hallo();
    qt4.find_occurrences_of_er();




   
    return 0;
}