// FUN_00de695c @ 00de695c size=304 calls_out=8 calls_in=1
// strings: 

void FUN_00de695c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    FUN_00d66ffc(param_1 + 0x24);
    puVar4 = (undefined4 *)(param_1 + 0x30);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_00de6a6c;
  default:
    return;
  case 3:
    FUN_005bd080(param_1 + 0x40);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x68);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x65);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00de6ba8(param_1 + 0x44);
    }
    break;
  case 5:
    FUN_00de6c88(param_1 + 0x40);
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x68);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 100);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00e7c67c(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x50) != 0) {
        (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      }
    }
  }
  FUN_00e7decc(param_1);
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 8));
  }
  FUN_00d66ffc(param_1 + 0x10);
  puVar4 = (undefined4 *)(param_1 + 0x1c);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_00de6a6c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*puVar4);
    return;
  }
  return;
}

