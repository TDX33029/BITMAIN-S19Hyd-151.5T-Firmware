// FUN_00ed12f8 @ 00ed12f8 size=704 calls_out=6 calls_in=1
// strings: pool_reconnect_backoff | public_group_maximal_reconnection_interval_s | public_group_stable_connection_duration_s | private_group_maximal_reconnection_interval_s | private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig

int FUN_00ed12f8(char *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 != '\0') {
LAB_00ed1500:
    local_28 = 10;
    iVar2 = FUN_0157c50c(&local_28,0,0);
    return iVar2;
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_00edff4c(piVar3,iVar2,1,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_28,*puVar4,"pool_reconnect_backoff",0x16);
  if ((char)local_28 != '\x04') {
    iVar2 = FUN_0157c4a0(local_28,local_24);
    return iVar2;
  }
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00edff4c(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  sVar1 = *param_2;
  *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
  piVar3[2] = iVar2 + 1;
  if (sVar1 == 0) {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if ((uint)(*piVar3 - iVar2) < 4) {
      FUN_00edff4c(piVar3,iVar2,4,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar2) = 0x6c6c756e;
    piVar3[2] = iVar2 + 4;
    return 0;
  }
  piVar3 = (int *)*puVar4;
  iVar2 = piVar3[2];
  if (*piVar3 == iVar2) {
    FUN_00edff4c(piVar3,iVar2,1,1,1);
    iVar2 = piVar3[2];
  }
  sVar1 = param_2[1];
  *(undefined1 *)(piVar3[1] + iVar2) = 0x7b;
  piVar3[2] = iVar2 + 1;
  local_30 = CONCAT22(local_30._2_2_,0x100);
  local_2c = puVar4;
  iVar2 = FUN_00e64aa8(&local_30,"public_group_maximal_reconnection_interval_s",0x2c,sVar1);
  if (iVar2 == 0) {
    if ((char)local_30 != '\0') goto LAB_00ed1500;
    iVar2 = FUN_00e64aa8(&local_30,"public_group_stable_connection_duration_s",0x29,param_2[2]);
    if (iVar2 == 0) {
      if ((char)local_30 != '\0') goto LAB_00ed1500;
      iVar2 = FUN_00e64aa8(&local_30,"private_group_maximal_reconnection_interval_s",0x2d,param_2[3]
                          );
      if (iVar2 == 0) {
        if ((char)local_30 != '\0') goto LAB_00ed1500;
        iVar2 = FUN_00e64aa8(&local_30,
                             "private_group_stable_connection_duration_sstruct TunerConfigstruct SessionConfigstruct ApiUsageConfigstruct TelemetryConfig"
                             ,0x2a,param_2[4]);
        if (iVar2 == 0) {
          if ((local_30 & 0xff00) == 0) {
            return 0;
          }
          if ((local_30 & 1) == 0) {
            FUN_00f1f6ac(*local_2c,"}",1);
            return 0;
          }
          return 0;
        }
      }
    }
  }
  return iVar2;
}

