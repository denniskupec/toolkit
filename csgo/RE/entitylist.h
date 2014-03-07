#pragma once

// Auto reconstructed from vtable block @ 0x00DE0210
// from "client.dylib", by VTableRec.idc

#include "icliententitylist.h"
#include "iclientunknown.h"
#include "UtlLinkedList.h"
#include "UtlVector.h"
#include "icliententityinternal.h"
#include "ispatialpartition.h"
#include "cdll_util.h"
#include "entitylist_base.h"
#include "utlmap.h"

namespace RE {
	class CClientEntityList;
};

class RE::CClientEntityList
{
public:													//  Index Offset
	virtual IClientNetworkable*	GetClientNetworkable( int entnum ) = 0;
	virtual IClientNetworkable*	GetClientNetworkableFromHandle( CBaseHandle hEnt ) = 0;
	virtual IClientUnknown*		GetClientUnknownFromHandle( CBaseHandle hEnt ) = 0;
	virtual IClientEntity*		GetClientEntity( int entnum ) = 0;
	virtual IClientEntity*		GetClientEntityFromHandle( CBaseHandle hEnt ) = 0;
	virtual int					NumberOfEntities( bool bIncludeNonNetworkable ) = 0;
	virtual int					GetHighestEntityIndex( void ) = 0;
	virtual void				SetMaxEntities( int maxents ) = 0;
	virtual int					GetMaxEntities( ) = 0;
	virtual EntityCacheInfo_t	*GetClientNetworkableArray() = 0;
};

