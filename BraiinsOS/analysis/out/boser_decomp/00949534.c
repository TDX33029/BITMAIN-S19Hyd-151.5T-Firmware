// FUN_00949534 @ 00949534 size=96 calls_out=4 calls_in=2
// strings: 

void FUN_00949534(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[10] != -0x80000000) {
    FUN_009496dc();
    FUN_007bc140(param_1 + 10);
    return;
  }
  iVar2 = *param_1;
  iVar4 = param_1[1];
  iVar3 = iVar4 + 1;
  iVar1 = iVar2;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_0094966c(iVar1);
    iVar1 = iVar1 + 0x38;
  }
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

