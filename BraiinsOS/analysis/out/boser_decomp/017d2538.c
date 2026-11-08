// FUN_017d2538 @ 017d2538 size=304 calls_out=6 calls_in=4
// strings: 

void FUN_017d2538(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  FUN_019f613c();
  if (*param_1 == 0) {
    piVar3 = param_1 + 5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    DataMemoryBarrier(0xb);
    FUN_019ea0f0(iVar4);
  }
  FUN_00668d74(param_1 + 6);
  FUN_019f0de4();
  piVar3 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019dac00(param_1[8]);
  }
  param_1 = param_1 + 9;
  iVar4 = *param_1;
  if (iVar4 != 0) {
    puVar2 = (uint *)(iVar4 + 0x18);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
    }
    if ((uVar5 & 2) != 0) {
      *(undefined1 *)(iVar4 + 0x1c) = 0;
    }
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da43c(*param_1);
        return;
      }
      return;
    }
  }
  return;
}

