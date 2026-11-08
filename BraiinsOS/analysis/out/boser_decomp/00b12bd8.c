// FUN_00b12bd8 @ 00b12bd8 size=64 calls_out=3 calls_in=3
// strings: 

void FUN_00b12bd8(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_019f1850();
  FUN_00668d74(param_1 + 0xc);
  iVar1 = param_1[1];
  bVar2 = *param_1 == 0 && iVar1 == 0;
  if (*param_1 != 0 || iVar1 != 0) {
    iVar1 = param_1[8];
    bVar2 = iVar1 == 0;
  }
  if (!bVar2) {
    (**(code **)(iVar1 + 0xc))(param_1[9]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

