// FUN_009d3618 @ 009d3618 size=124 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_009d3618(int *param_1)

{
  uint uVar1;
  int local_1c;
  int *local_18;
  byte local_14;
  int *local_10;
  byte local_c;
  
  if (*param_1 == 1) {
    FUN_01656cb0(&local_1c,param_1 + 1);
    if (local_1c == 1) {
      local_c = local_14;
      local_10 = local_18;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01c0ce18,&DAT_01c19e04);
    }
    uVar1 = (uint)local_14;
  }
  else {
    uVar1 = 2;
    local_18 = param_1;
  }
  return CONCAT44(uVar1,local_18);
}

