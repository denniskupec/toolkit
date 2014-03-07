#pragma once

#include "iclientnetworkable.h"
#include "utllinkedlist.h"
#include "cdll_int.h"
#include "shareddefs.h"
#include "eiface.h"
#include "tier3/tier3.h"
#include "tier2/tier2_logging.h"

// Auto reconstructed from vtable block @ 0x00DDFFD0
// from "client.dylib", by VTableRec.idc

namespace RE {
	class CHLClient;
};

class RE::CHLClient
{
public:													//  Index Offset
	virtual void Func0001(void);								// 0001  0004
	virtual void *CHLClient::Connect(void * (*)(char  const*,int *),CGlobalVarsBase *);								// 0002  0008
	virtual void *CHLClient::Disconnect(void);								// 0003  000C
	virtual void *CHLClient::Init(void * (*)(char  const*,int *),CGlobalVarsBase *);								// 0004  0010
	virtual void *CHLClient::PostInit(void);								// 0005  0014
	virtual void *CHLClient::Shutdown(void);								// 0006  0018
	virtual void *CHLClient::LevelInitPreEntity(char  const*);								// 0007  001C
	virtual void *CHLClient::LevelInitPostEntity(void);								// 0008  0020
	virtual void *CHLClient::LevelShutdown(void);								// 0009  0024
	virtual void *CHLClient::GetAllClasses(void);								// 0010  0028
	virtual void *CHLClient::HudVidInit(void);								// 0011  002C
	virtual void *CHLClient::HudProcessInput(bool);								// 0012  0030
	virtual void CHLClient::HudUpdate(bool);								// 0013  0034
	virtual void *CHLClient::HudReset(void);								// 0014  0038
	virtual void *CHLClient::HudText(char  const*);								// 0015  003C
	virtual void *CHLClient::ShouldDrawDropdownConsole(void);								// 0016  0040
	virtual void *CHLClient::IN_ActivateMouse(void);								// 0017  0044
	virtual void *CHLClient::IN_DeactivateMouse(void);								// 0018  0048
	virtual void *CHLClient::IN_Accumulate(void);								// 0019  004C
	virtual void *CHLClient::IN_ClearStates(void);								// 0020  0050
	virtual void *CHLClient::IN_IsKeyDown(char  const*,bool &);								// 0021  0054
	virtual void *CHLClient::IN_KeyEvent(int,ButtonCode_t,char  const*);								// 0022  0058
	virtual void *CHLClient::CreateMove(int,float,bool);								// 0023  005C
	virtual void *CHLClient::ExtraMouseSample(float,bool);								// 0024  0060
	virtual void *CHLClient::WriteUsercmdDeltaToBuffer(int,bf_write *,int,int,bool);								// 0025  0064
	virtual void *CHLClient::EncodeUserCmdToBuffer(int,bf_write &,int);								// 0026  0068
	virtual void *CHLClient::DecodeUserCmdFromBuffer(int,bf_read &,int);								// 0027  006C
	virtual void *CHLClient::View_Render(vrect_t *);								// 0028  0070
	virtual void *CHLClient::RenderView(CViewSetup  const&,int,int);								// 0029  0074
	virtual void *CHLClient::View_Fade(ScreenFade_t *);								// 0030  0078
	virtual void *CHLClient::SetCrosshairAngle(QAngle  const&);								// 0031  007C
	virtual void *CHLClient::InitSprite(CEngineSprite *,char  const*);								// 0032  0080
	virtual void *CHLClient::ShutdownSprite(CEngineSprite *);								// 0033  0084
	virtual void *CHLClient::GetSpriteSize(void)const;								// 0034  0088
	virtual void *CHLClient::VoiceStatus(int,int,int);								// 0035  008C
	virtual void *CHLClient::PlayerAudible(int);								// 0036  0090
	virtual void *CHLClient::InstallStringTableCallback(char  const*);								// 0037  0094
	virtual void *CHLClient::FrameStageNotify(ClientFrameStage_t);								// 0038  0098
	virtual void *CHLClient::DispatchUserMessage(int,int,void  const*);								// 0039  009C
	virtual void *CHLClient::SaveInit(int);								// 0040  00A0
	virtual void *CHLClient::SaveWriteFields(CSaveRestoreData *,char  const*,void *,datamap_t *,typedescription_t *,int);								// 0041  00A4
	virtual void *CHLClient::SaveReadFields(CSaveRestoreData *,char  const*,void *,datamap_t *,typedescription_t *,int);								// 0042  00A8
	virtual void *CHLClient::PreSave(CSaveRestoreData *);								// 0043  00AC
	virtual void *CHLClient::Save(CSaveRestoreData *);								// 0044  00B0
	virtual void *CHLClient::WriteSaveHeaders(CSaveRestoreData *);								// 0045  00B4
	virtual void *CHLClient::ReadRestoreHeaders(CSaveRestoreData *);								// 0046  00B8
	virtual void *CHLClient::Restore(CSaveRestoreData *,bool);								// 0047  00BC
	virtual void *CHLClient::DispatchOnRestore(void);								// 0048  00C0
	virtual void *CHLClient::GetStandardRecvProxies(void);								// 0049  00C4
	virtual void *CHLClient::WriteSaveGameScreenshot(char  const*);								// 0050  00C8
	virtual void *CHLClient::EmitSentenceCloseCaption(char  const*);								// 0051  00CC
	virtual void *CHLClient::EmitCloseCaption(char  const*,float);								// 0052  00D0
	virtual void *CHLClient::CanRecordDemo(char *,int)const;								// 0053  00D4
	virtual void *CHLClient::OnDemoRecordStart(char  const*);								// 0054  00D8
	virtual void *CHLClient::OnDemoRecordStop(void);								// 0055  00DC
	virtual void *CHLClient::OnDemoPlaybackStart(char  const*);								// 0056  00E0
	virtual void *CHLClient::OnDemoPlaybackRestart(void);								// 0057  00E4
	virtual void *CHLClient::OnDemoPlaybackStop(void);								// 0058  00E8
	virtual void *CHLClient::RecordDemoPolishUserInput(int);								// 0059  00EC
	virtual void *CHLClient::CacheReplayRagdolls(char  const*,int);								// 0060  00F0
	virtual void *CHLClient::ReplayUI_SendMessage(KeyValues *);								// 0061  00F4
	virtual void *CHLClient::GetReplayFactory(void);								// 0062  00F8
	virtual void *CHLClient::ClearLocalPlayerReplayPtr(void);								// 0063  00FC
	virtual void *CHLClient::GetScreenWidth(void);								// 0064  0100
	virtual void *CHLClient::GetScreenHeight(void);								// 0065  0104
	virtual void *CHLClient::WriteSaveGameScreenshotOfSize(char  const*,int,int,bool,bool);								// 0066  0108
	virtual void *CHLClient::WriteReplayScreenshot(void* &);								// 0067  010C
	virtual void *CHLClient::UpdateReplayScreenshotCache(void);								// 0068  0110
	virtual void *CHLClient::GetPlayerView(CViewSetup &);								// 0069  0114
	virtual void *CHLClient::ShouldHideLoadingPlaque(void);								// 0070  0118
	virtual void *CHLClient::InvalidateMdlCache(void);								// 0071  011C
	virtual void *CHLClient::IN_SetSampleTime(float);								// 0072  0120
	virtual void *CHLClient::OnActiveSplitscreenPlayerChanged(int);								// 0073  0124
	virtual void *CHLClient::OnSplitScreenStateChanged(void);								// 0074  0128
	virtual void *CHLClient::CenterStringOff(void);								// 0075  012C
	virtual void *CHLClient::OnScreenSizeChanged(int,int);								// 0076  0130
	virtual void *CHLClient::InstantiateMaterialProxy(char  const*);								// 0077  0134
	virtual void *CHLClient::GetFullscreenClientDLLVPanel(void);								// 0078  0138
	virtual void *CHLClient::MarkEntitiesAsTouching(IClientEntity *,IClientEntity *);								// 0079  013C
	virtual void *CHLClient::OnKeyBindingChanged(ButtonCode_t,char  const*,char  const*);								// 0080  0140
	virtual void *CHLClient::SetBlurFade(float);								// 0081  0144
	virtual void *CHLClient::ResetHudCloseCaption(void);								// 0082  0148
	virtual void *CHLClient::HandleGameUIEvent(InputEvent_t  const&);								// 0083  014C
	virtual void *CHLClient::GetSoundSpatialization(void * &);								// 0084  0150
	virtual void *CHLClient::Hud_SaveStarted(void);								// 0085  0154
	virtual void *CHLClient::ShutdownMovies(void);								// 0086  0158
	virtual void *CHLClient::GetStatus(char *,int);								// 0087  015C
	virtual void *CHLClient::IsChatRaised(void);								// 0088  0160
	virtual void *CHLClient::IsRadioPanelRaised(void);								// 0089  0164
	virtual void *CHLClient::IsBindMenuRaised(void);								// 0090  0168
	virtual void *CHLClient::IsTeamMenuRaised(void);								// 0091  016C
	virtual void *CHLClient::IsLoadingScreenRaised(void);								// 0092  0170
	virtual void *CHLClient::IsBuildWRThreaded(void);								// 0093  0174
	virtual void *CHLClient::QueueBuildWorldListJob(void *);								// 0094  0178
	virtual void *CHLClient::CacheFrustumData(Frustum_t  const&,CUtlVector<Frustum_t,CUtlMemoryAligned<Frustum_t,16>>  const&);								// 0095  017C
	virtual void *CHLClient::GetBuildViewFrustum(void)const;								// 0096  0180
	virtual void *CHLClient::GetBuildViewAeraFrustums(void)const;								// 0097  0184
	virtual void *CHLClient::IsSubscribedMap(char  const*,bool);								// 0098  0188
	virtual void *CHLClient::IsFeaturedMap(char  const*,bool);								// 0099  018C
	virtual void *CHLClient::DownloadCommunityMapFile(unsigned long long);								// 0100  0190
	virtual void *CHLClient::GetUGCFileDownloadProgress(unsigned long long);								// 0101  0194
	virtual void *CHLClient::RecordUIEvent(char  const*);								// 0102  0198
	virtual void *CHLClient::FindInventoryItemWithMaxAttributeValue(char  const*,char  const*);								// 0103  019C
	virtual void *CHLClient::DetermineSubscriptionIdMaskToAdvertise(void);								// 0104  01A0
	virtual void *CHLClient::ValidateSignedEvidenceHeader(char  const*,void  const*,void *);								// 0105  01A4
	virtual void *CHLClient::PrepareSignedEvidenceData(void *,int,void  const*);								// 0106  01A8
	virtual void *CHLClient::ShouldSkipEvidencePlayback(void  const*);								// 0107  01AC
	virtual void *CHLClient::GetScaleformSlotInitController(void);								// 0108  01B0
	virtual void *CHLClient::IsConnectedUserInfoChangeAllowed(IConVar *);								// 0109  01B4
};

