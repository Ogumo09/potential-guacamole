//
//  client.cpp
//  inventory
//
//  Created by Martin Ogumo on 2022. 05. 08..
//

#include <iostream>
#include<cstdlib>
using namespace std;
#include<vector>
#include "product.h"
#include "inventory.h"
int main()
{
    int choice;
    inventory *i = new inventory();
    while(1)
    {
        cout<<"1. Add a product to Inventory"<<endl;
        cout<<"2. Update a product in the inventory"<<endl;
        cout<<"3. Delete a product from inventory"<<endl;
        cout<<"4. List/search a product in inventory"<<endl;
        cout<<"5. Show all products from inventory"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        try{
        switch(choice)
        {
        case 1:  i->add_product_to_inventory();
            break;
        case 2:
            break;
        case 3:  i->delete_product_in_inventory(123);
            break;
        case 4:  i->get_product_info_from_inventory(1234);
            break;
        case 5:  i->list_all_products_in_inventory();
            break;
        case 6:  exit(0);
            break;
        default: throw 10;
            break;
        }
        }
        catch(int ){cout<<"Invalid choice...\n"<<endl;}
    }
    return 0;
}
