// FUN_0195ff74 @ 0195ff74 size=472 calls_out=8 calls_in=5
// strings: 

void FUN_0195ff74(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  
  pcVar3 = (char *)(param_2 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0195ffb0;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0195ffb0:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  iVar5 = *(int *)(param_2 + 0x28);
  if (iVar5 == 0) {
    FUN_01bed4e2(param_1,param_3,0x130);
    FUN_01650a90(pcVar3);
    if (*pcVar3 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar3);
        if (bVar1) {
          *pcVar3 = '\0';
          return;
        }
      } while (*pcVar3 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar3);
    return;
  }
  uVar7 = *(uint *)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x40) & uVar7;
  *(uint *)(param_2 + 0x18) = uVar7 + 1;
  *(uint *)(param_2 + 0x1c) = iVar8 + (uint)(0xfffffffe < uVar7);
  if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0xc),&DAT_01d2a530);
  }
  pcVar6 = (char *)(uVar2 * 0x148 + *(int *)(param_2 + 8));
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar1) {
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01960088;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar6);
LAB_01960088:
  FUN_0165098c(pcVar6);
  piVar4 = (int *)(pcVar6 + 8);
  *(uint *)(pcVar6 + 0x138) = uVar7;
  *(int *)(pcVar6 + 0x13c) = iVar8;
  *(int *)(pcVar6 + 0x140) = iVar5;
  if (*piVar4 != 2 || *(int *)(pcVar6 + 0xc) != 0) {
    FUN_019601b8(piVar4);
  }
  FUN_01bed4e2(piVar4,param_3,0x130);
  FUN_01650a90(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar1) {
        *pcVar6 = '\0';
        goto LAB_0196010c;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar6);
LAB_0196010c:
  FUN_01a14524((int *)(param_2 + 8),pcVar3);
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = iVar5;
  return;
}

