// FUN_0003f370 @ 0003f370  size=2004
// callers: [FUN_000405b4, FUN_000418fc]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f370(int param_1,int param_2)

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
  undefined4 local_830;
  char acStack_82c [4];
  char acStack_828 [4];
  char acStack_824 [4];
  undefined1 local_820;
  
  if ((DAT_0050748c == (int *)0x0) || (DAT_0050748c[1] == 0)) {
    if (DAT_00087bbc < 4) {
      return;
    }
    local_830 = s_Handle_is_NULL__000701e4._0_4_;
    acStack_82c = (char  [4])s_Handle_is_NULL__000701e4._4_4_;
    acStack_828 = (char  [4])s_Handle_is_NULL__000701e4._8_4_;
    acStack_824 = (char  [4])s_Handle_is_NULL__000701e4._12_4_;
    local_820 = (undefined1)ram0x000701f4;
    FUN_00032218(3,&local_830,0);
    return;
  }
  if (DAT_00087bbc < 4) goto LAB_0003f3bc;
  snprintf((char *)&local_830,0x800,"chain %d stats:\n",param_1);
  FUN_00032eb0(3,&local_830,0);
  if (DAT_00087bbc < 4) {
LAB_0003f7d4:
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_top_check_fail",
               *(int *)(param_2 + (param_1 + 0x202a08) * 4));
      FUN_00032eb0(3,&local_830,0);
      if (DAT_00087bbc < 4) goto LAB_0003f3bc;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_crc_err",
               *(int *)(param_2 + (param_1 + 0x202a0c) * 4));
      FUN_00032eb0(3,&local_830,0);
      goto LAB_0003f86c;
    }
LAB_0003f904:
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_extra",
               *(int *)(param_2 + (param_1 + 0x202a18) * 4));
      FUN_00032eb0(3,&local_830,0);
      if (DAT_00087bbc < 4) goto LAB_0003f3bc;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_unknown_err",
               *(int *)(param_2 + (param_1 + 0x202a1c) * 4));
      FUN_00032eb0(3,&local_830,0);
      goto LAB_0003f99c;
    }
LAB_0003fa34:
    if (DAT_00087bbc < 4) goto LAB_0003f3bc;
    snprintf((char *)&local_830,0x800,"%-30s : %.2f\n","stddev",
             (double)*(float *)(param_2 + (param_1 + 0x202a24) * 4 + 4));
    FUN_00032eb0(3,&local_830,0);
    if (DAT_00087bbc < 4) goto LAB_0003f3bc;
    local_830 = CONCAT22(local_830._2_2_,10);
    FUN_00032eb0(3,&local_830,0);
  }
  else {
    iVar1 = FUN_0002006c();
    iVar4 = FUN_0002002c();
    snprintf((char *)&local_830,0x800,"%-30s : %d\n","send_nonce_num",iVar4 * iVar1 * 8);
    FUN_00032eb0(3,&local_830,0);
    if (DAT_00087bbc < 4) goto LAB_0003f3bc;
    snprintf((char *)&local_830,0x800,"%-30s : %d\n","recv_nonce_num",
             *(int *)(param_2 + (param_1 + 0x202800) * 4));
    FUN_00032eb0(3,&local_830,0);
    if (3 < DAT_00087bbc) {
      uVar2 = *(undefined4 *)(param_2 + (param_1 + 0x202800) * 4);
      iVar1 = FUN_0002006c();
      fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      iVar4 = FUN_0002002c();
      fVar6 = (float)VectorSignedToFloat(iVar4 * iVar1 * 8,(byte)(in_fpscr >> 0x16) & 3);
      snprintf((char *)&local_830,0x800,"%-30s : %f\n","nonce_return_rate",(double)(fVar7 / fVar6));
      FUN_00032eb0(3,&local_830,0);
      if (DAT_00087bbc < 4) goto LAB_0003f3bc;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_repeated",
               *(int *)(param_2 + (param_1 + 0x202a04) * 4));
      FUN_00032eb0(3,&local_830,0);
      goto LAB_0003f7d4;
    }
