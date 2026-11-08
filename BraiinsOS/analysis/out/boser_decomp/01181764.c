// FUN_01181764 @ 01181764 size=184 calls_out=9 calls_in=1
// strings: 

void FUN_01181764(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a3b7c0(*(undefined4 *)(param_1 + 0xc));
  FUN_00668c04(param_1 + 8);
  FUN_011818f4(param_1 + 0x54);
  FUN_005faf6c((undefined4 *)(param_1 + 0xc));
  FUN_01181980(param_1 + 0x10);
  FUN_01181a60(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_005f9bb8(param_1 + 0x20);
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

