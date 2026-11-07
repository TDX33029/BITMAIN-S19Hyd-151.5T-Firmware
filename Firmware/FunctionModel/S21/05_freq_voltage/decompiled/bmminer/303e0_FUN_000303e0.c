// FUN_000303e0 @ 000303e0  size=876  callers=1
// program: bmminer


void FUN_000303e0(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_2028;
  undefined4 local_2024;
  char acStack_2020 [8196];
  
  iVar2 = FUN_0007ea04();
  if (iVar2 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2020,0x2000,"%s: input bad json param\n","api_get_miner_info");
      FUN_0004948c(3,acStack_2020,0);
      return;
    }
  }
  else {
    iVar8 = 0;
    uVar3 = FUN_00080268(&DAT_000c90bc);
    FUN_0007ec50(iVar2,"miner_type",uVar3);
    uVar3 = FUN_00080268("zynq7007");
    FUN_0007ec50(iVar2,"ctrlboard_type",uVar3);
    uVar3 = FUN_00080268(&DAT_008c70b4);
    FUN_0007ec50(iVar2,"board_type",uVar3);
    uVar3 = FUN_00080268(&DAT_000c92bc);
    FUN_0007ec50(iVar2,"miner_sn",uVar3);
    uVar3 = FUN_00080268(&DAT_008c7280);
    FUN_0007ec50(iVar2,"power_sn",uVar3);
    uVar3 = FUN_00080268(&DAT_000c8fbc);
    FUN_0007ec50(iVar2,"firmware_version",uVar3);
    uVar3 = FUN_00080268("Release");
    FUN_0007ec50(iVar2,"firmware_type",uVar3);
    uVar3 = FUN_0007f548();
    memset(acStack_2020,0,0x20);
    do {
      iVar4 = FUN_0002a6f0(iVar8);
      if (iVar4 != 0) {
        memset(acStack_2020,0,0x20);
        FUN_0001c678(iVar8,acStack_2020,0x20);
        uVar6 = FUN_00080268(acStack_2020);
        FUN_0007f9e4(uVar3,uVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    FUN_0007ec50(iVar2,"board_sn",uVar3);
    uVar3 = FUN_0007f548();
    iVar8 = 0;
    local_2028 = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar8);
      if (iVar4 != 0) {
        FUN_0001cf90(iVar8,2,&local_2028);
        uVar6 = FUN_00080784(local_2028,0);
        FUN_0007f9e4(uVar3,uVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    FUN_0007ec50(iVar2,&DAT_0009dc28,uVar3);
    uVar3 = FUN_0007f548();
    iVar8 = 0;
    local_2024 = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar8);
      if (iVar4 != 0) {
        iVar4 = FUN_0001c934(iVar8,2,&local_2024);
        if (iVar4 != 0) {
          local_2024 = DAT_008c7040;
        }
        uVar6 = FUN_00080784(local_2024,0);
        FUN_0007f9e4(uVar3,uVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    FUN_0007ec50(iVar2,"freqs",uVar3);
    __s = (char *)FUN_00079080(iVar2,0);
    if (__s != (char *)0x0) {
      sVar5 = strlen(__s);
      memcpy(param_1,__s,sVar5 + 1);
      free(__s);
    }
    if (*(int *)(iVar2 + 4) != -1) {
      piVar7 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar8 + -1;
      if (iVar8 + -1 == 0) {
        FUN_00080c8c(iVar2);
        return;
      }
    }
  }
  return;
}

