// FUN_0178cb00 @ 0178cb00 size=620 calls_out=2 calls_in=1
// strings: 

uint FUN_0178cb00(undefined4 param_1)

{
  uint uVar1;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_018ddaf8;
  if (DAT_018dffbc == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    param_1 = FUN_0178c78c(&local_18,&local_14,&local_10);
    DAT_018dffbc = 1;
    if (0 < local_18) {
      DAT_018dffc0 = DAT_018dffc0 + local_18;
    }
    if (0 < local_14) {
      DAT_018dffc0 = DAT_018dffc0 + local_14;
    }
    if (0 < local_10) {
      DAT_018dffc0 = DAT_018dffc0 + local_10;
    }
    uVar1 = DAT_018dffc0 >> 1 | DAT_018dffc0;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar1 = uVar1 >> 0x10 | uVar1;
    if (uVar1 == 0) {
      DAT_018dffc0 = 0;
    }
    else {
      DAT_018dffc0 = uVar1 + 1;
    }
  }
  if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(param_1,local_c ^ DAT_018ddaf8,0);
  }
  return DAT_018dffc0;
}

