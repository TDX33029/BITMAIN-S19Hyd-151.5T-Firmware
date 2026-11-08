// FUN_012caf64 @ 012caf64 size=428 calls_out=7 calls_in=1
// strings: 

void FUN_012caf64(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar3 = (char *)(param_2 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_012cb0f8;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_012cb0f8:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  iVar5 = *(int *)(param_2 + 0x28);
  if (iVar5 == 0) {
    FUN_01bed4e2(param_1,param_3,0x14);
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
  uVar6 = *(uint *)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x40) & uVar6;
  *(uint *)(param_2 + 0x18) = uVar6 + 1;
  *(uint *)(param_2 + 0x1c) = iVar7 + (uint)(0xfffffffe < uVar6);
  if (*(uint *)(param_2 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0xc),&DAT_01d2a530);
  }
  pcVar4 = (char *)(*(int *)(param_2 + 8) + uVar2 * 0x28);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_012cb068;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_012cb068:
  FUN_0165098c(pcVar4);
  *(uint *)(pcVar4 + 8) = uVar6;
  *(int *)(pcVar4 + 0xc) = iVar7;
  *(int *)(pcVar4 + 0x10) = iVar5;
  FUN_01bed4e2(pcVar4 + 0x14,param_3,0x14);
  FUN_01650a90(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_012cb0cc;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar4);
LAB_012cb0cc:
  FUN_01a14524((int *)(param_2 + 8),pcVar3);
  *param_1 = iVar5;
  *(undefined1 *)((int)param_1 + 0x13) = 3;
  return;
}

