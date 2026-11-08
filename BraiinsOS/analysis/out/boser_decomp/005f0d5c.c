// FUN_005f0d5c @ 005f0d5c size=76 calls_out=3 calls_in=2
// strings: 

void FUN_005f0d5c(int *param_1)

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
      return;
    }
  }
  return;
}

