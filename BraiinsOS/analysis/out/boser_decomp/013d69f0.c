// FUN_013d69f0 @ 013d69f0 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_013d69f0(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_013e1c64(param_2,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_013e1c64(param_2,param_1 >> 8);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_013e1c64(param_2,param_1 >> 0x10);
    if (iVar1 == 0) {
      FUN_013e1c64(param_2,param_1 >> 0x18);
      return;
    }
  }
  return;
}

