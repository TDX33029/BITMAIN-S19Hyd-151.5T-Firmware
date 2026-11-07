// FUN_00981e54 @ 00981e54 size=936 calls_out=4 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00981e54(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = param_2[0xc4];
  FUN_006666fc(&local_120,*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0xa8));
  FUN_006666fc(&local_110,*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x30]) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    local_100 = *(undefined4 *)(param_2 + 0x30);
    uStack_fc = *(undefined4 *)(param_2 + 0x34);
    local_f8 = *(undefined4 *)(param_2 + 0x38);
    uStack_f4 = *(undefined4 *)(param_2 + 0x3c);
    uStack_f0 = *(undefined4 *)(param_2 + 0x40);
    uStack_ec = *(undefined4 *)(param_2 + 0x44);
    goto LAB_00981f50;
  case 2:
    local_f8 = *(undefined4 *)(param_2 + 0x38);
    uStack_f4 = *(undefined4 *)(param_2 + 0x3c);
    uStack_f0 = *(undefined4 *)(param_2 + 0x40);
    uStack_ec = *(undefined4 *)(param_2 + 0x44);
    uVar2 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_100 | 4,*(undefined4 *)(param_2 + 0x38),
                 *(undefined4 *)(param_2 + 0x3c));
    uVar2 = 3;
    break;
  case 4:
    FUN_01961458((uint)&local_100 | 4,*(undefined4 *)(param_2 + 0x38),
                 *(undefined4 *)(param_2 + 0x3c));
    uVar2 = 4;
    break;
  case 5:
    FUN_01960d00((uint)&local_100 | 4,param_2 + 0x34);
    uVar2 = 5;
  }
  local_100 = CONCAT31(local_100._1_3_,uVar2);
LAB_00981f50:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*param_2) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_e8 = CONCAT31(local_e8._1_3_,6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_2[0x18]) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_d0 = CONCAT31(local_d0._1_3_,6);
  uVar5 = 0x982124;
  FUN_01318534(&local_b8,*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
  uVar2 = param_2[0xc5];
  if (*(int *)(param_2 + 0x70) == -0x80000000) {
    local_a8 = 0x80000000;
    uVar4 = extraout_r12;
  }
  else {
    uVar5 = 0x982154;
    FUN_006666fc(&local_a8,*(undefined4 *)(param_2 + 0x74),*(undefined4 *)(param_2 + 0x78));
    uVar4 = extraout_r12_00;
  }
  if (*(int *)(param_2 + 0x7c) == -0x80000000) {
    local_98 = 0x80000000;
  }
  else {
    uVar5 = 0x982180;
    FUN_006666fc(&local_98,*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84));
    uVar4 = extraout_r12_01;
  }
  if (*(int *)(param_2 + 0x88) == -0x80000000) {
    local_88 = 0x80000000;
  }
  else {
    uVar5 = 0x9821ac;
    FUN_006666fc(&local_88,*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90));
    uVar4 = extraout_r12_02;
  }
  if (*(int *)(param_2 + 0x94) == -0x80000000) {
    local_78 = 0x80000000;
  }
  else {
    uVar5 = 0x9821d8;
    FUN_006666fc(&local_78,*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
    uVar4 = extraout_r12_03;
  }
  if (*(int *)(param_2 + 0x60) == -0x80000000) {
    local_4c = 0x80000000;
    uStack_48 = uVar4;
    uStack_44 = uVar5;
    goto LAB_009822d0;
  }
  FUN_006666fc(&local_4c,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x48]) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    local_40 = *(undefined4 *)(param_2 + 0x48);
    uStack_3c = *(undefined4 *)(param_2 + 0x4c);
    local_38 = *(undefined4 *)(param_2 + 0x50);
    uStack_34 = *(undefined4 *)(param_2 + 0x54);
    uStack_30 = *(undefined4 *)(param_2 + 0x58);
    uStack_2c = *(undefined4 *)(param_2 + 0x5c);
    goto LAB_009822b8;
  case 2:
    local_38 = *(undefined4 *)(param_2 + 0x50);
    uStack_34 = *(undefined4 *)(param_2 + 0x54);
    uStack_30 = *(undefined4 *)(param_2 + 0x58);
    uStack_2c = *(undefined4 *)(param_2 + 0x5c);
    uVar3 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_40 | 4,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54)
                );
    uVar3 = 3;
    break;
  case 4:
    FUN_01961458((uint)&local_40 | 4,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54)
                );
    uVar3 = 4;
    break;
  case 5:
    FUN_01960d00((uint)&local_40 | 4,param_2 + 0x4c);
    uVar3 = 5;
  }
  local_40 = CONCAT31(local_40._1_3_,uVar3);
LAB_009822b8:
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = local_38;
  uStack_5c = uStack_34;
  uStack_58 = uStack_30;
  uStack_54 = uStack_2c;
LAB_009822d0:
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  param_1[0x28] = local_120;
  param_1[0x29] = uStack_11c;
  param_1[0x2a] = uStack_118;
  param_1[0x2b] = local_110;
  param_1[0x2c] = uStack_10c;
  param_1[0x2d] = uStack_108;
  param_1[0xc] = local_100;
  param_1[0xd] = uStack_fc;
  param_1[0xe] = local_f8;
  param_1[0xf] = uStack_f4;
  param_1[0x10] = uStack_f0;
  param_1[0x11] = uStack_ec;
  *param_1 = local_e8;
  param_1[1] = uStack_e4;
  param_1[2] = uStack_e0;
  param_1[3] = uStack_dc;
  param_1[4] = uStack_d8;
  param_1[5] = uStack_d4;
  param_1[6] = local_d0;
  param_1[7] = uStack_cc;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c4;
  param_1[10] = uStack_c0;
  param_1[0xb] = uStack_bc;
  param_1[0x2e] = local_b8;
  param_1[0x2f] = uStack_b4;
  param_1[0x30] = uStack_b0;
  *(undefined1 *)((int)param_1 + 0xc5) = uVar2;
  param_1[0x1c] = local_a8;
  param_1[0x1d] = uStack_a4;
  param_1[0x1e] = uStack_a0;
  param_1[0x1f] = local_98;
  param_1[0x20] = uStack_94;
  param_1[0x21] = uStack_90;
  param_1[0x22] = local_88;
  param_1[0x23] = uStack_84;
  param_1[0x24] = uStack_80;
  param_1[0x25] = local_78;
  param_1[0x26] = uStack_74;
  param_1[0x27] = uStack_70;
  param_1[0x12] = local_68;
  param_1[0x13] = uStack_64;
  param_1[0x14] = uStack_60;
  param_1[0x15] = uStack_5c;
  param_1[0x16] = uStack_58;
  param_1[0x17] = uStack_54;
  param_1[0x18] = local_4c;
  param_1[0x19] = uStack_48;
  param_1[0x1a] = uStack_44;
  return;
}

