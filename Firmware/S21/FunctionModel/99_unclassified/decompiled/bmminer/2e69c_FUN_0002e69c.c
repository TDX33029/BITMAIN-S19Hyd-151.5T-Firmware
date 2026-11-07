// FUN_0002e69c @ 0002e69c  size=260  callers=0
// program: bmminer


void FUN_0002e69c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  char local_2018 [8208];
  
  local_2018[4] = '\0';
  local_2018[5] = '\0';
  local_2018[6] = '\0';
  local_2018[7] = '\0';
  local_2018[8] = '\0';
  local_2018[9] = '\0';
  local_2018[10] = '\0';
  local_2018[0xb] = '\0';
  local_2018[0xc] = '\0';
  local_2018[0xd] = '\0';
  local_2018[0xe] = '\0';
  local_2018[0xf] = '\0';
  local_2018[0] = '\0';
  local_2018[1] = '\0';
  local_2018[2] = '\0';
  local_2018[3] = '\0';
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(local_2018 + 0x10,0x2000,"%s: input bad json param\n","api_miner_rate_30m");
      FUN_0004948c(3,local_2018 + 0x10,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0002a740();
    if ((double)CONCAT44(extraout_s1,uVar1) < 0.01) {
      FUN_0002e320();
    }
    snprintf(local_2018,0x10,"%.2lf",(ulong)local_2018);
    uVar1 = FUN_00080268(local_2018);
    FUN_0007ec50(param_1,"rate_30m",uVar1);
  }
  return;
}

