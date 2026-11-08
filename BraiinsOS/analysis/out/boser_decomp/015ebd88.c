// FUN_015ebd88 @ 015ebd88 size=124 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_015ebd88(uint *param_1)

{
  uint uVar1;
  int local_1c;
  uint *local_18;
  byte local_14;
  uint *local_10;
  byte local_c;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 2;
    local_18 = param_1;
  }
  else {
    FUN_01933ff0(&local_1c,param_1 + 2);
    if (local_1c == 1) {
      local_c = local_14;
      local_10 = local_18;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_10,&DAT_01cfd8c8,&DAT_01cfd990);
    }
    uVar1 = (uint)local_14;
  }
  return CONCAT44(uVar1,local_18);
}

