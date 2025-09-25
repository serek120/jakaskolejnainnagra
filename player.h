#ifndef PLAYER_H
#define PLAYER_H

#include "icombatcharacter.h"
#include "inventory.h"

class CPlayer : public ICombatCharacter
{
public:
    CPlayer( const char *pszName, int nHealth = 100, int nMana = 50 );
    ~CPlayer( void );

    void PrintStats( void ) const;

    virtual void TakeDamage( int nDamage );
    virtual void Heal( int nAmount );
    virtual bool BIsAlive( void ) const;

    virtual int GetHealth( void ) const;
    virtual const char *GetName( void ) const; // pointer bedzie invalid po zdestruktowaniu gracza

    virtual ICombatCharacter *GetFightingTarget( void );
    virtual bool BIsFighting( void ) const;
    void StartFight( ICombatCharacter *pAttacker );

public:
    CInventory m_inventory;

private:
    const char *m_pszName;

    int m_nHealth;
    int m_nMana;

    ICombatCharacter *m_pFightingTarget;
};


#endif //PLAYER_H