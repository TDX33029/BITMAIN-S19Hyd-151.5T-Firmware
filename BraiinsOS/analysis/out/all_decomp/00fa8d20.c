// FUN_00fa8d20 @ 00fa8d20 size=88 calls_out=3 calls_in=0
// strings: 

void FUN_00fa8d20(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  piVar3 = (int *)*param_1;
  FUN_00fa7fa8(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*param_1);
    return;
  }
  return;
}

