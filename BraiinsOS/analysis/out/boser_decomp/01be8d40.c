// FUN_01be8d40 @ 01be8d40 size=96 calls_out=2 calls_in=1
// strings: 

int FUN_01be8d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01be9c4e(0x10,0x80003,0);
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_01be8ca8(iVar1,1,0x12,param_1,param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = FUN_01be8ca8(iVar1,2,0x16,param_2,param_3,param_4);
    }
    software_interrupt(0);
  }
  return iVar2;
}

