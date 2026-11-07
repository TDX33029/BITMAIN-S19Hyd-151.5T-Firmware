// FUN_01b0303c @ 01b0303c size=152 calls_out=2 calls_in=1
// strings: 

void FUN_01b0303c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_01d53560;
  uVar1 = FUN_01b02d64(&local_10,param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    local_10 = 0xffffffff;
  }
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(local_10,(int)((ulonglong)uVar1 >> 0x20),local_c ^ DAT_01d53560,0);
  }
  return;
}

