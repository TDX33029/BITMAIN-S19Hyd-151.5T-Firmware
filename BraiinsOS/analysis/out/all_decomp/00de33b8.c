// FUN_00de33b8 @ 00de33b8 size=340 calls_out=8 calls_in=2
// strings: 

void FUN_00de33b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x28);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00de3510;
  default:
    return;
  case 3:
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00e44660(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
    }
    goto LAB_00de34f4;
  case 4:
    FUN_00de365c(param_1 + 0x30);
    break;
  case 5:
    if ((*(char *)(param_1 + 0x3c) == '\x03') && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),1);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x140) == '\x03') {
      if (*(char *)(param_1 + 0x59) == '\x04') {
        FUN_00de36e4(param_1 + 0x78);
        FUN_00e44114(*(undefined4 *)(param_1 + 0x50));
      }
      else if ((*(char *)(param_1 + 0x59) == '\x03') && (*(int *)(param_1 + 0x60) != 0)) {
        FUN_00e43e74(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),1);
      }
    }
    FUN_00e44114(*(undefined4 *)(param_1 + 0x24));
  }
  FUN_00e7decc(param_1);
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 8));
  }
LAB_00de34f4:
  puVar4 = (undefined4 *)(param_1 + 0x20);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00de3510:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078dfac(*puVar4);
    return;
  }
  return;
}

