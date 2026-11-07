// FUN_0004b1b4 @ 0004b1b4  size=452  callers=1
// program: bmminer


undefined4 FUN_0004b1b4(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char local_2010 [8196];
  
  if (*param_2 == 0) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (param_3 != 0) {
    if (param_2[1] == 0) {
LAB_0004b2cc:
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        builtin_strncpy(local_2010,"hex2bin str truncated",0x16);
        FUN_0004948c(3,local_2010,0);
      }
    }
    else {
      uVar3 = *(uint *)(&DAT_000a30a0 + (uint)param_2[1] * 4);
      uVar4 = *(uint *)(&DAT_000a30a0 + (uint)*param_2 * 4);
      if (-1 < (int)(uVar3 | uVar4)) {
        param_2 = param_2 + 4;
        do {
          param_3 = param_3 + -1;
          *param_1 = (byte)uVar3 | (byte)(uVar4 << 4);
          pbVar1 = param_2 + -2;
          if (*pbVar1 == 0) {
            if (param_3 == 0) {
              return 1;
            }
            return 0;
          }
          if (param_3 == 0) {
            return 0;
          }
          pbVar2 = param_2 + -1;
          param_2 = param_2 + 2;
          if (*pbVar2 == 0) goto LAB_0004b2cc;
          uVar4 = *(uint *)(&DAT_000a30a0 + (uint)*pbVar1 * 4);
          uVar3 = *(uint *)(&DAT_000a30a0 + (uint)*pbVar2 * 4);
          param_1 = param_1 + 1;
        } while (-1 < (int)(uVar4 | uVar3));
      }
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        builtin_strncpy(local_2010,"hex2bin scan failed",0x14);
        FUN_0004948c(3,local_2010,0);
        return 0;
      }
    }
    return 0;
  }
  return 0;
}

