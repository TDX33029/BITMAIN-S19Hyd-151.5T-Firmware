// FUN_01a39328 @ 01a39328 size=220 calls_out=2 calls_in=1
// strings: 

void FUN_01a39328(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int unaff_r5;
  uint uVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x20) != 0;
  if (bVar5) {
    unaff_r5 = *(int *)(param_1 + 0x24);
  }
  if (bVar5 && unaff_r5 != 0) {
    puVar2 = (uint *)(unaff_r5 + 0x18);
    do {
      uVar4 = *puVar2;
      bVar5 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar5);
    *puVar2 = uVar4 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar4 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(unaff_r5 + 0x1c) = 2;
    }
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar1;
        bVar5 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar5);
      *piVar1 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38e68(*(undefined4 *)(param_1 + 0x24));
      }
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar1 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar5 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar5);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

