// FUN_0174d720 @ 0174d720 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_0174d720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_018ddaf8;
  uVar1 = FUN_0174d2dc(&local_10,param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar1 == 0) {
    local_10 = 0xffffffff;
  }
  if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(local_10,(int)((ulonglong)uVar1 >> 0x20),local_c ^ DAT_018ddaf8,0);
  }
  return;
}

