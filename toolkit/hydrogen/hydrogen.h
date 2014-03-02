#pragma once

#include <windows.h>
#include <iostream>
#include <stdio.h>

#include <hydrogen/interfaces.h>

namespace hydrogen {
	extern interfaces *csgo;

	class renderer;
};

class TraceFilter : public ITraceFilter
{
public:
    bool ShouldHitEntity( IHandleEntity* pEntityHandle, int contentsMask )
    {
        return !( pEntityHandle == pSkip );
    }

    virtual TraceType_t GetTraceType() const
    {
        return TRACE_EVERYTHING;
    }

    void* pSkip;
};


#define LocalPlayer \
	( ( C_BasePlayer * ) hydrogen::csgo->entityList->GetClientEntity( hydrogen::csgo->engine->GetLocalPlayer() )->GetBaseEntity() )