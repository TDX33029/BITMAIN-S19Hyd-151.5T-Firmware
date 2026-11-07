// FUN_0068d888 @ 0068d888 size=344 calls_out=8 calls_in=1
// strings: 

void FUN_0068d888(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x3f4) == '\0') {
    piVar2 = *(int **)(param_1 + 1000);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00687810(*(undefined4 *)(param_1 + 1000));
    }
    FUN_00668c04(param_1 + 0x3ec);
    goto switchD_0068d8b8_caseD_1;
  }
  if (*(char *)(param_1 + 0x3f4) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x33)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00687810(*(undefined4 *)(param_1 + 0x24));
    }
    FUN_00668c04(param_1 + 0x28);
    FUN_005faf6c(param_1 + 0x2c);
  default:
    goto switchD_0068d8b8_caseD_1;
  case 3:
    FUN_019ede44(param_1 + 0x50);
    break;
  case 4:
    FUN_0068db14(param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0x32) = 0;
    FUN_0069b234(param_1 + 0xd0);
    FUN_006a0304(param_1 + 0x338);
    break;
  case 5:
    FUN_0068db14(param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 0x31) = 0;
    FUN_0069b234(param_1 + 0xc0);
    FUN_006a0304(param_1 + 0x328);
  }
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  FUN_005faf6c(param_1 + 0x20);
  FUN_00668c04(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00687810(*(undefined4 *)(param_1 + 0x18));
  }
switchD_0068d8b8_caseD_1:
  FUN_005faf6c(param_1 + 0x3f0);
  return;
}

