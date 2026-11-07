// FUN_01125c38 @ 01125c38 size=600 calls_out=8 calls_in=2
// strings: 

void FUN_01125c38(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0x5f)) {
  case 0:
    puVar5 = (undefined4 *)(param_1 + 0x48);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    goto LAB_01125e98;
  default:
    return;
  case 3:
    FUN_01129aa4(param_1 + 0x60);
    goto LAB_01125e7c;
  case 4:
    FUN_0112ea10(param_1 + 0x70);
    uVar3 = extraout_r1;
    break;
  case 5:
    piVar2 = *(int **)(param_1 + 0x60);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      uVar3 = 0x84;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    uVar3 = extraout_r1_02;
    break;
  case 6:
    FUN_005f0f24(param_1 + 0x60);
    uVar3 = extraout_r1_01;
    break;
  case 7:
    FUN_0112eadc(param_1 + 0x60);
    uVar3 = extraout_r1_00;
  }
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x4f);
  }
  if (piVar2 != (int *)0x0 && uVar3 != 0) {
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_01125d4c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_01125d4c:
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  FUN_005faf6c(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  if (*(char *)(param_1 + 0x50) != '\0') {
    piVar2 = *(int **)(param_1 + 100);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_01125db8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_01125db8:
  piVar2 = *(int **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182080(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    piVar2 = *(int **)(param_1 + 0x2c);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_01125e3c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_01125e3c:
  *(undefined1 *)(param_1 + 0x51) = 0;
  FUN_005faf6c(param_1 + 0x28);
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182350(*(undefined4 *)(param_1 + 0x24));
  }
LAB_01125e7c:
  puVar5 = (undefined4 *)(param_1 + 0x20);
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
LAB_01125e98:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*puVar5);
    return;
  }
  return;
}

