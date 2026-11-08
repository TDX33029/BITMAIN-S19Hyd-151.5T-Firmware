// FUN_012d09b4 @ 012d09b4 size=236 calls_out=3 calls_in=1
// strings: 

void FUN_012d09b4(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  piVar4 = param_1 + 0x2c;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    puVar3 = (uint *)(param_1 + 0x2a);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 1;
    iVar2 = 8;
    do {
      FUN_019e03e8((undefined1 *)((int)param_1 + iVar2));
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_0134c054(param_1[0x23],param_1[0x24],4,8,unaff_r4,unaff_lr);
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar4 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

