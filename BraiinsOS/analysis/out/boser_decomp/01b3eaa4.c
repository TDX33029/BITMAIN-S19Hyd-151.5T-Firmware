// FUN_01b3eaa4 @ 01b3eaa4 size=164 calls_out=3 calls_in=3
// strings: 

void FUN_01b3eaa4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_5c;
  undefined1 auStack_58 [68];
  uint local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b3e834(param_1,auStack_58,&local_5c,param_3);
  uVar1 = FUN_01b2ba40(auStack_58,local_5c,param_2);
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar1 != 0,(int)((ulonglong)uVar1 >> 0x20),local_14 ^ DAT_01d53560,0);
  }
  return;
}

