// FUN_011a1f84 @ 011a1f84 size=196 calls_out=3 calls_in=0
// strings: 

void FUN_011a1f84(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[1];
  iVar4 = 0;
  for (iVar6 = param_1[2] + 1; iVar6 != 1; iVar6 = iVar6 + -1) {
    if (*(int *)(iVar5 + iVar4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + iVar4 + 4));
    }
    iVar2 = iVar5 + iVar4;
    iVar4 = iVar4 + 0x20;
    FUN_0115ccf0(iVar2 + 0xc);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  piVar3 = (int *)param_1[9];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[9],param_1[10]);
    return;
  }
  return;
}

