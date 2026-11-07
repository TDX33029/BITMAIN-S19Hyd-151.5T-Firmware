// FUN_00d9eef0 @ 00d9eef0 size=80 calls_out=4 calls_in=5
// strings: 

void FUN_00d9eef0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 != 4 || iVar2 != 0) {
    FUN_01710ba4(param_1 + 0x10);
    FUN_01af7af8(param_1[0x10],param_1[0x11],4,0x10);
    if (iVar1 != 3 || iVar2 != 0) {
      FUN_0142e6dc(param_1);
    }
  }
  FUN_00b19860(param_1[0x14],param_1[0x15]);
  return;
}

