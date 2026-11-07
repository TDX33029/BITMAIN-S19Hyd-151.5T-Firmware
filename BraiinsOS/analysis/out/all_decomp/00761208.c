// FUN_00761208 @ 00761208 size=356 calls_out=4 calls_in=1
// strings: 

void FUN_00761208(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = *param_1;
  if (uVar3 == 7) {
    return;
  }
  iVar5 = 1;
  if (3 < uVar3) {
    iVar5 = uVar3 - 4;
  }
  if (iVar5 == 0) {
    uVar3 = param_1[1];
    DataMemoryBarrier(0xb);
    pcVar6 = (char *)(uVar3 + 0x24);
    *(undefined1 *)(uVar3 + 0x34) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(uVar3 + 0x1c);
      *(undefined4 *)(uVar3 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar3 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(uVar3 + 0x20));
      }
    }
    pcVar6 = (char *)(uVar3 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(uVar3 + 0x28);
      *(undefined4 *)(uVar3 + 0x28) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(uVar3 + 0x30) = 0;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(uVar3 + 0x2c));
      }
    }
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105a70c(param_1[1]);
    }
  }
  else {
    if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0076124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00761250 + *(int *)(&DAT_00761250 + uVar3 * 4)))();
      return;
    }
    uVar3 = param_1[1];
    if (uVar3 != 0) {
      FUN_01036ca0(uVar3);
      thunk_FUN_016d3fb4(uVar3);
      FUN_0075e314(param_1 + 4);
      return;
    }
  }
  FUN_0075e314(param_1 + 4);
  return;
}

