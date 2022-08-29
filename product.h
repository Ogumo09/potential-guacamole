//
//  product.h
//  inventory
//
//  Created by Martin Ogumo on 2022. 05. 08..
//

#ifndef PRODUCT_H
#define PRODUCT_H

class product
{
    private:
    
    char* product_name_;
    double product_price_;
    public:
    int product_id_;
    product(int product_id,const char* product_name,double product_price);
    void get_product_info(void);
    void update_product_info(void);
};

#endif
