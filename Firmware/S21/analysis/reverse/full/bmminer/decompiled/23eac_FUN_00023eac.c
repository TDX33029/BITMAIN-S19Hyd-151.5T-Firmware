// FUN_00023eac @ 00023eac  size=276  callers=0
// program: bmminer


undefined4 FUN_00023eac(uint *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  char local_2008 [8184];
  
  puVar1 = (uint *)FUN_00023d4c(param_4);
  if (param_3 != 1) {
    if (param_3 == 2) {
      if ((int)param_2 < 0) {
        param_2 = param_2 + 3;
      }
      if (0 < (int)param_2 >> 2) {
        puVar3 = param_1;
        do {
          puVar4 = puVar3 + 1;
          *puVar3 = *puVar1 ^ *puVar3;
          puVar3 = puVar4;
        } while (puVar4 != param_1 + ((int)param_2 >> 2));
      }
    }
    return 1;
  }
  if ((param_2 & 7) != 0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    builtin_strncpy(local_2008,"XXTEA requires the input as 64-bit aligned, fail to decode!\n",0x3d)
    ;
    FUN_0004948c(3,local_2008,0);
    return 0;
  }
  uVar2 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  FUN_0002419c(param_1,(int)uVar2 >> 2,puVar1);
  return 1;
}

