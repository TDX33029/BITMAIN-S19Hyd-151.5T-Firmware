// FUN_00021744 @ 00021744  size=232  callers=0
// program: bmminer


void FUN_00021744(int param_1)

{
  undefined4 uVar1;
  ulong param3;
  uint in_fpscr;
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
  if (param_1 != 0) {
    uVar1 = FUN_0001d93c();
    VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    snprintf(local_818,0x10,"%.2lf",param3);
    uVar1 = FUN_00055ee4(local_818);
    FUN_00056774(param_1,"rate_ideal",uVar1);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(local_818 + 0x10,0x800,"%s: input bad json param\n","api_miner_rate_ideal");
    FUN_00032218(3,local_818 + 0x10,0);
  }
  return;
}

