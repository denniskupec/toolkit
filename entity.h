#pragma once

#include "toolkit.h"
#include <hydrogen/interfaces.h>
#include <hydrogen/sdk.h>

#define makeptr( x, x2, x3 ) *( x * )( ( DWORD ) x2 + x3 )

#undef _SOURCE_SDK_ENABLED

#ifdef _SOURCE_SDK_ENABLED
class toolkit::entity { // old oop entity helper class i wrote for GO
public:
	extern
	/*bool isVisible( Vector position ) {
		Ray_t   ray;
		trace_t tr;
 
		ray.Init( ins::entity( csgo->engine->GetLocalPlayer() ).getEyePosition(), position );
 
		csgo->trace->TraceRay( ray, 0x4600400B, NULL, &tr );
 
		return( tr.m_pEnt == this->base || tr.fraction == 1.0f );
	}*/

	bool isPlayer() {
		return( base->IsPlayer() );
	}

	std::string getName() {
		vgui::Panel;

		player_info_t tmpInfo;

		I::engineClient->GetPlayerInfo( this->index, &tmpInfo );

		return( std::string( tmpInfo.name ) );
	}

	C_BaseEntity *getActiveWeapon() {
		EHANDLE baseHandle = makeptr( EHANDLE, this->base, 0x1278 );
		IClientEntity *clientWeapon = I::entityList->GetClientEntityFromHandle( baseHandle );

		if( clientWeapon ) {
			C_BaseEntity *weapon = clientWeapon->GetBaseEntity();

			return( weapon );
		}

		return( NULL );
	}

	bool hasWeapon( const char *name ) {
		IClientEntity *cl = I::entityList->GetClientEntity( index );

		if( !cl ) {
			return( false );
		}

		C_BasePlayer *pTarget = reinterpret_cast< C_BasePlayer * >( cl->GetBaseEntity() );

		player_info_s info;

		if( !pTarget || !I::engineClient->GetPlayerInfo( index, &info ) ) {
			return( false );
		}

		std::string strname = std::string( name );

		EHANDLE baseHandle = makeptr( EHANDLE, pTarget, 0x1278 );
		IClientEntity *clientWeapon = I::entityList->GetClientEntityFromHandle( baseHandle );

		if( clientWeapon ) {
			C_BaseEntity *weapon = clientWeapon->GetBaseEntity();

			return( true );
		}

		return( false );
	}

	std::string getParsedWeapon() {
		C_BaseEntity *wep = this->getActiveWeapon();

		if( wep ) {
			return( toolkit::parseWeapon( I::modelInfo->GetModelName( wep->GetModel() ) ) );
		}

		return( "" );
	}

	Vector getOrigin() {
		Vector origin = makeptr( Vector, this->base, 0x134 );

		return( origin );
	}

	Vector getEyePosition() {
		Vector origin = makeptr( Vector, this->base, 0x134 );
		Vector offset = makeptr( Vector, this->base, 0x104 );

		return( origin + offset );
	}

	int getTeam() {
		return( makeptr( int, this->base, 0xF0 ) );
	}

	int getHealth() {
		return( makeptr( int, this->base, 0xFC ) );
	}

	entity( IClientEntity *e ) {
		if( !e ) {
			return;
		}

		client = e;
		base   = client->GetBaseEntity();
		index  = base->index;
	}

	entity( C_BasePlayer *e ) {
		if( !e ) {
			return;
		}

		base   = e;
		index  = base->index;
		client = I::entityList->GetClientEntity( index );
	}

	entity( C_BaseEntity *e ) {
		entity( ( C_BasePlayer * ) e );
	}

	entity( int e ) {
		IClientEntity *ent = I::entityList->GetClientEntity( e );

		if( !ent ) {
			return;
		}

		client = ent;
		base   = client->GetBaseEntity();
		index  = base->index;
	}

	bool operator != ( C_BaseEntity *e ) {
		return( base != e );
	}

	bool operator != ( C_BasePlayer *e ) {
		return( ( C_BaseEntity * ) base != e );
	}

	bool operator != ( IClientEntity *e ) {
		return( client != e );
	}

	bool operator != ( int e ) {
		return( ( index != e && base->index != e ) );
	}

	void operator = ( IClientEntity *e ) {
		client = e;
		base   = client->GetBaseEntity();
		index  = base->index;
	}

	IClientEntity *client;
	C_BaseEntity *base;
	int index;
};
#endif