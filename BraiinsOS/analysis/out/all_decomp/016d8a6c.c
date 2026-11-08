// FUN_016d8a6c @ 016d8a6c size=96 calls_out=2 calls_in=1
// strings: 

int FUN_016d8a6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_016d997a(0x10,0x80003,0);
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_016d89d4(iVar1,1,0x12,param_1,param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = FUN_016d89d4(iVar1,2,0x16,param_2,param_3,param_4);
    }
    software_interrupt(0);
  }
  return iVar2;
}

