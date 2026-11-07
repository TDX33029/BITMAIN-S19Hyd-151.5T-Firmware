// FUN_0003ee7c @ 0003ee7c  size=552  callers=1
// program: bmminer


undefined4 FUN_0003ee7c(float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  char local_830 [2052];
  
  iVar1 = FUN_0003e510();
  if (4 < DAT_00087bbc) {
    snprintf(local_830,0x800,
             "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n"
             ,param_4,(double)param_1,(double)param_2,(double)param_3);
    FUN_00032218(4,local_830,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_830,"Handle is NULL.\n",0x11);
      FUN_00032218(3,local_830,0);
      return 1;
    }
  }
  else {
    iVar2 = FUN_0002006c();
    iVar3 = FUN_0002002c();
    iVar1 = iVar1 + param_4 * 4;
    fVar4 = (float)VectorSignedToFloat(iVar3 * iVar2 * 8,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = (uint)(0.0 < fVar4 * param_1) * (int)(fVar4 * param_1);
    if (*(uint *)(&DAT_0080a850 + iVar1) <= uVar5) {
      uVar7 = *(undefined4 *)(&DAT_0080a000 + iVar1);
      iVar1 = FUN_0002006c();
      fVar8 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      iVar2 = FUN_0002002c();
      uVar5 = DAT_00087bbc;
      iVar3 = DAT_0050748c + param_4 * 4;
      fVar6 = (float)VectorSignedToFloat(iVar2 * iVar1 * 8,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = *(float *)(iVar3 + 0x20);
      fVar8 = fVar8 / fVar6;
      *(float *)(iVar3 + 0x20) = fVar8;
      if (*(float *)(iVar3 + 0x30) < fVar8) {
        *(float *)(iVar3 + 0x30) = fVar8;
      }
      if (uVar5 < 4) {
        return 0;
      }
      snprintf(local_830,0x800,
               "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n"
               ,param_4,(double)fVar8,(double)fVar4,(double)*(float *)(iVar3 + 0x30));
      FUN_00032218(3,local_830,0);
      return 0;
    }
    if (3 < DAT_00087bbc) {
      snprintf(local_830,0x800,"chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",param_4,
               *(uint *)(&DAT_0080a850 + iVar1),uVar5);
      FUN_00032218(3,local_830,0);
    }
  }
  return 1;
}

