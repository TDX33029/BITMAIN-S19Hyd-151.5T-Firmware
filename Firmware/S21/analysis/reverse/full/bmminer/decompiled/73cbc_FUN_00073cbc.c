// FUN_00073cbc @ 00073cbc  size=340  callers=0
// program: bmminer


undefined4 FUN_00073cbc(void)

{
  uint in_fpscr;
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char acStack_818 [2048];
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  local_c = 0;
  if ((DAT_009451f4 == 0) && (local_c = FUN_00074e08(), local_c < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_power_running_time");
    FUN_0004948c(0,acStack_818,0);
    uVar3 = VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
    return (int)uVar3;
  }
  if ((DAT_009451f8 == 0xc1) || (DAT_009451f8 == 0xc2)) {
    local_18 = 0xa0000000;
    uStack_14 = 0x3fc99999;
    local_c = FUN_00073784(DAT_009451f0);
    if (local_c == -0x7ffffd00) {
      snprintf(acStack_818,0x800,"can\'t get power running time ret = 0x%x\n",0x80000300);
      FUN_0004948c(0,acStack_818,0);
      uVar3 = VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = (undefined4)uVar3;
    }
    else {
      dVar1 = (double)VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = SUB84(dVar1 * (double)CONCAT44(uStack_14,local_18),0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

