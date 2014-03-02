#pragma once

// Auto reconstructed from vtable block @ 0x006B6010
// from "engine.dylib", by VTableRec.idc

#include "cdll_client_int.h"
#include "iclientnetworkable.h"
#include "utllinkedlist.h"
#include "cdll_int.h"
#include "shareddefs.h"
#include "eiface.h"
#include "tier3/tier3.h"
#include "tier2/tier2_logging.h"

namespace RE {
	class CEngineClient;
};

class RE::CEngineClient
{
public:													//  Index Offset
	virtual void *CEngineClient::GetIntersectingSurfaces(model_t  const*,Vector  const&,float,bool,SurfInfo *,int);								// 0002  0008
	virtual void *CEngineClient::GetLightForPoint(Vector  const&,bool);								// 0003  000C
	virtual void *CEngineClient::TraceLineMaterialAndLighting(Vector  const&,Vector  const&,Vector&,Vector&);								// 0004  0010
	virtual void *CEngineClient::ParseFile(char  const*,char *,int);								// 0005  0014
	virtual void *CEngineClient::CopyFile(char  const*,char  const*);								// 0006  0018
	virtual void *CEngineClient::GetScreenSize(int &,int &);								// 0007  001C
	virtual void *CEngineClient::ServerCmd(char  const*,bool);								// 0008  0020
	virtual void *CEngineClient::ClientCmd(char  const*);								// 0009  0024
	virtual void *CEngineClient::GetPlayerInfo(int,player_info_s *);								// 0010  0028
	virtual void *CEngineClient::GetPlayerForUserID(int);								// 0011  002C
	virtual void *CEngineClient::TextMessageGet(char  const*);								// 0012  0030
	virtual void *CEngineClient::Con_IsVisible(void);								// 0013  0034
	virtual int CEngineClient::GetLocalPlayer(void);								// 0014  0038
	virtual void *CEngineClient::LoadModel(char  const*,bool);								// 0015  003C
	virtual void *CEngineClient::GetLastTimeStamp(void);								// 0016  0040
	virtual void *CEngineClient::GetSentence(CAudioSource *);								// 0017  0044
	virtual void *CEngineClient::GetSentenceLength(CAudioSource *);								// 0018  0048
	virtual void *CEngineClient::IsStreaming(CAudioSource *)const;								// 0019  004C
	virtual void *CEngineClient::GetViewAngles(QAngle &);								// 0020  0050
	virtual void *CEngineClient::SetViewAngles(QAngle &);								// 0021  0054
	virtual int CEngineClient::GetMaxClients(void);								// 0022  0058
	virtual void *CEngineClient::Key_LookupBinding(char  const*);								// 0023  005C
	virtual void *CEngineClient::Key_BindingForKey(ButtonCode_t);								// 0024  0060
	virtual void *CEngineClient::Key_SetBinding(ButtonCode_t,char  const*);								// 0025  0064
	virtual void *CEngineClient::StartKeyTrapMode(void);								// 0026  0068
	virtual void *CEngineClient::CheckDoneKeyTrapping(ButtonCode_t &);								// 0027  006C
	virtual bool CEngineClient::IsInGame(void);								// 0028  0070
	virtual bool CEngineClient::IsConnected(void);								// 0029  0074
	virtual void *CEngineClient::IsDrawingLoadingImage(void);								// 0030  0078
	virtual void *CEngineClient::HideLoadingPlaque(void);								// 0031  007C
	virtual void *CEngineClient::Con_NPrintf(int,char  const*,...);								// 0032  0080
	virtual void *CEngineClient::Con_NXPrintf(void  const*,char  const*,...);								// 0033  0084
	virtual void *CEngineClient::IsBoxVisible(Vector  const&,Vector  const&);								// 0034  0088
	virtual void *CEngineClient::IsBoxInViewCluster(Vector  const&,Vector  const&);								// 0035  008C
	virtual void *CEngineClient::CullBox(Vector  const&,Vector  const&);								// 0036  0090
	virtual void *CEngineClient::Sound_ExtraUpdate(void);								// 0037  0094
	virtual void *CEngineClient::GetGameDirectory(void);								// 0038  0098
	virtual void *CEngineClient::WorldToScreenMatrix(void);								// 0039  009C
	virtual void *CEngineClient::WorldToViewMatrix(void);								// 0040  00A0
	virtual void *CEngineClient::GameLumpVersion(int)const;								// 0041  00A4
	virtual void *CEngineClient::GameLumpSize(int)const;								// 0042  00A8
	virtual void *CEngineClient::LoadGameLump(int,void *,int);								// 0043  00AC
	virtual void *CEngineClient::LevelLeafCount(void)const;								// 0044  00B0
	virtual void *CEngineClient::GetBSPTreeQuery(void);								// 0045  00B4
	virtual void *CEngineClient::LinearToGamma(float *,float *);								// 0046  00B8
	virtual void *CEngineClient::LightStyleValue(int);								// 0047  00BC
	virtual void *CEngineClient::ComputeDynamicLighting(Vector  const&,Vector  const*,Vector&);								// 0048  00C0
	virtual void *CEngineClient::GetAmbientLightColor(Vector &);								// 0049  00C4
	virtual void *CEngineClient::GetDXSupportLevel(void);								// 0050  00C8
	virtual void *CEngineClient::SupportsHDR(void);								// 0051  00CC
	virtual void *CEngineClient::Mat_Stub(IMaterialSystem *);								// 0052  00D0
	virtual void *CEngineClient::GetChapterName(char *,int);								// 0053  00D4
	virtual void *CEngineClient::GetLevelName(void);								// 0054  00D8
	virtual void *CEngineClient::GetLevelNameShort(void);								// 0055  00DC
	virtual void *CEngineClient::GetMapGroupName(void);								// 0056  00E0
	virtual void *CEngineClient::GetVoiceTweakAPI(void);								// 0057  00E4
	virtual void *CEngineClient::EngineStats_BeginFrame(void);								// 0058  00E8
	virtual void *CEngineClient::EngineStats_EndFrame(void);								// 0059  00EC
	virtual void *CEngineClient::FireEvents(void);								// 0060  00F0
	virtual void *CEngineClient::GetLeavesArea(unsigned short *,int);								// 0061  00F4
	virtual void *CEngineClient::DoesBoxTouchAreaFrustum(Vector  const&,Vector  const&,int);								// 0062  00F8
	virtual void *CEngineClient::GetFrustumList(Frustum_t **,int);								// 0063  00FC
	virtual void *CEngineClient::ShouldUseAreaFrustum(int);								// 0064  0100
	virtual void *CEngineClient::SetAudioState(AudioState_t  const&);								// 0065  0104
	virtual void *CEngineClient::SentenceGroupPick(int,char *,int);								// 0066  0108
	virtual void *CEngineClient::SentenceGroupPickSequential(int,char *,int,int,int);								// 0067  010C
	virtual void *CEngineClient::SentenceIndexFromName(char  const*);								// 0068  0110
	virtual void *CEngineClient::SentenceNameFromIndex(int);								// 0069  0114
	virtual void *CEngineClient::SentenceGroupIndexFromName(char  const*);								// 0070  0118
	virtual void *CEngineClient::SentenceGroupNameFromIndex(int);								// 0071  011C
	virtual void *CEngineClient::SentenceLength(int);								// 0072  0120
	virtual void *CEngineClient::ComputeLighting(Vector  const&,Vector  const*,bool,Vector&,Vector*);								// 0073  0124
	virtual void *CEngineClient::ActivateOccluder(int,bool);								// 0074  0128
	virtual void *CEngineClient::IsOccluded(int,Vector  const&,Vector  const&);								// 0075  012C
	virtual void *CEngineClient::GetOcclusionViewId(void)const;								// 0076  0130
	virtual void *CEngineClient::SaveAllocMemory(unsigned long,unsigned long);								// 0077  0134
	virtual void *CEngineClient::SaveFreeMemory(void *);								// 0078  0138
	virtual void *CEngineClient::GetNetChannelInfo(void);								// 0079  013C
	virtual void *CEngineClient::DebugDrawPhysCollide(CPhysCollide  const*,IMaterial *,matrix3x4_t  const&,color32_s  const&);								// 0080  0140
	virtual void *CEngineClient::CheckPoint(char  const*);								// 0081  0144
	virtual void *CEngineClient::DrawPortals(void);								// 0082  0148
	virtual void *CEngineClient::IsPlayingDemo(void);								// 0083  014C
	virtual void *CEngineClient::IsRecordingDemo(void);								// 0084  0150
	virtual void *CEngineClient::IsPlayingTimeDemo(void);								// 0085  0154
	virtual void *CEngineClient::GetDemoRecordingTick(void);								// 0086  0158
	virtual void *CEngineClient::GetDemoPlaybackTick(void);								// 0087  015C
	virtual void *CEngineClient::GetDemoPlaybackStartTick(void);								// 0088  0160
	virtual void *CEngineClient::GetDemoPlaybackTimeScale(void);								// 0089  0164
	virtual void *CEngineClient::GetDemoPlaybackTotalTicks(void);								// 0090  0168
	virtual void *CEngineClient::IsPaused(void);								// 0091  016C
	virtual void *CEngineClient::GetTimescale(void)const;								// 0092  0170
	virtual bool CEngineClient::IsTakingScreenshot(void);								// 0093  0174
	virtual void *CEngineClient::IsHLTV(void);								// 0094  0178
	virtual void *CEngineClient::IsLevelMainMenuBackground(void);								// 0095  017C
	virtual void *CEngineClient::GetMainMenuBackgroundName(char *,int);								// 0096  0180
	virtual void *CEngineClient::SetOcclusionParameters(OcclusionParams_t  const&);								// 0097  0184
	virtual void *CEngineClient::GetUILanguage(char *,int);								// 0098  0188
	virtual void *CEngineClient::IsSkyboxVisibleFromPoint(Vector  const&);								// 0099  018C
	virtual void *CEngineClient::GetMapEntitiesString(void);								// 0100  0190
	virtual void *CEngineClient::IsInEditMode(void);								// 0101  0194
	virtual void *CEngineClient::GetScreenAspectRatio(int,int);								// 0102  0198
	virtual void *CEngineClient::REMOVED_SteamRefreshLogin(char  const*,bool);								// 0103  019C
	virtual void *CEngineClient::REMOVED_SteamProcessCall(bool &);								// 0104  01A0
	virtual void *CEngineClient::GetEngineBuildNumber(void);								// 0105  01A4
	virtual void *CEngineClient::GetProductVersionString(void);								// 0106  01A8
	virtual void *CEngineClient::GrabPreColorCorrectedFrame(int,int,int,int);								// 0107  01AC
	virtual void *CEngineClient::IsHammerRunning(void)const;								// 0108  01B0
	virtual void *CEngineClient::ExecuteClientCmd(char  const*);								// 0109  01B4
	virtual void *CEngineClient::MapHasHDRLighting(void);								// 0110  01B8
	virtual void *CEngineClient::MapHasLightMapAlphaData(void);								// 0111  01BC
	virtual void *CEngineClient::GetAppID(void);								// 0112  01C0
	virtual void *CEngineClient::GetLightForPointFast(Vector  const&,bool);								// 0113  01C4
	virtual void *CEngineClient::ClientCmd_Unrestricted(char  const*);								// 0114  01C8
	virtual void *CEngineClient::ClientCmd_Unrestricted(char  const*,int,bool);								// 0115  01CC
	virtual void *CEngineClient::SetRestrictServerCommands(bool);								// 0116  01D0
	virtual void *CEngineClient::SetRestrictClientCommands(bool);								// 0117  01D4
	virtual void *CEngineClient::SetOverlayBindProxy(int,void *);								// 0118  01D8
	virtual void *CEngineClient::CopyFrameBufferToMaterial(char  const*);								// 0119  01DC
	virtual void *CEngineClient::ReadConfiguration(int,bool);								// 0120  01E0
	virtual void *CEngineClient::SetAchievementMgr(IAchievementMgr *);								// 0121  01E4
	virtual void *CEngineClient::GetAchievementMgr(void);								// 0122  01E8
	virtual void *CEngineClient::MapLoadFailed(void);								// 0123  01EC
	virtual void *CEngineClient::SetMapLoadFailed(bool);								// 0124  01F0
	virtual void *CEngineClient::IsLowViolence(void);								// 0125  01F4
	virtual void *CEngineClient::GetMostRecentSaveGame(bool);								// 0126  01F8
	virtual void *CEngineClient::SetMostRecentSaveGame(char  const*);								// 0127  01FC
	virtual void *CEngineClient::StartXboxExitingProcess(void);								// 0128  0200
	virtual void *CEngineClient::IsSaveInProgress(void);								// 0129  0204
	virtual void *CEngineClient::IsAutoSaveDangerousInProgress(void);								// 0130  0208
	virtual void *CEngineClient::OnStorageDeviceAttached(int);								// 0131  020C
	virtual void *CEngineClient::OnStorageDeviceDetached(int);								// 0132  0210
	virtual void *CEngineClient::GetSaveDirName(void);								// 0133  0214
	virtual void *CEngineClient::WriteScreenshot(char  const*);								// 0134  0218
	virtual void *CEngineClient::ResetDemoInterpolation(void);								// 0135  021C
	virtual void *CEngineClient::GetActiveSplitScreenPlayerSlot(void);								// 0136  0220
	virtual void *CEngineClient::SetActiveSplitScreenPlayerSlot(int);								// 0137  0224
	virtual void *CEngineClient::SetLocalPlayerIsResolvable(char  const*,int,bool);								// 0138  0228
	virtual void *CEngineClient::IsLocalPlayerResolvable(void);								// 0139  022C
	virtual void *CEngineClient::GetSplitScreenPlayer(int);								// 0140  0230
	virtual void *CEngineClient::IsSplitScreenActive(void);								// 0141  0234
	virtual void *CEngineClient::IsValidSplitScreenSlot(int);								// 0142  0238
	virtual void *CEngineClient::FirstValidSplitScreenSlot(void);								// 0143  023C
	virtual void *CEngineClient::NextValidSplitScreenSlot(int);								// 0144  0240
	virtual void *CEngineClient::GetSinglePlayerSharedMemorySpace(char  const*,int);								// 0145  0244
	virtual void *CEngineClient::ComputeLightingCube(Vector  const&,bool,Vector*);								// 0146  0248
	virtual void *CEngineClient::RegisterDemoCustomDataCallback(string_t,void (*)(unsigned char *,unsigned long));								// 0147  024C
	virtual void *CEngineClient::RecordDemoCustomData(void (*)(unsigned char *,unsigned long),void  const*,unsigned long);								// 0148  0250
	virtual void *CEngineClient::SetPitchScale(float);								// 0149  0254
	virtual void *CEngineClient::GetPitchScale(void);								// 0150  0258
	virtual void *CEngineClient::LoadFilmmaker(void);								// 0151  025C
	virtual void *CEngineClient::UnloadFilmmaker(void);								// 0152  0260
	virtual void *CEngineClient::SetLeafFlag(int,int);								// 0153  0264
	virtual void *CEngineClient::RecalculateBSPLeafFlags(void);								// 0154  0268
	virtual void *CEngineClient::DSPGetCurrentDASRoomNew(void);								// 0155  026C
	virtual void *CEngineClient::DSPGetCurrentDASRoomChanged(void);								// 0156  0270
	virtual void *CEngineClient::DSPGetCurrentDASRoomSkyAbove(void);								// 0157  0274
	virtual void *CEngineClient::DSPGetCurrentDASRoomSkyPercent(void);								// 0158  0278
	virtual void *CEngineClient::SetMixGroupOfCurrentMixer(char  const*,char  const*,float,int);								// 0159  027C
	virtual void *CEngineClient::GetMixLayerIndex(char  const*);								// 0160  0280
	virtual void *CEngineClient::SetMixLayerLevel(int,float);								// 0161  0284
	virtual void *CEngineClient::GetMixGroupIndex(char  const*);								// 0162  0288
	virtual void *CEngineClient::SetMixLayerTriggerFactor(int,int,float);								// 0163  028C
	virtual void *CEngineClient::SetMixLayerTriggerFactor(char  const*,char  const*,float);								// 0164  0290
	virtual void *CEngineClient::IsCreatingReslist(void);								// 0165  0294
	virtual void *CEngineClient::IsCreatingXboxReslist(void);								// 0166  0298
	virtual void *CEngineClient::SetTimescale(float);								// 0167  029C
	virtual void *CEngineClient::SetGamestatsData(CGamestatsData *);								// 0168  02A0
	virtual void *CEngineClient::GetGamestatsData(void);								// 0169  02A4
	virtual void *CEngineClient::GetMouseDelta(int &,int &,bool);								// 0170  02A8
	virtual void *CEngineClient::Key_LookupBindingEx(char  const*,int,int,int);								// 0171  02AC
	virtual void *CEngineClient::Key_CodeForBinding(char  const*,int,int,int);								// 0172  02B0
	virtual void *CEngineClient::UpdateDAndELights(void);								// 0173  02B4
	virtual void *CEngineClient::GetBugSubmissionCount(void)const;								// 0174  02B8
	virtual void *CEngineClient::ClearBugSubmissionCount(void);								// 0175  02BC
	virtual void *CEngineClient::DoesLevelContainWater(void)const;								// 0176  02C0
	virtual void *CEngineClient::GetServerSimulationFrameTime(void)const;								// 0177  02C4
	virtual void *CEngineClient::SolidMoved(IClientEntity *,ICollideable *,Vector  const*,bool);								// 0178  02C8
	virtual void *CEngineClient::TriggerMoved(IClientEntity *,bool);								// 0179  02CC
	virtual void *CEngineClient::ComputeLeavesConnected(Vector  const&,int,int  const*,bool *);								// 0180  02D0
	virtual void *CEngineClient::IsInCommentaryMode(void);								// 0181  02D4
	virtual void *CEngineClient::SetBlurFade(float);								// 0182  02D8
	virtual void *CEngineClient::IsTransitioningToLoad(void);								// 0183  02DC
	virtual void *CEngineClient::SearchPathsChangedAfterInstall(void);								// 0184  02E0
	virtual void *CEngineClient::ConfigureSystemLevel(int,int);								// 0185  02E4
	virtual void *CEngineClient::SetConnectionPassword(char  const*);								// 0186  02E8
	virtual void *CEngineClient::GetSteamAPIContext(void);								// 0187  02EC
	virtual void *CEngineClient::SubmitStatRecord(char  const*,unsigned int,unsigned int,void  const*);								// 0188  02F0
	virtual void *CEngineClient::ServerCmdKeyValues(KeyValues *);								// 0189  02F4
	virtual void *CEngineClient::SpherePaintSurface(model_t  const*,Vector  const&,unsigned char,float,float);								// 0190  02F8
	virtual void *CEngineClient::HasPaintmap(void);								// 0191  02FC
	virtual void *CEngineClient::EnablePaintmapRender(void);								// 0192  0300
	virtual void *CEngineClient::SphereTracePaintSurface(model_t  const*,Vector  const&,Vector  const&,float,CUtlVector<unsigned char,CUtlMemory<unsigned char,int>> &);								// 0193  0304
	virtual void *CEngineClient::RemoveAllPaint(void);								// 0194  0308
	virtual void *CEngineClient::PaintAllSurfaces(unsigned char);								// 0195  030C
	virtual void *CEngineClient::RemovePaint(model_t  const*);								// 0196  0310
	virtual void *CEngineClient::IsActiveApp(void);								// 0197  0314
	virtual void *CEngineClient::IsClientLocalToActiveServer(void);								// 0198  0318
	virtual void *CEngineClient::TickProgressBar(void);								// 0199  031C
	virtual void *CEngineClient::GetInputContext(EngineInputContextId_t);								// 0200  0320
	virtual void *CEngineClient::GetStartupImage(char *,int);								// 0201  0324
	virtual void *CEngineClient::IsUsingLocalNetworkBackdoor(void);								// 0202  0328
	virtual void *CEngineClient::SaveGame(char  const*,bool,char *,int,char *,int);								// 0203  032C
	virtual void *CEngineClient::GetGenericMemoryStats(void **);								// 0204  0330
	virtual void *CEngineClient::GameHasShutdownAndFlushedMemory(void);								// 0205  0334
	virtual void *CEngineClient::GetLastAcknowledgedCommand(void);								// 0206  0338
	virtual void *CEngineClient::FinishContainerWrites(int);								// 0207  033C
	virtual void *CEngineClient::FinishAsyncSave(void);								// 0208  0340
	virtual void *CEngineClient::GetServerTick(void);								// 0209  0344
	virtual void *CEngineClient::GetModDirectory(void);								// 0210  0348
	virtual void *CEngineClient::AudioLanguageChanged(void);								// 0211  034C
	virtual void *CEngineClient::IsAutoSaveInProgress(void);								// 0212  0350
	virtual void *CEngineClient::StartLoadingScreenForCommand(char  const*);								// 0213  0354
	virtual void *CEngineClient::StartLoadingScreenForKeyValues(KeyValues *);								// 0214  0358
	virtual void *CEngineClient::SOSSetOpvarFloat(char  const*,float);								// 0215  035C
	virtual void *CEngineClient::SOSGetOpvarFloat(char  const*,float &);								// 0216  0360
	virtual void *CEngineClient::IsSubscribedMap(char  const*,bool);								// 0217  0364
	virtual void *CEngineClient::IsFeaturedMap(char  const*,bool);								// 0218  0368
	virtual void *CEngineClient::GetDemoPlaybackParameters(void);								// 0219  036C
	virtual void *CEngineClient::GetClientVersion(void)const;								// 0220  0370
	virtual void *CEngineClient::IsDemoSkipping(void);								// 0221  0374
	virtual void *CEngineClient::SetDemoImportantEventData(KeyValues  const*);								// 0222  0378
	virtual void *CEngineClient::ClearEvents(void);								// 0223  037C
	virtual void *CEngineClient::IsReplay(void);								// 0224  0380
};
