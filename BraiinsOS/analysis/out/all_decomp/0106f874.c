// FUN_0106f874 @ 0106f874 size=972 calls_out=8 calls_in=2
// strings: 

void FUN_0106f874(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  byte local_35;
  undefined4 *local_34;
  undefined4 *local_30;
  uint *local_2c;
  code *local_28;
  
  iVar9 = *(int *)(param_7 + 0x84);
  pcVar4 = (char *)(iVar9 + 4);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0106f8c8;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0106f8c8:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  iVar8 = *(int *)(iVar9 + 0x10);
  *(undefined4 *)(iVar9 + 0x10) = 0;
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_0106f924;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0106f924:
  if (iVar8 != 0) {
    FUN_0108933c(param_5,param_6,iVar8);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*(int *)(param_7 + 0x80) + 0x38) == '\0') {
    iVar9 = *(int *)(param_7 + 0x84);
    pcVar4 = (char *)(iVar9 + 4);
    if (*pcVar4 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar1) goto LAB_0106fb70;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0106fb70:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    *(undefined4 *)(iVar9 + 8) = 0;
    *(undefined4 *)(iVar9 + 0xc) = 0;
    FUN_01282570(pcVar4);
    if (*pcVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar4);
        if (bVar1) {
          *pcVar4 = '\0';
          goto LAB_0106fbcc;
        }
      } while (*pcVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar4);
    goto LAB_0106fbcc;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(*(int *)(param_7 + 0x80) + 0x38) = 0;
  uVar2 = *(uint *)(*(int *)(param_7 + 0x80) + 0x30);
  DataMemoryBarrier(0xb);
  iVar8 = *param_8;
  uVar6 = param_8[2];
  uVar3 = param_8[3];
  iVar9 = uVar6 - uVar2;
  iVar7 = uVar3 - (uVar2 > uVar6);
  iVar5 = *(int *)(param_7 + 0x84);
  *param_8 = iVar8 + -1;
  param_8[1] = param_8[1] - (uint)(iVar8 == 0);
  if (uVar3 == 0 && (uVar2 <= uVar6) <= uVar3) {
    iVar9 = 0;
    iVar7 = 0;
  }
  param_8[2] = iVar9;
  pcVar4 = (char *)(iVar5 + 4);
  param_8[3] = iVar7;
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0106f9e8;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0106f9e8:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  uVar2 = *(uint *)(iVar5 + 8);
  *(undefined4 *)(iVar5 + 8) = 0;
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_0106fa44;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0106fa44:
  if (uVar2 != 0) {
    local_3c = uVar2 & 0xfffffffc;
    local_35 = *(byte *)(param_3 + 0x14);
    local_40 = uVar2 & 3;
    local_48 = param_1;
    local_44 = param_2;
    if (local_40 != local_35) {
      local_2c = &local_3c;
      local_34 = &local_48;
      local_28 = FUN_0108866c;
      local_30 = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
      FUN_01096ff4(&local_35,&local_40,&DAT_00570255,&local_34,&DAT_018842dc);
    }
    if ((*(int *)(local_3c + 8) != 0) || (*(uint *)(param_3 + 0xc) == local_3c)) {
      FUN_0108984c(param_3);
    }
  }
  iVar9 = *(int *)(param_7 + 0x84);
  pcVar4 = (char *)(iVar9 + 4);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0106fac8;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0106fac8:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  iVar8 = *(int *)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 0xc) = 0;
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_0106fb24;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0106fb24:
  if ((iVar8 != 0) && ((*(int *)(iVar8 + 8) != 0 || (*(int *)(param_4 + 0xc) == iVar8)))) {
    FUN_0108984c(param_4,iVar8);
  }
LAB_0106fbcc:
  FUN_0109d7e0(param_7);
  return;
}

