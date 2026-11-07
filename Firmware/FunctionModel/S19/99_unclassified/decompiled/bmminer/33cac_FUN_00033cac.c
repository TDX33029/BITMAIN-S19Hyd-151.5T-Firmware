// FUN_00033cac @ 00033cac  size=452  callers=1
// program: bmminer


undefined4 FUN_00033cac(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char local_810 [2052];
  
  if (*param_2 == 0) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (param_3 != 0) {
    if (param_2[1] == 0) {
LAB_00033dc4:
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
        builtin_strncpy(local_810,"hex2bin str truncated",0x16);
        FUN_00032218(3,local_810,0);
      }
    }
    else {
      uVar3 = *(uint *)(&DAT_0006d91c + (uint)param_2[1] * 4);
      uVar4 = *(uint *)(&DAT_0006d91c + (uint)*param_2 * 4);
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
          if (*pbVar2 == 0) goto LAB_00033dc4;
          uVar4 = *(uint *)(&DAT_0006d91c + (uint)*pbVar1 * 4);
          uVar3 = *(uint *)(&DAT_0006d91c + (uint)*pbVar2 * 4);
          param_1 = param_1 + 1;
        } while (-1 < (int)(uVar4 | uVar3));
      }
      if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
        builtin_strncpy(local_810,"hex2bin scan failed",0x14);
        FUN_00032218(3,local_810,0);
        return 0;
      }
    }
    return 0;
  }
  return 0;
}

