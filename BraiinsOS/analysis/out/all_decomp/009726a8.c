// FUN_009726a8 @ 009726a8 size=460 calls_out=12 calls_in=3
// strings: 

void FUN_009726a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x8c)) {
  case 0:
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0x20));
    }
    puVar4 = (undefined4 *)(param_1 + 0x24);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar4);
      return;
    }
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 200) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc4);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xc0);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0163c790(param_1 + 0xa0);
        if (*(int *)(param_1 + 0xa4) != 0) {
          (**(code **)(*(int *)(param_1 + 0xa4) + 0xc))(*(undefined4 *)(param_1 + 0xa8));
        }
      }
    }
    goto LAB_00972818;
  case 4:
    if (*(int *)(param_1 + 0xb0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    }
    break;
  case 5:
    FUN_00972a48(param_1 + 0x90);
    break;
  case 6:
    break;
  }
  FUN_00994e1c(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x8e) = 0;
LAB_00972818:
  FUN_005c178c(param_1 + 0x30);
  puVar4 = (undefined4 *)(param_1 + 0x2c);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
  }
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}

