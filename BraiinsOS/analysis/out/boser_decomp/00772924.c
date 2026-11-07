// FUN_00772924 @ 00772924 size=112 calls_out=6 calls_in=2
// strings: 

void FUN_00772924(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x160) != 2) {
    FUN_0079217c();
  }
  FUN_007921ac(param_1 + 0x148);
  FUN_01403144(param_1 + 0x154);
  FUN_0074b190(param_1 + 200);
  FUN_00772a08(param_1);
  piVar2 = *(int **)(param_1 + 0x1a4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0076db24(*(undefined4 *)(param_1 + 0x1a4));
    return;
  }
  return;
}

