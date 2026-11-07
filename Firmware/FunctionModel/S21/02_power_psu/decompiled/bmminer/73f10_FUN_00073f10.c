// FUN_00073f10 @ 00073f10  size=468  callers=2
// program: bmminer


undefined4 FUN_00073f10(void)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 extraout_s1;
  undefined8 uVar3;
  char local_80c [20];
  undefined4 local_7f8;
  undefined2 local_7f4;
  undefined1 local_7f2;
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(local_80c,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_sample_voltage");
    FUN_0004948c(0,local_80c,0);
    uVar3 = VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
    return (int)uVar3;
  }
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_c = FUN_00072844(DAT_009451f0);
    if (local_c < 0) {
      builtin_strncpy(local_80c,"can nont get voltage",0x14);
      local_7f8 = CONCAT22(local_7f8._2_2_,10);
      FUN_0004948c(0,local_80c,0);
      uVar3 = VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = (undefined4)uVar3;
    }
    else {
      uVar2 = FUN_00073e10(local_c);
      uVar2 = SUB84((double)CONCAT44(extraout_s1,uVar2) + (double)DAT_0094538c,0);
    }
  }
  else {
    local_c = FUN_000705cc();
    if (local_c == 0) {
      builtin_strncpy(local_80c,"can nont get power s",0x14);
      local_7f8._0_1_ = 't';
      local_7f8._1_1_ = 'a';
      local_7f8._2_1_ = 't';
      local_7f8._3_1_ = 'u';
      local_7f4 = 0xa73;
      local_7f2 = 0;
      FUN_0004948c(0,local_80c,0);
      uVar2 = 0;
    }
    else {
      uVar3 = VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = (undefined4)uVar3;
    }
  }
  return uVar2;
}

