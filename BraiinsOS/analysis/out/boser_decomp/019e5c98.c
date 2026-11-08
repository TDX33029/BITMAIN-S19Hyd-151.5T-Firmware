// FUN_019e5c98 @ 019e5c98 size=740 calls_out=8 calls_in=1
// strings: assertion failed: handle.shared.owned.is_empty()

uint * FUN_019e5c98(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_2 + 0xa0) = 1;
  uVar1 = *(uint *)(param_2 + 0x94);
  if (uVar1 != 0xffffffff) {
    piVar6 = (int *)(param_2 + 0x90);
    uVar7 = 0;
LAB_019e5cd4:
    do {
      pcVar8 = (char *)(*(int *)(param_2 + 0x80) + (*(uint *)(param_2 + 0x94) & uVar7) * 0xc);
      if (*pcVar8 == '\0') {
        bVar10 = (bool)hasExclusiveAccess(pcVar8);
        if (!bVar10) goto LAB_019e5d08;
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019e5d08:
        FUN_0164fba8(pcVar8);
      }
      FUN_0165098c(pcVar8);
      iVar9 = *(int *)(pcVar8 + 8);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar9 + 8) + 0x1c);
        iVar4 = *(int *)(iVar9 + iVar2);
        *(int *)(pcVar8 + 8) = iVar4;
        if (iVar4 == 0) {
          pcVar8[4] = '\0';
          pcVar8[5] = '\0';
          pcVar8[6] = '\0';
          pcVar8[7] = '\0';
        }
        else {
          *(undefined4 *)(iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c) + 4) = 0;
          iVar2 = *(int *)(*(int *)(iVar9 + 8) + 0x1c);
        }
        *(undefined4 *)(iVar9 + iVar2) = 0;
        *(undefined4 *)(iVar9 + *(int *)(*(int *)(iVar9 + 8) + 0x1c) + 4) = 0;
        do {
          bVar10 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar10);
        *piVar6 = *piVar6 + -1;
      }
      FUN_01650a90(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar10 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar10) {
            *pcVar8 = '\0';
            goto LAB_019e5dc8;
          }
        } while (*pcVar8 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar8);
LAB_019e5dc8:
      if (iVar9 != 0) {
        (**(code **)(*(int *)(iVar9 + 8) + 0x18))(iVar9);
        goto LAB_019e5cd4;
      }
      bVar10 = uVar7 != uVar1;
      uVar7 = uVar7 + 1;
    } while (bVar10);
  }
  uVar1 = param_1[3];
  while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
    uVar5 = param_1[2] + 1;
    uVar3 = *(undefined4 *)(param_1[1] + param_1[2] * 4);
    uVar7 = uVar5 - *param_1;
    if (uVar5 < *param_1) {
      uVar7 = uVar5;
    }
    param_1[2] = uVar7;
    param_1[3] = uVar1;
    *(uint *)(param_2 + 0x28) = uVar1;
    FUN_019d8858(uVar3);
  }
  pcVar8 = (char *)(param_2 + 0xa8);
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*pcVar8 == '\0') {
    bVar10 = (bool)hasExclusiveAccess(pcVar8);
    if (bVar10) {
      *pcVar8 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e5e74;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar8);
LAB_019e5e74:
  FUN_0165098c(pcVar8);
  if (*(char *)(param_2 + 0xb4) == '\0') {
    *(undefined1 *)(param_2 + 0xb4) = 1;
  }
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar10 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar10) {
        *pcVar8 = '\0';
        goto LAB_019e5ecc;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar8);
LAB_019e5ecc:
  while (iVar9 = FUN_019ed788(pcVar8), iVar9 != 0) {
    FUN_019d8858();
  }
  if (*(int *)(param_2 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: handle.shared.owned.is_empty()",0x30,&DAT_01d29214);
  }
  uVar1 = param_1[5];
  do {
    bVar10 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x10));
  } while (!bVar10);
  *(uint *)(param_2 + 0x10) = param_1[4];
  *(uint *)(param_2 + 0x14) = uVar1;
  uVar1 = param_1[7];
  do {
    bVar10 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x18));
  } while (!bVar10);
  *(uint *)(param_2 + 0x18) = param_1[6];
  *(uint *)(param_2 + 0x1c) = uVar1;
  uVar1 = param_1[9];
  do {
    bVar10 = (bool)hasExclusiveAccess((uint *)(param_2 + 0x20));
  } while (!bVar10);
  *(uint *)(param_2 + 0x20) = param_1[8];
  *(uint *)(param_2 + 0x24) = uVar1;
  if (param_1[0x10] != 3) {
    FUN_019e2430(param_1 + 0x10,param_2 + 0x100);
  }
  return param_1;
}

