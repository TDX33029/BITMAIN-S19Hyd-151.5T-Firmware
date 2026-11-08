// FUN_01b7b180 @ 01b7b180 size=620 calls_out=2 calls_in=1
// strings: 

uint FUN_01b7b180(undefined4 param_1)

{
  uint uVar1;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_01d53560;
  if (DAT_01d53464 == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    param_1 = FUN_01b7ae0c(&local_18,&local_14,&local_10);
    DAT_01d53464 = 1;
    if (0 < local_18) {
      DAT_01d53468 = DAT_01d53468 + local_18;
    }
    if (0 < local_14) {
      DAT_01d53468 = DAT_01d53468 + local_14;
    }
    if (0 < local_10) {
      DAT_01d53468 = DAT_01d53468 + local_10;
    }
    uVar1 = DAT_01d53468 >> 1 | DAT_01d53468;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar1 = uVar1 >> 0x10 | uVar1;
    if (uVar1 == 0) {
      DAT_01d53468 = 0;
    }
    else {
      DAT_01d53468 = uVar1 + 1;
    }
  }
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(param_1,local_c ^ DAT_01d53560,0);
  }
  return DAT_01d53468;
}

