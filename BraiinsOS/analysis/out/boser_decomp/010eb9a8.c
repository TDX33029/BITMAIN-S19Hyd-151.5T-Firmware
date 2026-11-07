// FUN_010eb9a8 @ 010eb9a8 size=716 calls_out=13 calls_in=1
// strings: 

void FUN_010eb9a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x6f4) == '\0') {
    FUN_010e9a80(param_1);
    FUN_00d36398(*(undefined4 *)(param_1 + 0x6ec));
    if (*(int *)(param_1 + 0x6e0) != -0x80000000) {
      FUN_006a41c0();
    }
    piVar2 = *(int **)(param_1 + 0x6f0);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x6f0));
    }
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*(undefined4 *)(param_1 + 0x30));
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x6f4) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x128);
  if (cVar1 == '\x04') {
    FUN_01139b38(*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130));
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_005f9800(param_1 + 0x48);
        if (*(int *)(param_1 + 0x94) != -0x80000000) {
          FUN_006a41c0();
        }
        piVar2 = *(int **)(param_1 + 0xbc);
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar2 + 2) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(*(undefined4 *)(param_1 + 0xbc));
        }
        piVar2 = *(int **)(param_1 + 0xa0);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121cce0(*(undefined4 *)(param_1 + 0xa0));
        }
      }
      goto LAB_010ebbf0;
    }
    cVar1 = *(char *)(param_1 + 0x158);
    if (cVar1 == '\x04') {
      FUN_00668c84(*(undefined4 *)(param_1 + 0x178));
      FUN_010eb19c(param_1 + 0x188);
      piVar2 = *(int **)(param_1 + 0x160);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(*(undefined4 *)(param_1 + 0x160));
      }
    }
    else {
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x6dc);
      }
      if (bVar4 && cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x1b5) == '\x04') {
          if (*(int *)(param_1 + 0x1cc) != 0) {
            thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x1c8));
          }
          FUN_005f649c(param_1 + 0x170);
        }
        else {
          if (*(char *)(param_1 + 0x1b5) != '\x03') goto LAB_010ebb44;
          FUN_00740564(param_1 + 0x1c8);
        }
        *(undefined1 *)(param_1 + 0x1b4) = 0;
      }
    }
  }
LAB_010ebb44:
  piVar2 = *(int **)(param_1 + 0x110);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*(undefined4 *)(param_1 + 0x110));
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    piVar2 = *(int **)(param_1 + 0x138);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x138));
    }
  }
  *(undefined1 *)(param_1 + 0x129) = 0;
  if ((*(char *)(param_1 + 0x12a) != '\0') && (*(int *)(param_1 + 300) != -0x80000000)) {
    FUN_006a41c0();
  }
  *(undefined1 *)(param_1 + 0x12a) = 0;
  FUN_005f9800(param_1 + 0xc4);
LAB_010ebbf0:
  FUN_010e9a80(param_1);
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x6ec));
  return;
}

