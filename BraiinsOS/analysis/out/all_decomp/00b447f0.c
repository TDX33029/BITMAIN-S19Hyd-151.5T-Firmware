// FUN_00b447f0 @ 00b447f0 size=240 calls_out=7 calls_in=2
// strings: 

void FUN_00b447f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 0x29)) {
  case 3:
    if (*(char *)(param_1 + 0x30) != '\0') {
      return;
    }
    puVar4 = (undefined4 *)(param_1 + 0x2c);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar4);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x91) == '\x03') {
      FUN_00b485ac(param_1 + 0x34);
      return;
    }
    return;
  case 5:
    FUN_00b48d78(param_1 + 0x30);
    break;
  case 6:
    FUN_00b497ac(param_1 + 0x30);
    break;
  default:
    return;
  }
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078ecac(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

