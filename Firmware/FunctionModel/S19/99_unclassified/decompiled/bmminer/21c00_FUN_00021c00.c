// FUN_00021c00 @ 00021c00  size=244  callers=0
// program: bmminer


void FUN_00021c00(int param_1,uint param_2)

{
  int param3;
  undefined4 uVar1;
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
  if (param_1 != 0 && param_2 < 4) {
    param3 = FUN_0001d594(param_2);
    snprintf(local_818,0x10,"%d",param3);
    uVar1 = FUN_00055ee4(local_818);
    FUN_00056774(param_1,"rate_ideal",uVar1);
    return;
  }
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
    return;
  }
  snprintf(local_818 + 0x10,0x800,"%s: input bad param\n","api_miner_chain_rate_ideal");
  FUN_00032218(3,local_818 + 0x10,0);
  return;
}

