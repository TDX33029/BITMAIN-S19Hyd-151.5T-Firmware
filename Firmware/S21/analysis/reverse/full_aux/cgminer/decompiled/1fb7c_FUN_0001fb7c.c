// FUN_0001fb7c @ 0001fb7c  size=420  callers=9
// program: cgminer


undefined4 FUN_0001fb7c(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char local_810 [2052];
  
  if (*param_2 == 0) {
LAB_0001fd00:
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (param_2[1] == 0) {
LAB_0001fc84:
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        builtin_strncpy(local_810,"hex2bin str truncated",0x16);
        FUN_0001dd98(3,local_810,0);
      }
    }
    else {
      uVar3 = *(uint *)(&DAT_0004c444 + (uint)param_2[1] * 4);
      uVar4 = *(uint *)(&DAT_0004c444 + (uint)*param_2 * 4);
      if (-1 < (int)(uVar3 | uVar4)) {
        param_2 = param_2 + 4;
        do {
          param_3 = param_3 + -1;
          *param_1 = (byte)uVar3 | (byte)(uVar4 << 4);
          pbVar1 = param_2 + -2;
          if (*pbVar1 == 0) goto LAB_0001fd00;
          if (param_3 == 0) {
            return 0;
          }
          pbVar2 = param_2 + -1;
          param_2 = param_2 + 2;
          if (*pbVar2 == 0) goto LAB_0001fc84;
          uVar4 = *(uint *)(&DAT_0004c444 + (uint)*pbVar1 * 4);
          uVar3 = *(uint *)(&DAT_0004c444 + (uint)*pbVar2 * 4);
          param_1 = param_1 + 1;
        } while (-1 < (int)(uVar4 | uVar3));
      }
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        builtin_strncpy(local_810,"hex2bin scan failed",0x14);
        FUN_0001dd98(3,local_810,0);
        return 0;
      }
    }
  }
  return 0;
}

