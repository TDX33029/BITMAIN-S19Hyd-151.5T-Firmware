// FUN_0098ad3c @ 0098ad3c size=672 calls_out=13 calls_in=1
// strings: 

void FUN_0098ad3c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0xf8) != '\x03') {
    if (*(char *)(param_1 + 0xf8) != '\0') {
      return;
    }
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    piVar2 = *(int **)(param_1 + 0xf0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0xf0));
    }
    puVar4 = (undefined4 *)(param_1 + 0xf4);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
LAB_0098adcc:
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar4);
      return;
    }
switchD_0098adf8_caseD_1:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x9c)) {
  case 0:
    FUN_005e6cdc(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x10);
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*(undefined4 *)(param_1 + 0x30));
    }
    puVar4 = (undefined4 *)(param_1 + 0x34);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_0098adcc;
  default:
    goto switchD_0098adf8_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xd8) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd4);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xd0);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0163c790(param_1 + 0xb0);
        if (*(int *)(param_1 + 0xb4) != 0) {
          (**(code **)(*(int *)(param_1 + 0xb4) + 0xc))(*(undefined4 *)(param_1 + 0xb8));
        }
      }
    }
    goto LAB_0098af80;
  case 4:
    if (*(int *)(param_1 + 0xc0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb8));
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00e7c67c(param_1 + 0xa4);
      if (*(int *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
      }
    }
    FUN_0163bdc0(param_1 + 0xc4);
    if (*(int *)(param_1 + 0xd4) != 0) {
      (**(code **)(*(int *)(param_1 + 0xd4) + 0xc))(*(undefined4 *)(param_1 + 0xd8));
    }
    break;
  case 6:
    break;
  }
  FUN_00994e1c(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x9e) = 0;
LAB_0098af80:
  FUN_005c178c(param_1 + 0x40);
  puVar4 = (undefined4 *)(param_1 + 0x3c);
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
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fa8e94(*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}

