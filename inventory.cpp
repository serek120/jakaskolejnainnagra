#include "inventory.h"

void CInventory::Init( void )
{
    m_items.push_back( "Sword" );
}

void CInventory::Print( void )
{
    printf( "Inventory:\n" );
    for ( const std::string &strItem : m_items )
    {
        printf( "%s\n", strItem.c_str() );
    }
}

size_t CInventory::AddItem( const char *pszItem )
{
    m_items.push_back( pszItem );
    return m_items.size() - 1; // imo push_back powininen returnowac index itemu w vectorze ale nie mozna miec dobrych rzeczy w tym swiecie
}

bool CInventory::BRemoveItem( size_t iIndex )
{
    if ( iIndex < 0 || iIndex >= m_items.size() )
    {
        _ASSERT( NULL );
        return false;
    }
    m_items.erase( m_items.begin() + iIndex );
    return true;
}