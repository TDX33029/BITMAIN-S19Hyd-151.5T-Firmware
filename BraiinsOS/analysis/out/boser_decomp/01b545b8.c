// FUN_01b545b8 @ 01b545b8 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_01b545b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_01d53560;
  uVar1 = FUN_01b542bc(&local_10,param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar1 == 0) {
    local_10 = 0xffffffff;
  }
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(local_10,(int)((ulonglong)uVar1 >> 0x20),local_c ^ DAT_01d53560,0);
  }
  return;
}

