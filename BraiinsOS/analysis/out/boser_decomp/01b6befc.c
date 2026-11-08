// FUN_01b6befc @ 01b6befc size=188 calls_out=5 calls_in=4
// strings: 

void FUN_01b6befc(undefined4 param_1)

{
  ulonglong uVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_14;
  
  local_14 = DAT_01d53560;
  uVar1 = FUN_01afd684();
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 & 0xffffffff00000000;
  }
  else {
    FUN_01bed93e(auStack_2c,0,0x18);
    local_1c = FUN_01afd674(param_1);
    local_20 = FUN_01afd684(param_1);
    uVar1 = FUN_01b6be00(auStack_2c);
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar1,(int)(uVar1 >> 0x20),local_14 ^ DAT_01d53560,0);
  }
  return;
}

