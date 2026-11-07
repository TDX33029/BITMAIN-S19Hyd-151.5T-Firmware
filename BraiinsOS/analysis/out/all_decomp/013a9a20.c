// FUN_013a9a20 @ 013a9a20 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_013a9a20(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar4 = param_1[4];
  puVar3 = (undefined4 *)(iVar4 + 4);
  for (iVar5 = param_1[5]; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 3;
  }
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
  }
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[10],param_1[0xb]);
      return;
    }
  }
  return;
}

