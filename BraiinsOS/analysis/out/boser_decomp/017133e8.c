// FUN_017133e8 @ 017133e8 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_017133e8(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
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

