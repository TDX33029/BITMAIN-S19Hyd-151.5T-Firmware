// FUN_01181b8c @ 01181b8c size=160 calls_out=1 calls_in=1
// strings: 

void FUN_01181b8c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar2 + 0xb0);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    puVar4 = (uint *)(iVar2 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = *puVar4 | 1;
    iVar3 = 0;
    do {
      FUN_019e03e8(iVar2 + 8 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x80);
  }
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  FUN_0134c054(*(undefined4 *)(iVar2 + 0x8c),*(undefined4 *)(iVar2 + 0x90),4,8,unaff_r4,unaff_lr);
  if (iVar2 == -1) {
    return;
  }
  piVar5 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

