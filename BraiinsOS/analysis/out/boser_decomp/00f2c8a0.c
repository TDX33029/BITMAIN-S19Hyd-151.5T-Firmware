// FUN_00f2c8a0 @ 00f2c8a0 size=372 calls_out=6 calls_in=2
// strings: 

void FUN_00f2c8a0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00f2cb60(param_1 + 0xf8);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
    }
    piVar3 = *(int **)(param_1 + 200);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*(undefined4 *)(param_1 + 200));
    }
    if (*(char *)(param_1 + 0xe1) != '\0') {
      piVar3 = *(int **)(param_1 + 0xf0);
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar3 + 2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(*(undefined4 *)(param_1 + 0xf0));
      }
    }
    *(undefined1 *)(param_1 + 0xe1) = 0;
    if ((*(char *)(param_1 + 0xe2) != '\0') && (*(int *)(param_1 + 0xe4) != -0x80000000)) {
      FUN_006a41c0();
    }
    *(undefined1 *)(param_1 + 0xe2) = 0;
    FUN_005f9800(param_1 + 0x7c);
    return;
  }
  FUN_005f9800(param_1);
  if (*(int *)(param_1 + 0x4c) != -0x80000000) {
    FUN_006a41c0();
  }
  piVar3 = *(int **)(param_1 + 0x74);
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar3 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x74));
  }
  piVar3 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}

