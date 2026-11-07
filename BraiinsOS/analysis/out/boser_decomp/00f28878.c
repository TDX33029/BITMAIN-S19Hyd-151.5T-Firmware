// FUN_00f28878 @ 00f28878 size=308 calls_out=6 calls_in=2
// strings: 

void FUN_00f28878(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x254);
  if (cVar1 == '\0') {
    FUN_00d33f88(param_1);
    piVar3 = *(int **)(param_1 + 0x6c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01181c68(*(undefined4 *)(param_1 + 0x6c));
    }
    piVar3 = *(int **)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182bec(*(undefined4 *)(param_1 + 0x70));
    }
    FUN_01aae24c(param_1 + 0x74);
    FUN_00d34048(param_1 + 0x1c);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    if ((*(uint *)(param_1 + 0x260) != 5) &&
       ((*(uint *)(param_1 + 0x260) < 4 || (*(int *)(param_1 + 0x264) != 0)))) {
      (**(code **)(*(int *)(param_1 + 0x264) + 0x10))
                (param_1 + 0x270,*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
    }
  }
  FUN_00d33f88(param_1 + 0x234);
  FUN_00f28ac4(param_1 + 0x110);
  piVar3 = *(int **)(param_1 + 0xf8);
  *(undefined2 *)(param_1 + 0x255) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(*(undefined4 *)(param_1 + 0xf8));
  }
  *(undefined2 *)(param_1 + 599) = 0;
  *(undefined1 *)(param_1 + 0x259) = 0;
  return;
}

