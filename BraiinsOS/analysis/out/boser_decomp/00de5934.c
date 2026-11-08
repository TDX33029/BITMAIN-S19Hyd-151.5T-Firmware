// FUN_00de5934 @ 00de5934 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00de5934(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x90));
    }
    FUN_00de2988(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x94) != '\x03') {
    return;
  }
  FUN_00fe4378(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x90));
    return;
  }
  return;
}

