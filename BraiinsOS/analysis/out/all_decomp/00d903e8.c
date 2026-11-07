// FUN_00d903e8 @ 00d903e8 size=384 calls_out=7 calls_in=3
// strings: 

void FUN_00d903e8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x90);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    iVar4 = 0x10;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x40));
    }
    goto LAB_00d9055c;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      if (*(char *)(param_1 + 0xb8) == '\x03') {
        piVar2 = *(int **)(param_1 + 0xb4);
        if (*piVar2 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar5 = (bool)hasExclusiveAccess(piVar2);
          if (bVar5) {
            *piVar2 = 0x84;
            goto LAB_00d90528;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar2[2] + 0x10))();
      }
      else if ((*(char *)(param_1 + 0xb8) == '\0') && (*(int *)(param_1 + 0xa8) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x10c);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0xd0);
    }
    if (bVar5 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x108);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x104);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0163aa10(param_1 + 0xe4);
        if (*(int *)(param_1 + 0xf0) != 0) {
          (**(code **)(*(int *)(param_1 + 0xf0) + 0xc))(*(undefined4 *)(param_1 + 0xf4));
        }
      }
    }
    FUN_005e6cdc(param_1 + 0x110);
    if (*(int *)(param_1 + 0x11c) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x110);
  }
LAB_00d90528:
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  iVar4 = 0x58;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*(undefined4 *)(param_1 + 0x88));
  }
LAB_00d9055c:
  FUN_005c4f44(param_1 + iVar4);
  return;
}

