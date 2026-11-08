// FUN_00f3d51c @ 00f3d51c size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00f3d51c(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  do {
    iVar1 = FUN_016e0022(param_2);
    if (iVar1 != -1) {
      *param_1 = 4;
      goto FUN_016dffb2;
    }
    piVar2 = (int *)FUN_016d2bc8();
  } while (*piVar2 == 4);
  *(int *)(param_1 + 4) = *piVar2;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
FUN_016dffb2:
  uVar3 = FUN_016dac50(param_2);
  iVar1 = thunk_FUN_016dde14(6,uVar3,0,0,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_016d3496(iVar1);
  return;
}

