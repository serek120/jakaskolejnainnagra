#include "player.h"

CPlayer::CPlayer( const char *pszName, int nInitialHealth, int nInitialMana )
{
    m_pszName = _strdup( pszName );
    m_nHealth = nInitialHealth;
    m_nMana = nInitialMana;
    m_pFightingTarget = NULL;
}

CPlayer::~CPlayer( void )
{
    free( ( void * )m_pszName );
}

void CPlayer::PrintStats( void ) const
{
    printf(
        "%s\n"
        "HP: %i\n"
        "Mana: %i\n",
        m_pszName, m_nHealth, m_nMana
    );
}

void CPlayer::TakeDamage( int nDamage )
{
    m_nHealth -= nDamage;
    if ( m_nHealth < 0 )
        m_nHealth = 0;
}

void CPlayer::Heal( int nAmount )
{
    m_nHealth += nAmount;
}

bool CPlayer::BIsAlive( void ) const
{
    return m_nHealth > 0;
}

int CPlayer::GetHealth( void ) const
{
    return m_nHealth;
}

const char *CPlayer::GetName( void ) const
{
    return m_pszName;
}

ICombatCharacter *CPlayer::GetFightingTarget( void )
{
    return m_pFightingTarget;
}

bool CPlayer::BIsFighting( void ) const
{
    return m_pFightingTarget != NULL;
}

void CPlayer::StartFight( ICombatCharacter *pAttacker )
{
    if ( !BIsFighting() )
    {
        m_pFightingTarget = pAttacker;
    }
}

int CPlayer::PlayerSpecialAttack(void) {
    if (m_nMana <= 0) {

    }
}
