// FUN_014a4924 @ 014a4924 size=428 calls_out=5 calls_in=2
// strings: 

void FUN_014a4924(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  piVar2 = *(int **)(param_1 + 0xfc);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143df74(*(undefined4 *)(param_1 + 0xfc));
    }
  }
  if (1 < *(uint *)(param_1 + 0xf0)) {
    piVar2 = *(int **)(param_1 + 0xf4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    }
  }
  piVar2 = *(int **)(param_1 + 0x108);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
    }
  }
  FUN_0149e23c(param_1 + 0x70);
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0,0,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  piVar2 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),0,0,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),0,0,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
    }
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149f9e0(*(undefined4 *)(param_1 + 0xe4));
    return;
  }
  return;
}

