// FUN_00de24b0 @ 00de24b0 size=440 calls_out=9 calls_in=2
// strings: 

void FUN_00de24b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0x50)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(*(undefined4 *)(param_1 + 0x3c));
    }
    puVar5 = (undefined4 *)(param_1 + 0x40);
    FUN_01663cc4(*puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar5);
      return;
    }
  default:
    return;
  case 3:
    break;
  case 4:
    FUN_0163bdc0(param_1 + 0x70);
    if (*(int *)(param_1 + 0x80) != 0) {
      (**(code **)(*(int *)(param_1 + 0x80) + 0xc))(*(undefined4 *)(param_1 + 0x84));
    }
    break;
  case 5:
    if ((*(char *)(param_1 + 100) == '\x03') && (*(int *)(param_1 + 0x5c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),1);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xe0) == '\x03') {
      if (*(char *)(param_1 + 0xd4) == '\x03') {
        FUN_00de27ac(param_1 + 0xac);
        *(undefined1 *)(param_1 + 0xd5) = 0;
      }
      else if ((*(char *)(param_1 + 0xd4) == '\0') && (*(int *)(param_1 + 0x80) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
      }
      *(undefined1 *)(param_1 + 0xe1) = 0;
    }
    FUN_00e44114(*(undefined4 *)(param_1 + 0x58));
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  FUN_00a07b4c(uVar4);
  thunk_FUN_016d3fb4(uVar4);
  puVar5 = (undefined4 *)(param_1 + 0x4c);
  FUN_01663cc4(*puVar5);
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar5);
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

