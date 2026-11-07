// FUN_00a4aa30 @ 00a4aa30 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_00a4aa30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 0x14 + 0x14, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*param_1 - iVar2);
  }
  FUN_019bb7e0(param_1[9],param_1[10]);
  FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  FUN_019bb7e0(param_1[0x12],param_1[0x13]);
  FUN_019bb7e0(param_1[0x15],param_1[0x16]);
  return;
}

