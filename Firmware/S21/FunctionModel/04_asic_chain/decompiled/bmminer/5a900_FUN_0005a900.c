// FUN_0005a900 @ 0005a900  size=552  callers=1
// program: bmminer


undefined4 FUN_0005a900(float param_1,float param_2,float param_3,int param_4)

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
  char local_2030 [8196];
  
  iVar1 = FUN_00059f94();
  if (4 < DAT_000be63c) {
    snprintf(local_2030,0x2000,
             "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n"
             ,param_4,(double)param_1,(double)param_2,(double)param_3);
    FUN_0004948c(4,local_2030,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2030,"Handle is NULL.\n",0x11);
      FUN_0004948c(3,local_2030,0);
      return 1;
    }
  }
  else {
    iVar2 = FUN_0002a554();
    iVar3 = FUN_0002a514();
    iVar1 = iVar1 + param_4 * 4;
    fVar4 = (float)VectorSignedToFloat(iVar3 * iVar2 * 8,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = (uint)(0.0 < fVar4 * param_1) * (int)(fVar4 * param_1);
    if (*(uint *)(&DAT_00ffa850 + iVar1) <= uVar5) {
      uVar7 = *(undefined4 *)(&DAT_00ffa000 + iVar1);
      iVar1 = FUN_0002a554();
      fVar8 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
      iVar2 = FUN_0002a514();
      uVar5 = DAT_000be63c;
      iVar3 = DAT_00944b84 + param_4 * 4;
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
      snprintf(local_2030,0x2000,
               "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n"
               ,param_4,(double)fVar8,(double)fVar4,(double)*(float *)(iVar3 + 0x30));
      FUN_0004948c(3,local_2030,0);
      return 0;
    }
    if (3 < DAT_000be63c) {
      snprintf(local_2030,0x2000,"chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",param_4,
               *(uint *)(&DAT_00ffa850 + iVar1),uVar5);
      FUN_0004948c(3,local_2030,0);
    }
  }
  return 1;
}

