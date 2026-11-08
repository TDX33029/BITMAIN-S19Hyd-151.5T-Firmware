// FUN_010e7f14 @ 010e7f14 size=416 calls_out=9 calls_in=1
// strings: 

void FUN_010e7f14(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    piVar4 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x50));
    }
    FUN_010e8228(param_1);
    piVar4 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x54));
    }
    goto LAB_010e80a8;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      FUN_0193c3cc(param_1 + 0x68);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x130) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb2);
      if (cVar1 != '\x03') {
        if (cVar1 == '\x05') {
          FUN_00d3af84(param_1 + 0xf0);
          iVar5 = 0xe0;
          *(undefined1 *)(param_1 + 0xb0) = 0;
          iVar3 = 0xe4;
        }
        else {
          if (cVar1 != '\x04') goto LAB_010e8038;
          FUN_00d3af84(param_1 + 0xe8);
          iVar5 = 0xd8;
          *(undefined1 *)(param_1 + 0xb1) = 0;
          iVar3 = 0xdc;
        }
        FUN_019bb7e0(*(undefined4 *)(param_1 + iVar5),*(undefined4 *)(param_1 + iVar3));
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
      FUN_00d3b00c(param_1 + 0x70);
    }
LAB_010e8038:
    FUN_019f8c54(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
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
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_010e8228(param_1);
  piVar4 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x54));
  }
LAB_010e80a8:
  FUN_00d3238c(param_1 + 0x18);
  return;
}

