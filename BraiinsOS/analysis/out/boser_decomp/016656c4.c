// FUN_016656c4 @ 016656c4 size=136 calls_out=3 calls_in=1
// strings: 

void FUN_016656c4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1[7] != 0) {
    do {
      iVar2 = FUN_0166574c(param_1 + 3);
      piVar3 = *(int **)(iVar2 + -0xc);
      param_1[7] = param_1[7] + -1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04(*(undefined4 *)(iVar2 + -0xc));
      }
    } while (param_1[7] != 0);
  }
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = param_1[1];
  }
  if (*param_1 != 0 && iVar2 != 0) {
    thunk_FUN_01be4678(param_1[2]);
    return;
  }
  return;
}

