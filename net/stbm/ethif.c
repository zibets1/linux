#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/time.h>
#include <linux/std_types.h>

#include <net/eth.h>
#include <net/ethif.h>

//EthIfGeneral
bool	EthIfDevErrorDetect;
bool	EthIfEnableRxInterrupt;
bool	EthIfEnableTxInterrupt;
bool	EthIfGetBaudRate;
bool	EthIfGetCounterState;
bool	EthIfTransceiverWakeupModeApi;
bool	EthIfGlobalTimeSupoort;
uint32_t EthIfMainFunctionPeriod; /* Standard using float to present from 0 to INF */
uint32_t EthIfMainFunctionRxTimeout;
uint8_t	EthIfMaxTrcvsTotal;
uint8_t* EthIfPublicCddHeaderFile;
#define ETHIF_PUBLIC_HEADER_MIN 1
#define ETHIF_PUBLIC_HEADER_MAX 32
uint16_t EthIfRxIndicationIterations;
bool	EthIfStartAutoNegotiation;
uint8_t	EthIfTrcvLinkStateChgMainReload;
bool	EthIfVersionInfoApi;
bool	EthIfVersionInfoApiMacro;
bool	EthIfWakeUpSupport;

//EthIfController
uint8_t	EthIfCtrlIdx;
uint16_t EthIfCtrlMtu;
#define ETHIF_MTU_MIN 64
#define ETHIF_MTU_MAX 9000
uint8_t	EthIfMaxTxBufsTotal;
uint16_t EthIfVlanId;
//extern Unknown EthIfEthCtrlRef /* Symbolic name reference to EthCtrlConfig */
//extern Unknown EthIfEtherTrcvRef /* Symbolic name reference to EthTrcvConfig */

//EthIfFrameOwnerConfig
uint32_t EthIfFrameType;
uint8_t	EthIfOwner;

//EthIfRxIndicationConfig
//name definition about EthIfRxIndicationFunction

//EthIfSwitch
uint8_t	EthIfSwitchIdx;
//extern Unknown EthIfSwitchRef /* Symbolic name reference to EthSwtConfig */

//EthIfTrcvLinkStateChgConfig
//name definition about EthIfTrcvLinkStateChgFunction

//EthFiTxConfirmationConfig
//name definition aobut EthIfTxCOnfirmationFunction

void 		EthIf_Init(const EthIf_ConfigType* CfgPtr) {
	EthIfDevErrorDetect = false;
	EthIfEnableRxInterrupt = false;
	EthIfEnableTxInterrupt = false;
	EthIfGetBaudRate = false;
	EthIfGetCounterState = false;
	EthIfTransceiverWakeupModeApi = false;
	EthIfGlobalTimeSupoort = false;
	EthIfMainFunctionPeriod = 0; /* Standard using float to present from 0 to INF */
	EthIfMainFunctionRxTimeout = 0;
	EthIfMaxTrcvsTotal = 0;
	EthIfPublicCddHeaderFile = NULL;
	EthIfRxIndicationIterations = 0;
	EthIfStartAutoNegotiation = false;
	EthIfTrcvLinkStateChgMainReload = false;
	EthIfVersionInfoApi = false;
	EthIfVersionInfoApiMacro = false;
	EthIfWakeUpSupport = false;


	EthIfCtrlIdx = 0;
	EthIfCtrlMtu = 0;
	EthIfMaxTxBufsTotal = 0;
	EthIfVlanId = 0;

	EthIfFrameType = 0;
	EthIfOwner = 0;

	EthIfSwitchIdx = 0;

}

Std_ReturnType	EthIf_ControllerInit(uint8_t CtrlIdx,
				     uint8_t CfgIdx) {
  return E_OK;
}

Std_ReturnType	EthIf_SetControllerMode(uint8_t CtrlIdx, 
					Eth_ModeType CtrlMode) {
  return E_OK;
}

Std_ReturnType	EthIf_GetControllerMode(uint8_t CtrlIdx, 
					Eth_ModeType* CtrlModePtr) {
  return E_OK;

}

Std_ReturnType	EthIf_TransceiverInit(uint8_t CtrlIdx, 
				      uint8_t CfgIdx) {
  return E_OK;

}

Std_ReturnType	EthIf_SetTransceiverMode(uint8_t CtrlIdx, 
					 EthTrcv_ModeType TrcvMode) {
  return E_OK;

}

Std_ReturnType	EthIf_GetTransceiverMode(uint8_t CtrlIdx, 
					 EthTrcv_ModeType* TrcvModePtr) {
  return E_OK;

}

Std_ReturnType	EthIf_SetTransceiverWakeupMode(uint8_t TrcvIdx,  
					       EthTrcv_WakeupModeType TrcvWakeupMode) {
  return E_OK;

}

