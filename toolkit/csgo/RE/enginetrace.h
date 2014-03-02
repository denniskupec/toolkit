#pragma once

// Auto reconstructed from vtable block @ 0x006C31C0
// from "engine.dylib", by VTableRec.idc

namespace RE {
	class CEngineTraceClient;
};

class RE::CEngineTraceClient
{
public:													//  Index Offset
	virtual void *CEngineTraceClient::GetPointContents(Vector  const&,int,IHandleEntity **);								// 0002  0008
	virtual void *CEngineTraceClient::GetPointContents_WorldOnly(Vector  const&,int);								// 0003  000C
	virtual void *CEngineTraceClient::GetPointContents_Collideable(ICollideable *,Vector  const&);								// 0004  0010
	virtual void *CEngineTraceClient::ClipRayToEntity(Ray_t  const&,unsigned int,IHandleEntity *,CGameTrace *);								// 0005  0014
	virtual void *CEngineTraceClient::ClipRayToCollideable(Ray_t  const&,unsigned int,ICollideable *,CGameTrace *);								// 0006  0018
	virtual void CEngineTraceClient::TraceRay(Ray_t  const&,unsigned int,ITraceFilter *,CGameTrace *);								// 0007  001C
	virtual void *CEngineTraceClient::SetupLeafAndEntityListRay(Ray_t  const&,ITraceListData *);								// 0008  0020
	virtual void *CEngineTraceClient::SetupLeafAndEntityListBox(Vector  const&,Vector  const&,ITraceListData *);								// 0009  0024
	virtual void *CEngineTraceClient::TraceRayAgainstLeafAndEntityList(Ray_t  const&,ITraceListData *,unsigned int,ITraceFilter *,CGameTrace *);								// 0010  0028
	virtual void *CEngineTraceClient::SweepCollideable(ICollideable *,Vector  const&,Vector  const&,QAngle  const&,unsigned int,ITraceFilter *,CGameTrace *);								// 0011  002C
	virtual void *CEngineTraceClient::EnumerateEntities(Ray_t  const&,bool,IEntityEnumerator *);								// 0012  0030
	virtual void *CEngineTraceClient::EnumerateEntities(Vector  const&,Vector  const&,IEntityEnumerator *);								// 0013  0034
	virtual void *CEngineTraceClient::GetCollideable(IHandleEntity *);								// 0014  0038
	virtual void *CEngineTraceClient::GetStatByIndex(int,bool);								// 0015  003C
	virtual void *CEngineTraceClient::GetBrushesInAABB(Vector  const&,Vector  const&,void *,int,int);								// 0016  0040
	virtual void *CEngineTraceClient::GetCollidableFromDisplacementsInAABB(Vector  const&,Vector  const&);								// 0017  0044
	virtual void *CEngineTraceClient::GetNumDisplacements(void);								// 0018  0048
	virtual void *CEngineTraceClient::GetDisplacementMesh(int,virtualmeshlist_t *);								// 0019  004C
	virtual void *CEngineTraceClient::GetBrushInfo(int,int &,BrushSideInfo_t *,int);								// 0020  0050
	virtual void *CEngineTraceClient::PointOutsideWorld(Vector  const&);								// 0021  0054
	virtual void *CEngineTraceClient::GetLeafContainingPoint(Vector  const&);								// 0022  0058
	virtual void *CEngineTraceClient::AllocTraceListData(void);								// 0023  005C
	virtual void *CEngineTraceClient::FreeTraceListData(ITraceListData *);								// 0024  0060
	virtual void *CEngineTraceClient::GetSetDebugTraceCounter(int,DebugTraceCounterBehavior_t);								// 0025  0064
	virtual void *CEngineTraceClient::GetMeshesFromDisplacementsInAABB(Vector  const&,Vector  const&,virtualmeshlist_t *,int);								// 0026  0068
	virtual void *CEngineTraceClient::GetBrushesInCollideable(ICollideable *,void *);								// 0027  006C
	virtual void *CEngineTraceClient::HandleEntityToCollideable(IHandleEntity *);								// 0028  0070
	virtual void *CEngineTraceClient::GetWorldCollideable(void);								// 0029  0074
	virtual void *CEngineTraceClient::GetDebugName(IHandleEntity *);								// 0030  0078
	virtual void *CEngineTraceClient::SetTraceEntity(ICollideable *,CGameTrace *);								// 0031  007C
	virtual void *CEngineTraceClient::SpatialPartitionMask(void)const;								// 0032  0080
	virtual void *CEngineTraceClient::SpatialPartitionTriggerMask(void)const;								// 0033  0084
};

