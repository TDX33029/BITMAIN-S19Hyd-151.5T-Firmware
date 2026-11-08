// FUN_01a14c7c @ 01a14c7c size=428 calls_out=6 calls_in=3
// strings: 

void FUN_01a14c7c(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  pcVar4 = (char *)(param_2 + 0x10);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_01a14e10;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01a14e10:
    FUN_0164fba8(pcVar4);
  }
  FUN_0165098c(pcVar4);
  iVar8 = *(int *)(param_2 + 0x28);
  if (iVar8 == 0) {
    iVar8 = param_3[1];
    iVar10 = param_3[2];
    iVar3 = param_3[3];
    iVar5 = param_3[4];
    *param_1 = *param_3;
    param_1[1] = iVar8;
    param_1[2] = iVar10;
    param_1[3] = iVar3;
    param_1[4] = iVar5;
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
  uVar9 = *(uint *)(param_2 + 0x18);
  iVar10 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x40) & uVar9;
  *(uint *)(param_2 + 0x18) = uVar9 + 1;
  *(uint *)(param_2 + 0x1c) = iVar10 + (uint)(0xfffffffe < uVar9);
  if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0xc),&DAT_01d2a530);
  }
  pcVar7 = (char *)(*(int *)(param_2 + 8) + uVar2 * 0x28);
  if (*pcVar7 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar7);
    if (bVar1) {
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a14d80;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar7);
LAB_01a14d80:
  FUN_0165098c(pcVar7);
  *(uint *)(pcVar7 + 8) = uVar9;
  *(int *)(pcVar7 + 0xc) = iVar10;
  *(int *)(pcVar7 + 0x10) = iVar8;
  iVar10 = param_3[1];
  iVar3 = param_3[2];
  iVar5 = param_3[3];
  iVar6 = param_3[4];
  *(int *)(pcVar7 + 0x14) = *param_3;
  *(int *)(pcVar7 + 0x18) = iVar10;
  *(int *)(pcVar7 + 0x1c) = iVar3;
  *(int *)(pcVar7 + 0x20) = iVar5;
  *(int *)(pcVar7 + 0x24) = iVar6;
  FUN_01650a90(pcVar7);
  if (*pcVar7 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar1) {
        *pcVar7 = '\0';
        goto LAB_01a14de4;
      }
    } while (*pcVar7 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar7);
LAB_01a14de4:
  FUN_01a14524((int *)(param_2 + 8),pcVar4);
  *param_1 = iVar8;
  param_1[4] = 5;
  return;
}

