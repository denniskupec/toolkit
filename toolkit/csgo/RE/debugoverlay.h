#pragma once

// Auto reconstructed from vtable block @ 0x006A1D00
// from "engine.dylib", by VTableRec.idc

#include "cbase.h"
#include "debugoverlay_shared.h"
#include "gamerules.h"
#include "mathlib/mathlib.h"

namespace RE {
	class CIVDebugOverlay;
};

class RE::CIVDebugOverlay
{
public:													//  Index Offset
	virtual void *CIVDebugOverlay::AddEntityTextOverlay(int,int,float,int,int,int,int,char  const*,...);								// 0002  0008
	virtual void *CIVDebugOverlay::AddBoxOverlay(Vector  const&,Vector  const&,Vector  const&,QAngle  const&,int,int,int,int,float);								// 0003  000C
	virtual void *CIVDebugOverlay::AddSphereOverlay(Vector  const&,float,int,int,int,int,int,int,float);								// 0004  0010
	virtual void *CIVDebugOverlay::AddTriangleOverlay(Vector  const&,Vector  const&,Vector  const&,int,int,int,int,bool,float);								// 0005  0014
	virtual void *CIVDebugOverlay::AddLineOverlay(Vector  const&,Vector  const&,int,int,int,bool,float);								// 0006  0018
	virtual void *CIVDebugOverlay::AddTextOverlay(Vector  const&,float,char  const*,...);								// 0007  001C
	virtual void *CIVDebugOverlay::AddTextOverlay(Vector  const&,int,float,char  const*,...);								// 0008  0020
	virtual void *CIVDebugOverlay::AddScreenTextOverlay(float,float,float,int,int,int,int,char  const*);								// 0009  0024
	virtual void *CIVDebugOverlay::AddSweptBoxOverlay(Vector  const&,Vector  const&,Vector  const&,Vector  const&,QAngle  const&,int,int,int,int,float);								// 0010  0028
	virtual void *CIVDebugOverlay::AddGridOverlay(Vector  const&);								// 0011  002C
	virtual void *CIVDebugOverlay::AddCoordFrameOverlay(matrix3x4_t  const&,float,int (*)[3]);								// 0012  0030
	virtual void *CIVDebugOverlay::ScreenPosition(Vector  const&,Vector&);								// 0013  0034
	virtual void *CIVDebugOverlay::ScreenPosition(float,float,Vector &);								// 0014  0038
	virtual void *CIVDebugOverlay::GetFirst(void);								// 0015  003C
	virtual void *CIVDebugOverlay::GetNext(OverlayText_t *);								// 0016  0040
	virtual void *CIVDebugOverlay::ClearDeadOverlays(void);								// 0017  0044
	virtual void *CIVDebugOverlay::ClearAllOverlays(void);								// 0018  0048
	virtual void *CIVDebugOverlay::AddTextOverlayRGB(Vector  const&,int,float,float,float,float,float,char  const*,...);								// 0019  004C
	virtual void *CIVDebugOverlay::AddTextOverlayRGB(Vector  const&,int,float,int,int,int,int,char  const*,...);								// 0020  0050
	virtual void *CIVDebugOverlay::AddLineOverlayAlpha(Vector  const&,Vector  const&,int,int,int,int,bool,float);								// 0021  0054
	virtual void *CIVDebugOverlay::AddBoxOverlay2(Vector  const&,Vector  const&,Vector  const&,QAngle  const&,Color  const&,Color  const&,float);								// 0022  0058
	virtual void *CIVDebugOverlay::PurgeTextOverlays(void);								// 0023  005C
	virtual void *Func0024(void);								// 0024  0060
};

