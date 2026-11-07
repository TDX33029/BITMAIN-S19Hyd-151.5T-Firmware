// FUN_00f2cb60 @ 00f2cb60 size=124 calls_out=4 calls_in=2
// strings: 

void FUN_00f2cb60(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x03') {
    if (*(char *)(param_1 + 0x59c) == '\x03') {
      FUN_00ba71b0(param_1 + 0x30);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_00668c84(*(undefined4 *)(param_1 + 0x38));
    FUN_00f291f4(param_1 + 0x48);
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x20));
      return;
    }
    return;
  }
  return;
}

