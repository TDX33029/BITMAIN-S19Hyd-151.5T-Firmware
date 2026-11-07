// FUN_00b0319c @ 00b0319c size=972 calls_out=4 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00b0319c(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint local_100;
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
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = DAT_01d4badc;
  FUN_006666fc(&local_120,DAT_01d4babc,DAT_01d4bac0);
  FUN_006666fc(&local_110,DAT_01d4bac8,DAT_01d4bacc);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(DAT_01d4ba48 & 0xff) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    local_100 = DAT_01d4ba48;
    uStack_fc = DAT_01d4ba4c;
    local_f8 = DAT_01d4ba50;
    uStack_f4 = DAT_01d4ba54;
    uStack_f0 = DAT_01d4ba58;
    uStack_ec = DAT_01d4ba5c;
    goto LAB_00b0329c;
  case 2:
    local_f8 = DAT_01d4ba50;
    uStack_f4 = DAT_01d4ba54;
    uStack_f0 = DAT_01d4ba58;
    uStack_ec = DAT_01d4ba5c;
    uVar2 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_100 | 4,DAT_01d4ba50,DAT_01d4ba54);
    uVar2 = 3;
    break;
  case 4:
    FUN_01961458((uint)&local_100 | 4,DAT_01d4ba50,DAT_01d4ba54);
    uVar2 = 4;
    break;
  case 5:
    FUN_01960d00((uint)&local_100 | 4,&DAT_01d4ba4c);
    uVar2 = 5;
  }
  local_100 = CONCAT31(local_100._1_3_,uVar2);
LAB_00b0329c:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_01d4ba18) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_e8 = CONCAT31(local_e8._1_3_,6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_01d4ba30) {
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_d0 = CONCAT31(local_d0._1_3_,6);
  uVar4 = 0xb03470;
  FUN_01318534(&local_b8,DAT_01d4bad4,DAT_01d4bad8);
  uVar2 = DAT_01d4badd;
  if (DAT_01d4ba88 == -0x80000000) {
    local_a8 = 0x80000000;
  }
  else {
    uVar4 = 0xb034a0;
    FUN_006666fc(&local_a8,DAT_01d4ba8c,DAT_01d4ba90);
  }
  if (DAT_01d4ba94 == -0x80000000) {
    local_98 = 0x80000000;
  }
  else {
    uVar4 = 0xb034cc;
    FUN_006666fc(&local_98,DAT_01d4ba98,DAT_01d4ba9c);
  }
  if (DAT_01d4baa0 == -0x80000000) {
    local_88 = 0x80000000;
  }
  else {
    uVar4 = 0xb034f8;
    FUN_006666fc(&local_88,DAT_01d4baa4,DAT_01d4baa8);
  }
  if (DAT_01d4baac == -0x80000000) {
    local_78 = 0x80000000;
  }
  else {
    uVar4 = 0xb03524;
    FUN_006666fc(&local_78,DAT_01d4bab0,DAT_01d4bab4);
  }
  if (DAT_01d4ba78 == -0x80000000) {
    local_4c = 0x80000000;
    local_48 = &local_120;
    local_44 = uVar4;
    goto LAB_00b0363c;
  }
  FUN_006666fc(&local_4c,DAT_01d4ba7c,DAT_01d4ba80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(DAT_01d4ba60 & 0xff) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    local_40 = DAT_01d4ba60;
    uStack_3c = DAT_01d4ba64;
    local_38 = DAT_01d4ba68;
    uStack_34 = DAT_01d4ba6c;
    uStack_30 = DAT_01d4ba70;
    uStack_2c = DAT_01d4ba74;
    goto LAB_00b03620;
  case 2:
    local_38 = DAT_01d4ba68;
    uStack_34 = DAT_01d4ba6c;
    uStack_30 = DAT_01d4ba70;
    uStack_2c = DAT_01d4ba74;
    uVar3 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_40 | 4,DAT_01d4ba68,DAT_01d4ba6c);
    uVar3 = 3;
    break;
  case 4:
    FUN_01961458((uint)&local_40 | 4,DAT_01d4ba68,DAT_01d4ba6c);
    uVar3 = 4;
    break;
  case 5:
    FUN_01960d00((uint)&local_40 | 4,&DAT_01d4ba64);
    uVar3 = 5;
  }
  local_40 = CONCAT31(local_40._1_3_,uVar3);
LAB_00b03620:
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = local_38;
  uStack_5c = uStack_34;
  uStack_58 = uStack_30;
  uStack_54 = uStack_2c;
LAB_00b0363c:
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
  param_1[0x19] = local_48;
  param_1[0x1a] = local_44;
  return;
}

