// FUN_012440e4 @ 012440e4 size=396 calls_out=6 calls_in=1
// strings: 

void FUN_012440e4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  uint local_f8;
  int local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_01a56a10(&local_104);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x01244124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01244128 + *(int *)(&DAT_01244128 + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_c8 = CONCAT31(local_c8._1_3_,8);
    FUN_01a41ac0(&local_f8,&local_c8,&local_68,&DAT_01cf9914);
  }
  else if (iVar1 == 2) {
    FUN_01bed4e2(&local_c8,param_2 + 2,0x60);
    local_68 = param_2[4];
    local_64 = param_2[5];
    iStack_60 = param_2[6];
    iStack_5c = param_2[7];
    iStack_58 = param_2[8];
    local_54 = param_2[9];
    local_50 = param_2[10];
    iStack_4c = param_2[0xb];
    iStack_48 = param_2[0xc];
    iStack_44 = param_2[0xd];
    iStack_40 = param_2[0xe];
    iStack_3c = param_2[0xf];
    local_30 = local_70;
    local_34 = local_74;
    local_38 = local_78;
    FUN_01a53c68(auStack_90);
    FUN_012399b4(&local_f8,&local_68);
  }
  else {
    local_bc = param_2[4];
    iStack_b8 = param_2[5];
    iStack_b4 = param_2[6];
    local_c8 = param_2[1];
    iStack_c4 = param_2[2];
    iStack_c0 = param_2[3];
    FUN_0124aa58(&local_f8);
  }
  if (local_f8 == 2) {
    param_1[1] = local_f4;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_ec;
    *param_1 = 2;
  }
  else {
    local_68 = local_f4;
    local_64 = uStack_f0;
    uVar2 = 1;
    if ((local_f8 & 1) == 0) {
      local_64 = local_fc;
      local_68 = local_100;
      uVar2 = local_104;
    }
    *param_1 = uVar2;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = uStack_ec;
    param_1[4] = uStack_e8;
    param_1[5] = uStack_e4;
    param_1[6] = local_e0;
    param_1[7] = uStack_dc;
    param_1[8] = uStack_d8;
    param_1[9] = uStack_d4;
    param_1[10] = uStack_d0;
    param_1[0xb] = uStack_cc;
  }
  return;
}

