#ifndef BASEENEMY_H
#define BASEENEMY_H

#include "icombatcharacter.h"

class CBaseEnemy : public ICombatCharacter
{
public:
	CBaseEnemy( const char *pszName, int nHealth );
    ~CBaseEnemy( void );

    virtual void TakeDamage( int nDamage );
    virtual void Heal( int nAmount );
    virtual bool BIsAlive( void ) const;

    virtual int GetHealth( void ) const;
    virtual const char *GetName( void ) const;

    virtual ICombatCharacter *GetFightingTarget( void );
    virtual bool BIsFighting( void ) const;

private:
    const char *m_pszName;
    int m_nHealth;

    ICombatCharacter *m_pFightingTarget;
};

#endif //BASEENEMY_H