Std_ReturnType	EthIf_GetTransceiverWakeupMode(uint8_t TrcvIdx, 
					       EthTrcv_WakeupModeType* TrcvWakeupModePtr) {
  return E_OK;

}

Std_ReturnType	EthIf_CheckWakeup(uint8_t TrcvIdx) {
  return E_OK;

}

void		EthIf_GetPhysAddr(uint8_t CtrlIdx, 
				  uint8_t* PhysAddrPtr) {

}

void		EthIf_SetPhysAddr(uint8_t CtrlIdx, 
				  const uint8_t* PhysAddrPtr) {

}

Std_ReturnType	EthIf_UpdatePhysAddrFilter(uint8_t CtrlIdx, 
					   uint8_t* PhysAddrPtr, 
					   Eth_FilterActionType Action) {
  return E_OK;

}

Std_ReturnType	EthIf_GetPortMacAddr(uint8_t* MacAddrPtr, 
				     uint8_t* SwitchIdxPtr, 
				     uint8_t* PortIdxPtr) {
  return E_OK;
}

//Currently Can't Support EthIf_GetArlTable function
/*
 *extern Std_ReturnType	EthIf_GetArlTable(uint8_t SwitchIdx, 
 *					  EthSwt_MacVlanType** ArlTable);
*/
Std_ReturnType	EthIf_GetBufferLevel(uint8_t SwitchIdx, 
				     uint32_t* SwitchBufferLevelPtr) {
  return E_OK;

}

Std_ReturnType	EthIf_GetDropCount(uint8_t SwitchIdx, 
				   uint32_t** DropCount) {
  return E_OK;

}

Std_ReturnType	EthIf_StoreConfiguration(uint8_t SwitchIdx) {
  return E_OK;

}

Std_ReturnType	EthIf_ResetConfiguration(uint8_t SwitchIdx) {
  return E_OK;

}

Std_ReturnType	EthIf_GetCurrentTime(uint8_t CtrlIdx, 
				     Eth_TimeStampQualType* timeQualPtr, 
				     Eth_TimeStampType* timeStampPtr) {
  return E_OK;

}

void		EthIf_EnableEgressTimeStamp(uint8_t CtrlIdx, 
					    uint8_t BufIdx) {
}

void		EthIf_GetEgressTimeStamp(uint8_t CtrlIdx, 
					 uint8_t BufIdx, 
					 Eth_TimeStampQualType* timeQualPtr, 
					 Eth_TimeStampType* timeStampPtr) {
}

void		EthIf_GetIngressTimeStamp(uint8_t CtrlIdx, 
					  Eth_DataType* DataPtr, 
					  Eth_TimeStampQualType* timeQualPtr, 
					  Eth_TimeStampType* timeStampPtr) {
}

void		EthIf_SetCorrectionTime(uint8_t CtrlIdx, 
					Eth_TimeIntDiffType* timeOffsetPtr, 
					Eth_RateRatioType* rateRatioPtr) {
}

Std_ReturnType	EthIf_SetGlobalTime(uint8_t CtrlIdx, 
				    Eth_TimeStampType* timeStmapPtr) {
  return E_OK;
}

BufReq_ReturnType EthIf_ProvideTxBuffer(uint8_t CtrlIdx, 
					Eth_FrameType FrameType, 
					uint8_t Priority, 
					Eth_BufIdxType* BufIdxPtr, 
					uint8_t** BufPtr, 
					uint16_t* LenBytePtr) {
  return BUFREQ_OK;
}

Std_ReturnType	EthIf_Transmit(uint8_t CtrlIdx, 
			       Eth_BufIdxType BufIdx, 
			       Eth_FrameType FrameType, 
			       bool TxConfirmation, 
			       uint16_t LenByte, 
			       uint8_t* PhysAddrPtr) {
  return E_OK;


}

void 		EthIf_GetVersionInfo(Std_VersionInfoType* VersionInfoPtr) {

}

//callback functions
//move to ethif_cbk.h
void		EthIf_RxIndication(uint8_t CtrlIdx, 
				   Eth_FrameType FrameType, 
				   bool IsBroadcast, 
				   uint8_t* PhysAddrPtr, 
				   Eth_DataType* DataPtr, 
				   uint16_t LenByte) {

}

void		EthIf_TxConfirmation(uint8_t CtrlIdx, 
				     Eth_BufIdxType BufIdx) {

}

void		EthIf_CtrlModeIndication(uint8_t CtrlIdx, 
					 Eth_ModeType CtrlMode) {

}

void		EthIf_TrcvModeIndication(uint8_t CtrlIdx, 
					 EthTrcv_ModeType TrcvMode) {

}

//Scheduled functions
void		EthIf_MainFunctionRx(void) {

}

void		EthIf_MainFunctionTx(void) {

}
