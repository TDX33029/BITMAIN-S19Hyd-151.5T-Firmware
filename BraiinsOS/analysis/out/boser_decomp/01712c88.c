// FUN_01712c88 @ 01712c88 size=76 calls_out=5 calls_in=3
// strings: 

void FUN_01712c88(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_01702f28(param_1[2]);
    return;
  }
  FUN_0071227c(param_1);
  FUN_017ce5f0(param_1[0x12],param_1[0x13]);
  iVar1 = param_1[0x14];
  FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
  thunk_FUN_01be4678(iVar1);
  return;
}

