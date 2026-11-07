// FUN_0005adf4 @ 0005adf4  size=2380  callers=2
// program: bmminer


void FUN_0005adf4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  uint param3;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 local_2030;
  char acStack_202c [8192];
  
  if ((DAT_00944b84 == (int *)0x0) || (DAT_00944b84[1] == 0)) {
    if (DAT_000be63c < 4) {
      return;
    }
    local_2030._0_1_ = 'H';
    local_2030._1_1_ = 'a';
    local_2030._2_1_ = 'n';
    local_2030._3_1_ = 'd';
    builtin_strncpy(acStack_202c,"le is NULL.\n",0xd);
    FUN_0004948c(3,&local_2030,0);
    return;
  }
  if (DAT_000be63c < 4) goto LAB_0005ae40;
  memset(&local_2030,0,0x2000);
  snprintf((char *)&local_2030,0x2000,"chain %d stats:\n",param_1);
  FUN_0004a3a4(3,&local_2030,0);
  if (DAT_000be63c < 4) {
LAB_0005b310:
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_top_check_fail",
               *(int *)(param_2 + (param_1 + 0x3fea08) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      if (DAT_000be63c < 4) goto LAB_0005ae40;
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_crc_err",
               *(int *)(param_2 + (param_1 + 0x3fea0c) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      goto LAB_0005b3c8;
    }
LAB_0005b480:
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_extra",
               *(int *)(param_2 + (param_1 + 0x3fea18) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      if (DAT_000be63c < 4) goto LAB_0005ae40;
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_unknown_err",
               *(int *)(param_2 + (param_1 + 0x3fea1c) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      goto LAB_0005b538;
    }
LAB_0005b5f0:
    if (DAT_000be63c < 4) goto LAB_0005ae40;
    memset(&local_2030,0,0x2000);
    snprintf((char *)&local_2030,0x2000,"%-30s : %.2f\n","stddev",
             (double)*(float *)(param_2 + (param_1 + 0x3fea24) * 4 + 4));
    FUN_0004a3a4(3,&local_2030,0);
    if (DAT_000be63c < 4) goto LAB_0005ae40;
    memset(&local_2030,0,0x2000);
    local_2030 = CONCAT22(local_2030._2_2_,10);
    FUN_0004a3a4(3,&local_2030,0);
  }
  else {
    memset(&local_2030,0,0x2000);
    iVar1 = FUN_0002a554();
    iVar4 = FUN_0002a514();
    snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","send_nonce_num",iVar4 * iVar1 * 8);
    FUN_0004a3a4(3,&local_2030,0);
    if (DAT_000be63c < 4) goto LAB_0005ae40;
    memset(&local_2030,0,0x2000);
    snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","recv_nonce_num",
             *(int *)(param_2 + (param_1 + 0x3fe800) * 4));
    FUN_0004a3a4(3,&local_2030,0);
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      uVar2 = *(undefined4 *)(param_2 + (param_1 + 0x3fe800) * 4);
      iVar1 = FUN_0002a554();
      fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      iVar4 = FUN_0002a514();
      fVar6 = (float)VectorSignedToFloat(iVar4 * iVar1 * 8,(byte)(in_fpscr >> 0x16) & 3);
      snprintf((char *)&local_2030,0x2000,"%-30s : %f\n","nonce_return_rate",(double)(fVar7 / fVar6)
              );
      FUN_0004a3a4(3,&local_2030,0);
      if (DAT_000be63c < 4) goto LAB_0005ae40;
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_repeated",
               *(int *)(param_2 + (param_1 + 0x3fea04) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      goto LAB_0005b310;
    }
LAB_0005b3c8:
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_invalid",
               *(int *)(param_2 + (param_1 + 0x3fea10) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      if (DAT_000be63c < 4) goto LAB_0005ae40;
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","nonce_num_hw",
               *(int *)(param_2 + (param_1 + 0x3fea14) * 4));
      FUN_0004a3a4(3,&local_2030,0);
      goto LAB_0005b480;
    }
LAB_0005b538:
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","invalid_asic_num",
               *(int *)(param_2 + (param_1 + 0x3fea20) * 4 + 4));
      FUN_0004a3a4(3,&local_2030,0);
      if (DAT_000be63c < 4) goto LAB_0005ae40;
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"%-30s : %d\n","invalid_chain_num",
               *(int *)(&DAT_00ffa880 + param_2));
      FUN_0004a3a4(3,&local_2030,0);
      goto LAB_0005b5f0;
    }
  }
  if (3 < DAT_000be63c) {
    snprintf((char *)&local_2030,0x2000,"Chain %d nonce:\n",param_1);
    FUN_0004948c(3,&local_2030,0);
  }
