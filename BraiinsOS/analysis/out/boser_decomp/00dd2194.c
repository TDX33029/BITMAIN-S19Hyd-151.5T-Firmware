// FUN_00dd2194 @ 00dd2194 size=76 calls_out=4 calls_in=3
// strings: 

void FUN_00dd2194(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[10] != -0x80000000) {
    FUN_00db1ffc();
    FUN_006f66dc(param_1 + 10);
    return;
  }
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_00dccf60(uVar1,iVar2);
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar1);
  return;
}

