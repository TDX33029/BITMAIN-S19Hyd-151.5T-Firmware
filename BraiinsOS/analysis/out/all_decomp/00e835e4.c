// FUN_00e835e4 @ 00e835e4 size=372 calls_out=6 calls_in=1
// strings: 

void FUN_00e835e4(int param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar3 = (char *)(param_1 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_00e83740;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00e83740:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == 0) {
    FUN_01282570(pcVar3);
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
    FUN_01280a5c(pcVar3);
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x40) & uVar6;
  *(uint *)(param_1 + 0x18) = uVar6 + 1;
  *(uint *)(param_1 + 0x1c) = iVar7 + (uint)(0xfffffffe < uVar6);
  if (*(uint *)(param_1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0xc),&DAT_0187ab50);
  }
  pcVar4 = (char *)(*(int *)(param_1 + 8) + uVar2 * 0x18);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00e836c8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_00e836c8:
  FUN_0128236c(pcVar4);
  *(uint *)(pcVar4 + 8) = uVar6;
  pcVar4[0x14] = '\x01';
  *(int *)(pcVar4 + 0xc) = iVar7;
  *(int *)(pcVar4 + 0x10) = iVar5;
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_00e83724;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00e83724:
  FUN_0072a978((int *)(param_1 + 8),pcVar3);
  return;
}

