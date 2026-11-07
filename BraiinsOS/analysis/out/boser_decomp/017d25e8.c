// FUN_017d25e8 @ 017d25e8 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_017d25e8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    FUN_017cbc54(param_1);
    FUN_017cbbc8(param_1 + 0x1ac);
    FUN_017cbd88(param_1 + 0x1a8);
    return;
  }
  if (*(char *)(param_1 + 0x1c4) != '\x03') {
    return;
  }
  FUN_017cbd88(param_1 + 0x1b4);
  piVar2 = *(int **)(param_1 + 0x1b0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784968(*(undefined4 *)(param_1 + 0x1b0));
    return;
  }
  return;
}

