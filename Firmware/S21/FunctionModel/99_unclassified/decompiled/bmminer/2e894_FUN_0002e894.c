// FUN_0002e894 @ 0002e894  size=236  callers=0
// program: bmminer


void FUN_0002e894(int param_1)

{
  undefined4 uVar1;
  ulong param3;
  uint in_fpscr;
  char local_2020 [8212];
  
  local_2020[4] = '\0';
  local_2020[5] = '\0';
  local_2020[6] = '\0';
  local_2020[7] = '\0';
  local_2020[8] = '\0';
  local_2020[9] = '\0';
  local_2020[10] = '\0';
  local_2020[0xb] = '\0';
  local_2020[0xc] = '\0';
  local_2020[0xd] = '\0';
  local_2020[0xe] = '\0';
  local_2020[0xf] = '\0';
  local_2020[0] = '\0';
  local_2020[1] = '\0';
  local_2020[2] = '\0';
  local_2020[3] = '\0';
  if (param_1 != 0) {
    uVar1 = FUN_00025728();
    VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    snprintf(local_2020,0x10,"%.2lf",param3);
    uVar1 = FUN_00080268(local_2020);
    FUN_0007ec50(param_1,"rate_ideal",uVar1);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(local_2020 + 0x10,0x2000,"%s: input bad json param\n","api_miner_rate_ideal");
    FUN_0004948c(3,local_2020 + 0x10,0);
  }
  return;
}

