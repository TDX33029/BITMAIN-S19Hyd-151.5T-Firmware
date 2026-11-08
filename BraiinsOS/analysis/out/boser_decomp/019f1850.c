// FUN_019f1850 @ 019f1850 size=412 calls_out=6 calls_in=9
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_019f1850(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  iVar3 = 0x180;
  if (param_1[0xc] != 0) {
    iVar3 = 0xb8;
  }
  iVar3 = param_1[0xd] + iVar3;
  if (*(undefined1 **)(iVar3 + 0x60) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01d298d8);
  }
  pcVar4 = (char *)(iVar3 + 0x28);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019f18b0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_019f18b0:
  FUN_0165098c(pcVar4);
  puVar5 = param_1 + 6;
  ClearExclusiveLocal();
  if ((param_1[7] & *puVar5) != 0xffffffff) {
    FUN_019e1e8c(iVar3 + 0x38,param_1 + 2);
  }
  ClearExclusiveLocal();
  if (*puVar5 != 0xffffffff || param_1[7] != 0xffffffff) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = 0xffffffff;
    param_1[7] = 0xffffffff;
    puVar5 = param_1 + 10;
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar2 | 2;
    DataMemoryBarrier(0xb);
    if (uVar2 == 0) {
      uVar2 = param_1[8];
      param_1[8] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = 0;
      if (uVar2 != 0) {
        (**(code **)(uVar2 + 0xc))(param_1[9]);
      }
    }
  }
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

