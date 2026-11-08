// FUN_005f4d14 @ 005f4d14 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_005f4d14(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_01a17ec4();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = param_1[2];
  iVar4 = param_1[3];
  FUN_01a38888(iVar2,iVar4);
  if (iVar4 != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

