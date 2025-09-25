#ifndef ICOMBATCHARACTER_H
#define ICOMBATCHARACTER_H

class ICombatCharacter
{
public:
    virtual void TakeDamage( int nDamage ) = 0;
    virtual void Heal( int nAmount ) = 0;
    virtual bool BIsAlive( void ) const = 0;

    virtual int GetHealth( void ) const = 0;
    virtual const char *GetName( void ) const = 0;

    virtual ICombatCharacter *GetFightingTarget( void ) = 0;
    virtual bool BIsFighting( void ) const = 0;
};

#endif //ICOMBATCHARACTER_H