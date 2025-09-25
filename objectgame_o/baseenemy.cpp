#include <stdlib.h>
#include <string.h>
#include "baseenemy.h"

CBaseEnemy::CBaseEnemy( const char *pszName, int nHealth )
{
    m_pszName = _strdup( pszName );
    m_nHealth = nHealth;
    m_pFightingTarget = NULL;
}

CBaseEnemy::~CBaseEnemy( void )
{
    free( ( void * )m_pszName );
}

void CBaseEnemy::TakeDamage( int nDamage )
{
    m_nHealth -= nDamage;
    if ( m_nHealth < 0 )
        m_nHealth = 0;
}

void CBaseEnemy::Heal( int nAmount )
{
    m_nHealth += nAmount;
}

bool CBaseEnemy::BIsAlive( void ) const
{
    return m_nHealth > 0;
}

int CBaseEnemy::GetHealth( void ) const
{
    return m_nHealth;
}

const char *CBaseEnemy::GetName( void ) const
{
    return m_pszName;
}

ICombatCharacter *CBaseEnemy::GetFightingTarget( void )
{
    return m_pFightingTarget;
}

bool CBaseEnemy::BIsFighting( void ) const
{
    return m_pFightingTarget != NULL;
}
