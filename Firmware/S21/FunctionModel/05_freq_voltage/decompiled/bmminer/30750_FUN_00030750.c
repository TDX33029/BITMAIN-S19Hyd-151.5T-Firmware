// FUN_00030750 @ 00030750  size=724  callers=1
// program: bmminer


void FUN_00030750(void *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  char local_2018 [8196];
  
  iVar3 = FUN_0007ea04();
  if (iVar3 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(local_2018,0x2000,"%s: input bad json param\n","api_get_miner_freq_adjust_info");
      FUN_0004948c(3,local_2018,0);
      return;
    }
  }
  else {
    local_2018[0] = '\0';
    local_2018[1] = '\0';
    local_2018[2] = '\0';
    local_2018[3] = '\0';
    local_2018[4] = '\0';
    local_2018[5] = '\0';
    local_2018[6] = '\0';
    local_2018[7] = '\0';
    local_2018[8] = '\0';
    local_2018[9] = '\0';
    local_2018[10] = '\0';
    local_2018[0xb] = '\0';
    local_2018[0xc] = '\0';
    local_2018[0xd] = '\0';
    local_2018[0xe] = '\0';
    local_2018[0xf] = '\0';
    local_2018[0x10] = '\0';
    local_2018[0x11] = '\0';
    local_2018[0x12] = '\0';
    local_2018[0x13] = '\0';
    if (DAT_000c94e8 == 0) {
      strncpy(local_2018,"normal mode",0x14);
    }
    else if (DAT_000c94e8 == 1) {
      strncpy(local_2018,"sleep mode",0x14);
    }
    else {
      if (DAT_000c94e8 == 2) {
        pcVar7 = "auto mode";
      }
      else {
        pcVar7 = "unknown mode";
      }
      strncpy(local_2018,pcVar7,0x14);
    }
    uVar4 = FUN_00080268(local_2018);
    FUN_0007ec50(iVar3,"work_mode",uVar4);
    uVar4 = FUN_00080784(DAT_008c703c,0);
    FUN_0007ec50(iVar3,"working_freq",uVar4);
    uVar4 = FUN_00080784(DAT_008c706c,DAT_008c706c >> 0x1f);
    FUN_0007ec50(iVar3,"working_vol",uVar4);
    uVar4 = FUN_00080784(DAT_008c7040,0);
    FUN_0007ec50(iVar3,"current_freq",uVar4);
    iVar5 = FUN_00024c74();
    uVar4 = FUN_00080784(iVar5,iVar5 >> 0x1f);
    FUN_0007ec50(iVar3,"current_vol",uVar4);
    uVar4 = FUN_00080784(DAT_008c703c - DAT_008c7040,0);
    FUN_0007ec50(iVar3,"decreased_freq",uVar4);
    iVar5 = FUN_00025680(DAT_008c703c - DAT_008c7040);
    uVar4 = FUN_00080784(iVar5,iVar5 >> 0x1f);
    FUN_0007ec50(iVar3,"decreased_hashrate",uVar4);
    iVar5 = FUN_0002af44();
    uVar4 = FUN_00080784(iVar5,iVar5 >> 0x1f);
    FUN_0007ec50(iVar3,"current_power",uVar4);
    sVar2 = FUN_00018a2c();
    uVar4 = FUN_00080784((int)sVar2,(int)sVar2 >> 0x1f);
    FUN_0007ec50(iVar3,"water_in_temp",uVar4);
    pcVar7 = (char *)FUN_00079080(iVar3,0);
    if (pcVar7 != (char *)0x0) {
      sVar6 = strlen(pcVar7);
      memcpy(param_1,pcVar7,sVar6 + 1);
      free(pcVar7);
    }
    if (*(int *)(iVar3 + 4) != -1) {
      piVar8 = (int *)(iVar3 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        FUN_00080c8c(iVar3);
      }
    }
  }
  return;
}

