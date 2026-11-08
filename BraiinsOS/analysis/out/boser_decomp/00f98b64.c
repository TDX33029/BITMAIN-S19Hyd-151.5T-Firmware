// FUN_00f98b64 @ 00f98b64 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_00f98b64(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x494) == '\0') {
    piVar2 = *(int **)(param_1 + 0x490);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011820d0(*(undefined4 *)(param_1 + 0x490));
    }
    FUN_00eca9c4(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x494) == '\x03') {
    FUN_00f98ee0(param_1 + 0xb0);
    *(undefined1 *)(param_1 + 0x495) = 0;
    return;
  }
  return;
}

