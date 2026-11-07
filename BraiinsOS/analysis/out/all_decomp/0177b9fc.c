// FUN_0177b9fc @ 0177b9fc size=208 calls_out=4 calls_in=5
// strings: 

void FUN_0177b9fc(undefined4 param_1)

{
  ulonglong uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  uVar1 = FUN_016e1e1c();
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 & 0xffffffff00000000;
  }
  else {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_1c = FUN_016e1e04(param_1);
    local_20 = FUN_016e1e1c(param_1);
    uVar1 = FUN_0177b888(&local_2c);
  }
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar1,(int)(uVar1 >> 0x20),local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

