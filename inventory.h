#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>

class CInventory
{
public:
    void Init( void );
    void Print( void );
    size_t AddItem( const char *pszItem );
    bool BRemoveItem( size_t iIndex );

private:
    std::vector< std::string > m_items;
};


#endif //INVENTORY_H