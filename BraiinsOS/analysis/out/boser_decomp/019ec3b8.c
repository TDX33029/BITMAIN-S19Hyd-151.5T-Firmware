// FUN_019ec3b8 @ 019ec3b8 size=328 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_019ec3b8(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r6;
  
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  uVar5 = 0;
  DataMemoryBarrier(0xb);
  if (((uVar2 & 0xffff) != 0) || (param_1[1] <= uVar2 >> 0x10)) goto LAB_019ec4e4;
  pcVar4 = (char *)(param_2 + 0x94);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_019ec4f4;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019ec4f4:
    FUN_0164fba8(pcVar4);
  }
  FUN_0165098c(pcVar4);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  uVar5 = 0;
  DataMemoryBarrier(0xb);
  if (((uVar2 & 0xffff) == 0) && (uVar2 >> 0x10 < param_1[1])) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = *param_1 + 0x10001;
    DataMemoryBarrier(0xb);
    if (*(int *)(param_2 + 0xa0) != 0) {
      iVar3 = *(int *)(param_2 + 0xa0) + -1;
      *(int *)(param_2 + 0xa0) = iVar3;
      uVar5 = 1;
      unaff_r6 = *(undefined4 *)(*(int *)(param_2 + 0x9c) + iVar3 * 4);
    }
  }
  FUN_01650a90(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        goto LAB_019ec4e4;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar4);
LAB_019ec4e4:
  return CONCAT44(unaff_r6,uVar5);
}

