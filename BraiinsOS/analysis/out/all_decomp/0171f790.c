// FUN_0171f790 @ 0171f790 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_0171f790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  uVar3 = FUN_0171f374(param_1,&local_18,param_2,param_3,param_4);
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  bVar2 = false;
  if ((int)uVar3 != 0) {
    uVar3 = FUN_0171e6a8(param_1,param_1,local_18);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    bVar2 = (int)uVar3 != 0;
  }
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar2,uVar1,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

