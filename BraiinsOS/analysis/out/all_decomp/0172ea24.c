// FUN_0172ea24 @ 0172ea24 size=160 calls_out=3 calls_in=3
// strings: 

void FUN_0172ea24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_5c;
  undefined1 auStack_58 [68];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_0172e7b0(param_1,auStack_58,&local_5c,param_3);
  uVar1 = FUN_017150f4(auStack_58,local_5c,param_2);
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar1 != 0,(int)((ulonglong)uVar1 >> 0x20),local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

