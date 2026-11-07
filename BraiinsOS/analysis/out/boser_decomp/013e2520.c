// FUN_013e2520 @ 013e2520 size=312 calls_out=7 calls_in=1
// strings: 

void FUN_013e2520(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  pcVar3 = (char *)(iVar4 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_013e2554;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_013e2554:
  FUN_0165098c(pcVar3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar2 = FUN_013d5adc(iVar4 + 0x14,(int *)(param_1 + 8));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cf2fd8);
    }
    FUN_013d5a8c(iVar4 + 0xc,iVar2);
    iVar2 = *(int *)(iVar4 + 0x1c);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    if (iVar2 != 0) {
      FUN_01650a90(pcVar3);
      if (*pcVar3 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar3);
          if (bVar1) {
            *pcVar3 = '\0';
            goto LAB_013e25e4;
          }
        } while (*pcVar3 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar3);
LAB_013e25e4:
                    /* WARNING: Could not recover jumptable at 0x013e25f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(uVar5);
      return;
    }
  }
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

