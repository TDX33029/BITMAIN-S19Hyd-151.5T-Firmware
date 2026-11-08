// FUN_00fc8c3c @ 00fc8c3c size=528 calls_out=6 calls_in=1
// strings: connection_terminatestruct WifiEnabledRequest with 1 elementstruct WifiConnectionRequest with 3 elementsstruct SetQuickRampingRequestRest with 2 elementsstruct SetRelativeTargetRequestRest with 2 elementsstruct Hours with 1 elementstruct Power with 1 elementstruct Quota with 1 elementstruct Static with 4 elementsstruct Voltage with 1 elementstruct DpsTarget with 1 elementstruct Frequency with 1 elementstruct PauseMode with 1 elementstruct Temperature with 1 elementstruct UpgradeTime with 3 elementsstruct LoginRequest with 2 elementsstruct TeraHashrate with 1 elementstruct DailySchedule with 1 elementstruct DpsPowerTarget with 2 elementsstruct WeeklySchedule with 2 elementsstruct CoolingAutoMode with 7 elementsstruct FixedShareRatio with 1 elementstruct ManualPauseMode with 2 elementsstruct MonthlySchedule with 2 elementsstruct PowerTargetMode with 1 elementstruct CoolingHydroMode with 3 elementsstruct CoolingManualMode with 6 elementsstruct DpsHashrateTarget with 2 elementsstruct PoolConfiguration with 5 elementsstruct HashrateTargetMode with 1 elementstruct SetPasswordRequest with 1 elementstruct AutoUpgradeSchedule with 1 elementstruct CoolingImmersionMode with 3 elementsstruct TunerPerformanceMode with 1 elementstruct ManualPerformanceMode with 3 elementsstruct PoolGroupConfiguration with 4 elementsstruct ApplyContractKeyRequest with 2 elementsstruct HashboardPerformanceSettings with 3 elementsstruct SetNetworkConfigurationRequest with 2 elementsstruct UpdateAutoUpgradeConfigRequest with 2 elements | subscribe | connection_init | start

void FUN_00fc8c3c(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int local_24;
  int *piStack_20;
  int local_1c;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar4) {
LAB_00fc8c90:
    local_24 = 5;
    uVar1 = FUN_012c6b30(param_2,&local_24);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *param_1 = 1;
    return;
  }
LAB_00fc8c68:
  uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
  uVar6 = uVar7 - 9;
  if ((uVar6 < 0x18) && ((1 << (uVar6 & 0xff) & 0x800013U) != 0)) goto code_r0x00fc8c80;
  if (uVar7 != 0x22) {
    uVar1 = FUN_012c7788(param_2,&local_24,&DAT_01c1cba8);
    goto LAB_00fc8e40;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(uint *)(param_2 + 0x14) = uVar4 + 1;
  FUN_01968828(&local_24,param_2 + 0xc,param_2);
  if (local_24 == 2) {
    uVar3 = 1;
    *(int **)(param_1 + 4) = piStack_20;
    goto LAB_00fc8e1c;
  }
  switch(local_1c) {
  case 4:
    if (*piStack_20 == 0x706f7473) {
      uVar3 = 2;
    }
    else if (*piStack_20 == 0x676e6970) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
      if (*piStack_20 != 0x676e6f70) goto switchD_00fc8d0c_caseD_6;
    }
    goto LAB_00fc8e14;
  case 5:
    uVar1 = 5;
    pcVar5 = "start";
    goto LAB_00fc8e04;
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    goto switchD_00fc8d0c_caseD_6;
  case 8:
    iVar2 = thunk_FUN_01bed842(piStack_20,&DAT_0056fb30,8);
    uVar3 = 2;
    break;
  case 9:
    uVar1 = 9;
    pcVar5 = "subscribe";
LAB_00fc8e04:
    iVar2 = thunk_FUN_01bed842(piStack_20,pcVar5,uVar1);
    uVar3 = 1;
    break;
  case 0xf:
    iVar2 = thunk_FUN_01bed842(piStack_20,"connection_init",0xf);
    uVar3 = 0;
    break;
  default:
    if (local_1c == 0x14) {
      iVar2 = thunk_FUN_01bed842(piStack_20,
                                 "connection_terminatestruct WifiEnabledRequest with 1 elementstruct WifiConnectionRequest with 3 elementsstruct SetQuickRampingRequestRest with 2 elementsstruct SetRelativeTargetRequestRest with 2 elementsstruct Hours with 1 elementstruct Power with 1 elementstruct Quota with 1 elementstruct Static with 4 elementsstruct Voltage with 1 elementstruct DpsTarget with 1 elementstruct Frequency with 1 elementstruct PauseMode with 1 elementstruct Temperature with 1 elementstruct UpgradeTime with 3 elementsstruct LoginRequest with 2 elementsstruct TeraHashrate with 1 elementstruct DailySchedule with 1 elementstruct DpsPowerTarget with 2 elementsstruct WeeklySchedule with 2 elementsstruct CoolingAutoMode with 7 elementsstruct FixedShareRatio with 1 elementstruct ManualPauseMode with 2 elementsstruct MonthlySchedule with 2 elementsstruct PowerTargetMode with 1 elementstruct CoolingHydroMode with 3 elementsstruct CoolingManualMode with 6 elementsstruct DpsHashrateTarget with 2 elementsstruct PoolConfiguration with 5 elementsstruct HashrateTargetMode with 1 elementstruct SetPasswordRequest with 1 elementstruct AutoUpgradeSchedule with 1 elementstruct CoolingImmersionMode with 3 elementsstruct TunerPerformanceMode with 1 elementstruct ManualPerformanceMode with 3 elementsstruct PoolGroupConfiguration with 4 elementsstruct ApplyContractKeyRequest with 2 elementsstruct HashboardPerformanceSettings with 3 elementsstruct SetNetworkConfigurationRequest with 2 elementsstruct UpdateAutoUpgradeConfigRequest with 2 elements"
                                 ,0x14);
      uVar3 = 3;
      break;
    }
    goto switchD_00fc8d0c_caseD_6;
  }
  if (iVar2 == 0) {
LAB_00fc8e14:
    param_1[1] = uVar3;
    uVar3 = 0;
  }
  else {
switchD_00fc8d0c_caseD_6:
    uVar1 = FUN_01265080(piStack_20,local_1c,&DAT_01c166b4,8);
LAB_00fc8e40:
    uVar1 = FUN_0127dee8(uVar1,param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar3 = 1;
  }
LAB_00fc8e1c:
  *param_1 = uVar3;
  return;
code_r0x00fc8c80:
  uVar4 = uVar4 + 1;
  *(uint *)(param_2 + 0x14) = uVar4;
  if (*(uint *)(param_2 + 0x10) == uVar4) goto LAB_00fc8c90;
  goto LAB_00fc8c68;
}