LAB_0005ae40:
  iVar1 = FUN_0002a514();
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      if (3 < DAT_000be63c) {
        memset(&local_2030,0,0x2000);
        snprintf((char *)&local_2030,0x2000,"IC[%03d]:%04d ",iVar4,
                 *(int *)(&DAT_00ff9000 + param_2 + param_1 * 0x400 + iVar4 * 4));
        FUN_0004a3a4(3,&local_2030,0);
      }
      iVar4 = iVar4 + 1;
      uVar2 = FUN_0002a524();
      FUN_0009863c(iVar4,uVar2);
      if ((extraout_r1 == 0) && (3 < DAT_000be63c)) {
        memset(&local_2030,0,0x2000);
        local_2030 = CONCAT22(local_2030._2_2_,10);
        FUN_0004a3a4(3,&local_2030,0);
      }
    } while (iVar4 != iVar1);
  }
  if (DAT_000be63c < 4) {
    if (*DAT_00944b84 == 0xa1) {
      return;
    }
  }
  else {
    memset(&local_2030,0,0x2000);
    local_2030 = CONCAT22(local_2030._2_2_,10);
    FUN_0004a3a4(3,&local_2030,0);
    if (*DAT_00944b84 == 0xa1) {
      return;
    }
    if (3 < DAT_000be63c) {
      memset(&local_2030,0,0x2000);
      snprintf((char *)&local_2030,0x2000,"Chain %d domain:\n",param_1);
      FUN_0004a3a4(3,&local_2030,0);
    }
  }
  param3 = 0;
  iVar1 = FUN_0002a504();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_0002a574();
      for (uVar5 = 0; uVar3 = FUN_0002a574(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
        if (3 < DAT_000be63c) {
          memset(&local_2030,0,0x2000);
          snprintf((char *)&local_2030,0x2000,"D[%02d]:%04d ",uVar5 + param3 * iVar1,
                   *(int *)(&DAT_00ffa010 +
                           param_2 + (param_1 * 0x40 + param3 * iVar1) * 4 + uVar5 * 4));
          FUN_0004a3a4(3,&local_2030,0);
        }
      }
      iVar1 = FUN_0002a574();
      if (iVar1 < 2) {
LAB_0005b0a8:
        if (3 < DAT_000be63c) {
          memset(&local_2030,0,0x2000);
          local_2030 = CONCAT22(local_2030._2_2_,10);
          FUN_0004a3a4(3,&local_2030,0);
        }
      }
      else if (3 < DAT_000be63c) {
        memset(&local_2030,0,0x2000);
        snprintf((char *)&local_2030,0x2000,"D_BIG[%02d]:%05d",param3,
                 *(int *)(&DAT_00ffa410 + param_2 + param_1 * 0x100 + param3 * 4));
        FUN_0004a3a4(3,&local_2030,0);
        goto LAB_0005b0a8;
      }
      param3 = param3 + 1;
      uVar5 = FUN_0002a504();
    } while (param3 < uVar5);
  }
  if (DAT_000be63c < 4) {
    return;
  }
  memset(&local_2030,0,0x2000);
  local_2030 = CONCAT13(local_2030._3_1_,0xa0a);
  FUN_0004a3a4(3,&local_2030,0);
  return;
}

