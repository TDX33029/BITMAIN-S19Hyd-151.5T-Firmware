// FUN_0120cf54 @ 0120cf54 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_0120cf54(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 0x10 + 0x10, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*param_1 - iVar2);
  }
  iVar1 = param_1[9];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 0x10 + 0x10, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(param_1[8] - iVar2);
  }
  FUN_019bb7e0(param_1[0x11],param_1[0x12]);
  FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  return;
}

