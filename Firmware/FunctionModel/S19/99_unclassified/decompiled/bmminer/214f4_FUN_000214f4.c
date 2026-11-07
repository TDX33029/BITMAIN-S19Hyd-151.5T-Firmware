// FUN_000214f4 @ 000214f4  size=296  callers=0
// program: bmminer


void FUN_000214f4(int param_1)

{
  ulong extraout_r3;
  ulong param3;
  uint in_fpscr;
  undefined4 uVar1;
  undefined4 extraout_s1;
  char local_818 [2064];
  
  local_818[0] = '\0';
  local_818[1] = '\0';
  local_818[2] = '\0';
  local_818[3] = '\0';
  local_818[4] = '\0';
  local_818[5] = '\0';
  local_818[6] = '\0';
  local_818[7] = '\0';
  local_818[8] = '\0';
  local_818[9] = '\0';
  local_818[10] = '\0';
  local_818[0xb] = '\0';
  local_818[0xc] = '\0';
  local_818[0xd] = '\0';
  local_818[0xe] = '\0';
  local_818[0xf] = '\0';
  if (param_1 == 0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(local_818 + 0x10,0x800,"%s: input bad json param\n","api_miner_rate_30m");
      FUN_00032218(3,local_818 + 0x10,0);
      return;
    }
  }
  else {
    uVar1 = FUN_00020228();
    param3 = extraout_r3;
    if ((double)CONCAT44(extraout_s1,uVar1) < 0.01) {
      VectorSignedToFloat(DAT_0071e840,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      VectorSignedToFloat(DAT_0071c78c,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      param3 = DAT_0071c78c;
    }
    snprintf(local_818,0x10,"%.2lf",param3);
    uVar1 = FUN_00055ee4(local_818);
    FUN_00056774(param_1,"rate_30m",uVar1);
  }
  return;
}

