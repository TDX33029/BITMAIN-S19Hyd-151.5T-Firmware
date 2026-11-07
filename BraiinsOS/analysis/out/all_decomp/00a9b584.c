// FUN_00a9b584 @ 00a9b584 size=684 calls_out=8 calls_in=1
// strings: 

undefined1 FUN_00a9b584(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar3,param_1);
  }
  piVar6 = (int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x36);
  if (cVar1 == '\x04') {
    FUN_00a9bb4c(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x31) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    }
    iVar3 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x32) = 0;
    piVar4 = (int *)(iVar3 + 0x44);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_00a8e328(iVar3 + 8);
    }
    piVar4 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x50));
    }
    piVar4 = *(int **)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x30) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaa68(*(undefined4 *)(param_1 + 0x4c));
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        iVar3 = *(int *)(param_1 + 0x28);
        piVar6 = (int *)(iVar3 + 0x48);
        do {
          iVar5 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          FUN_00a8db58(iVar3 + 8);
        }
        piVar6 = *(int **)(param_1 + 0x28);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aaac8c(*(undefined4 *)(param_1 + 0x28));
        }
        if (*(int *)(param_1 + 0x2c) != -1) {
          piVar6 = (int *)(*(int *)(param_1 + 0x2c) + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            thunk_FUN_016d3fb4();
          }
        }
      }
      goto LAB_00a9b7f0;
    }
    FUN_00a9ba0c(param_1 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  if (*(int *)(param_1 + 0x24) != -1) {
    piVar4 = (int *)(*(int *)(param_1 + 0x24) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4();
    }
  }
  iVar3 = *piVar6;
  piVar4 = (int *)(iVar3 + 0x48);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_00a8db58(iVar3 + 8);
  }
  piVar4 = (int *)*piVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaac8c(*piVar6);
  }
LAB_00a9b7f0:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar3,param_1);
  }
  return DAT_018dd947;
}