LAB_0003f86c:
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_invalid",
               *(int *)(param_2 + (param_1 + 0x202a10) * 4));
      FUN_00032eb0(3,&local_830,0);
      if (DAT_00087bbc < 4) goto LAB_0003f3bc;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_hw",
               *(int *)(param_2 + (param_1 + 0x202a14) * 4));
      FUN_00032eb0(3,&local_830,0);
      goto LAB_0003f904;
    }
LAB_0003f99c:
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","invalid_asic_num",
               *(int *)(param_2 + (param_1 + 0x202a20) * 4 + 4));
      FUN_00032eb0(3,&local_830,0);
      if (DAT_00087bbc < 4) goto LAB_0003f3bc;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","invalid_chain_num",
               *(int *)(&DAT_0080a880 + param_2));
      FUN_00032eb0(3,&local_830,0);
      goto LAB_0003fa34;
    }
  }
  if (3 < DAT_00087bbc) {
    snprintf((char *)&local_830,0x800,"Chain %d nonce:\n",param_1);
    FUN_00032218(3,&local_830,0);
  }
LAB_0003f3bc:
  iVar1 = FUN_0002002c();
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      if (3 < DAT_00087bbc) {
        snprintf((char *)&local_830,0x800,"IC[%03d]:%04d ",iVar4,
                 *(int *)(&DAT_00809000 + param_2 + param_1 * 0x400 + iVar4 * 4));
        FUN_00032eb0(3,&local_830,0);
      }
      iVar4 = iVar4 + 1;
      uVar2 = FUN_0002003c();
      FUN_000673ec(iVar4,uVar2);
      if ((extraout_r1 == 0) && (3 < DAT_00087bbc)) {
        local_830 = CONCAT22(local_830._2_2_,10);
        FUN_00032eb0(3,&local_830);
      }
    } while (iVar4 != iVar1);
  }
  if (DAT_00087bbc < 4) {
    if (*DAT_0050748c == 0xa1) {
      return;
    }
  }
  else {
    local_830 = CONCAT22(local_830._2_2_,10);
    FUN_00032eb0(3,&local_830,0);
    if (*DAT_0050748c == 0xa1) {
      return;
    }
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_830,0x800,"Chain %d domain:\n",param_1);
      FUN_00032eb0(3,&local_830,0);
    }
  }
  param3 = 0;
  iVar1 = FUN_0002001c();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_0002008c();
      for (uVar5 = 0; uVar3 = FUN_0002008c(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
        if (3 < DAT_00087bbc) {
          snprintf((char *)&local_830,0x800,"D[%02d]:%04d ",uVar5 + param3 * iVar1,
                   *(int *)(&DAT_0080a010 +
                           param_2 + (param_1 * 0x40 + param3 * iVar1) * 4 + uVar5 * 4));
          FUN_00032eb0(3,&local_830,0);
        }
      }
      iVar1 = FUN_0002008c();
      if (iVar1 < 2) {
LAB_0003f5dc:
        if (3 < DAT_00087bbc) {
          local_830 = CONCAT22(local_830._2_2_,10);
          FUN_00032eb0(3,&local_830,0);
        }
      }
      else if (3 < DAT_00087bbc) {
        snprintf((char *)&local_830,0x800,"D_BIG[%02d]:%05d",param3,
                 *(int *)(&DAT_0080a410 + param_2 + param_1 * 0x100 + param3 * 4));
        FUN_00032eb0(3,&local_830,0);
        goto LAB_0003f5dc;
      }
      param3 = param3 + 1;
      uVar5 = FUN_0002001c();
    } while (param3 < uVar5);
  }
  if (DAT_00087bbc < 4) {
    return;
  }
  local_830._0_3_ = (undefined3)ram0x00072610;
  FUN_00032eb0(3,&local_830,0);
  return;
}


