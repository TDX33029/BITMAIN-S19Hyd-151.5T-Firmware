// FUN_00fb5c10 @ 00fb5c10 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_00fb5c10(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    piVar2 = *(int **)(param_1 + 0x128);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x128));
    }
    FUN_00ebabdc(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x03') {
    FUN_00fb5cac(param_1 + 0x90);
    *(undefined2 *)(param_1 + 0x131) = 0;
    return;
  }
  return;
}

