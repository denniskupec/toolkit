

// Auto reconstructed from vtable block @ 0x006C3FC0
// from "engine.dylib", by VTableRec.idc

namespace RE {
	class CModelInfo;
};

class RE::CModelInfo
{
public:													//  Index Offset
	virtual void *whoCares();
	virtual int CModelInfo::GetModelIndex(char  const*)const;								// 0005  0014
	virtual const char *CModelInfo::GetModelName(model_t  const*)const;								// 0006  0018
	virtual void *CModelInfo::GetVCollide(model_t  const*)const;								// 0007  001C
	virtual void *CModelInfo::GetVCollide(int)const;								// 0008  0020
	virtual void *CModelInfo::GetModelBounds(model_t  const*,Vector &,Vector &)const;								// 0009  0024
	virtual void *CModelInfo::GetModelRenderBounds(model_t  const*,Vector &,Vector &)const;								// 0010  0028
	virtual void *CModelInfo::GetModelFrameCount(model_t  const*)const;								// 0011  002C
	virtual void *CModelInfo::GetModelType(model_t  const*)const;								// 0012  0030
	virtual void *CModelInfo::GetModelExtraData(model_t  const*);								// 0013  0034
	virtual void *CModelInfo::ModelHasMaterialProxy(model_t  const*)const;								// 0014  0038
	virtual void *CModelInfo::IsTranslucent(model_t  const*)const;								// 0015  003C
	virtual void *CModelInfo::IsTranslucentTwoPass(model_t  const*)const;								// 0016  0040
	virtual void *CModelInfo::Unused0(void);								// 0017  0044
	virtual void *CModelInfo::ComputeTranslucencyType(model_t  const*,int,int);								// 0018  0048
	virtual void *CModelInfo::GetModelMaterialCount(model_t  const*)const;								// 0019  004C
	virtual void *CModelInfo::GetModelMaterials(model_t  const*,int,IMaterial **);								// 0020  0050
	virtual void *CModelInfo::IsModelVertexLit(model_t  const*)const;								// 0021  0054
	virtual void *CModelInfo::GetModelKeyValueText(model_t  const*);								// 0022  0058
	virtual void *CModelInfo::GetModelKeyValue(model_t  const*,CUtlBuffer &);								// 0023  005C
	virtual void *CModelInfo::GetModelRadius(model_t  const*);								// 0024  0060
	virtual void *CModelInfo::FindModel(studiohdr_t  const*,void **,char  const*)const;								// 0025  0064
	virtual void *CModelInfo::FindModel(void *)const;								// 0026  0068
	virtual void *CModelInfo::GetVirtualModel(studiohdr_t  const*)const;								// 0027  006C
	virtual void *CModelInfo::GetAnimBlock(studiohdr_t  const*,int,bool)const;								// 0028  0070
	virtual void *CModelInfo::HasAnimBlockBeenPreloaded(studiohdr_t  const*,int)const;								// 0029  0074
	virtual void *___cxa_pure_virtual(void);								// 0030  0078
	virtual void *CModelInfo::GetIlluminationPoint(model_t  const*,IClientRenderable *,Vector  const&,QAngle  const&,Vector*);								// 0031  007C
	virtual void *CModelInfo::GetModelContents(int)const;								// 0032  0080
	virtual void *CModelInfo::GetStudiomodel(model_t  const*);								// 0033  0084
	virtual void *CModelInfo::GetModelSpriteWidth(model_t  const*)const;								// 0034  0088
	virtual void *CModelInfo::GetModelSpriteHeight(model_t  const*)const;								// 0035  008C
	virtual void *CModelInfo::SetLevelScreenFadeRange(float,float);								// 0036  0090
	virtual void *CModelInfo::GetLevelScreenFadeRange(float *,float *)const;								// 0037  0094
	virtual void *CModelInfo::SetViewScreenFadeRange(float,float);								// 0038  0098
	virtual void *CModelInfo::ComputeLevelScreenFade(Vector  const&,float,float)const;								// 0039  009C
	virtual void *CModelInfo::ComputeViewScreenFade(Vector  const&,float,float)const;								// 0040  00A0
	virtual void *CModelInfo::GetAutoplayList(studiohdr_t  const*,unsigned short **)const;								// 0041  00A4
	virtual void *CModelInfo::GetCollideForVirtualTerrain(int);								// 0042  00A8
	virtual void *CModelInfo::IsUsingFBTexture(model_t  const*,int,int,void *)const;								// 0043  00AC
	virtual void *CModelInfo::FindOrLoadModel(char  const*)const;								// 0044  00B0
	virtual void *CModelInfo::GetCacheHandle(model_t  const*)const;								// 0045  00B4
	virtual void *CModelInfo::GetBrushModelPlaneCount(model_t  const*)const;								// 0046  00B8
	virtual void *CModelInfo::GetBrushModelPlane(model_t  const*,int,cplane_t &,Vector *)const;								// 0047  00BC
	virtual void *CModelInfo::GetSurfacepropsForVirtualTerrain(int);								// 0048  00C0
	virtual void *CModelInfo::UsesEnvCubemap(model_t  const*)const;								// 0049  00C4
	virtual void *CModelInfo::UsesStaticLighting(model_t  const*)const;								// 0050  00C8
};

