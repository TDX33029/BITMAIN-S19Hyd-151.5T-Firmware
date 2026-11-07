// FUN_016a6c8c @ 016a6c8c size=300 calls_out=4 calls_in=1
// strings: 

void FUN_016a6c8c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00660248(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00661660(param_1);
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    }
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),4,4,unaff_r4,unaff_r5
              );
  iVar3 = *(int *)(param_1 + 0x40);
  puVar4 = (undefined4 *)(iVar3 + 4);
  for (iVar5 = *(int *)(param_1 + 0x44); iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_0134aee0(puVar4[-1],*puVar4,4,4,unaff_r4,unaff_r5);
    puVar4 = puVar4 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x3c),iVar3,4,0xc,unaff_r4,unaff_r5);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),4,4);
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      return;
    }
  }
  return;
}

