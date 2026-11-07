// FUN_01a15024 @ 01a15024 size=476 calls_out=7 calls_in=3
// strings: 

void FUN_01a15024(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  pcVar4 = (char *)(param_2 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_01a15060;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01a15060:
    FUN_0164fba8(pcVar4);
  }
  FUN_0165098c(pcVar4);
  iVar7 = *(int *)(param_2 + 0x28);
  if (iVar7 == 0) {
    iVar7 = param_3[1];
    iVar9 = param_3[2];
    iVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = iVar7;
    param_1[2] = iVar9;
    param_1[3] = iVar3;
    iVar7 = param_3[5];
    iVar9 = param_3[6];
    iVar3 = param_3[7];
    param_1[4] = param_3[4];
    param_1[5] = iVar7;
    param_1[6] = iVar9;
    param_1[7] = iVar3;
    FUN_01650a90(pcVar4);
    if (*pcVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar4);
        if (bVar1) {
          *pcVar4 = '\0';
          return;
        }
      } while (*pcVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar4);
    return;
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x40) & uVar8;
  *(uint *)(param_2 + 0x18) = uVar8 + 1;
  *(uint *)(param_2 + 0x1c) = iVar9 + (uint)(0xfffffffe < uVar8);
  if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0xc),&DAT_01d2a530);
  }
  pcVar5 = (char *)(*(int *)(param_2 + 8) + uVar2 * 0x38);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a15138;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar5);
LAB_01a15138:
  FUN_0165098c(pcVar5);
  *(uint *)(pcVar5 + 8) = uVar8;
  *(int *)(pcVar5 + 0xc) = iVar9;
  *(int *)(pcVar5 + 0x10) = iVar7;
  if (-0x7ffffffe < *(int *)(pcVar5 + 0x28)) {
    FUN_0134c054(*(int *)(pcVar5 + 0x28),*(undefined4 *)(pcVar5 + 0x2c),4,4);
  }
  iVar9 = param_3[1];
  iVar3 = param_3[2];
  iVar6 = param_3[3];
  *(int *)(pcVar5 + 0x14) = *param_3;
  *(int *)(pcVar5 + 0x18) = iVar9;
  *(int *)(pcVar5 + 0x1c) = iVar3;
  *(int *)(pcVar5 + 0x20) = iVar6;
  iVar9 = param_3[5];
  iVar3 = param_3[6];
  iVar6 = param_3[7];
  *(int *)(pcVar5 + 0x24) = param_3[4];
  *(int *)(pcVar5 + 0x28) = iVar9;
  *(int *)(pcVar5 + 0x2c) = iVar3;
  *(int *)(pcVar5 + 0x30) = iVar6;
  FUN_01650a90(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\0';
        goto LAB_01a151c4;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar5);
LAB_01a151c4:
  FUN_01a14524((int *)(param_2 + 8),pcVar4);
  *param_1 = iVar7;
  param_1[5] = -0x7ffffffe;
  return;
}

