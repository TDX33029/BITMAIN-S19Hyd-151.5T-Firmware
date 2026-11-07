// FUN_016d4b30 @ 016d4b30 size=800 calls_out=11 calls_in=1
// strings: internal error: entered unreachable code

void FUN_016d4b30(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  int local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int local_150 [28];
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40 [7];
  
  iVar6 = *param_2;
  uVar3 = *(undefined4 *)(iVar6 + 0x54);
  uVar5 = *(undefined4 *)(iVar6 + 0x58);
  param_3[6] = *(undefined4 *)(iVar6 + 0x50);
  param_3[7] = uVar3;
  param_3[8] = uVar5;
  if (*(int *)(iVar6 + 0x10) != 0) {
    FUN_01306fc8(&DAT_01d09df8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d4e4c);
    (*pcVar1)();
  }
  *(undefined4 *)(iVar6 + 0x10) = 0xffffffff;
  if (*(int *)(iVar6 + 0x1c) == 0) {
    local_150[0] = -0x7fffffff;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x1c) + -1;
    *(int *)(iVar6 + 0x1c) = iVar2;
    iVar2 = *(int *)(iVar6 + 0x18) + iVar2 * 0x70;
    FUN_01bed4e2(local_150,iVar2,0x70);
    if (local_150[0] == -0x80000000) {
      local_178 = *(int *)(iVar2 + 4);
      local_174 = *(int *)(iVar2 + 8);
      local_170 = *(int *)(iVar2 + 0xc);
      uStack_16c = *(undefined4 *)(iVar2 + 0x10);
      uStack_168 = *(undefined4 *)(iVar2 + 0x14);
      uStack_164 = *(undefined4 *)(iVar2 + 0x18);
      local_160 = *(undefined4 *)(iVar6 + 0x50);
      uStack_15c = *(undefined4 *)(iVar6 + 0x54);
      uStack_158 = *(undefined4 *)(iVar6 + 0x58);
      local_e0._0_4_ = *param_3;
      local_e0._4_4_ = param_3[1];
      uStack_d8 = param_3[2];
      uStack_d4 = param_3[3];
      local_d0 = param_3[4];
      uStack_cc = param_3[5];
      uStack_c8 = param_3[6];
      uStack_c4 = param_3[7];
      uStack_c0 = param_3[8];
      uVar7 = FUN_016ec68c();
      iVar2 = local_170;
      local_e0 = uVar7;
      if (local_170 == local_178) {
        FUN_015f5ab8(&local_178);
      }
      *(undefined8 *)(local_174 + iVar2 * 8) = uVar7;
      local_170 = iVar2 + 1;
      FUN_016eb854(&local_178);
      local_1b4 = CONCAT44(extraout_r1,10);
      goto LAB_016d4cf4;
    }
    if (local_150[0] != -0x7fffffff) {
      FUN_01bed4e2(&local_e0,iVar2 + 0x24,0x48);
      local_58 = *(undefined4 *)(iVar2 + 0x54);
      uStack_54 = *(undefined4 *)(iVar2 + 0x58);
      uStack_50 = *(undefined4 *)(iVar2 + 0x5c);
      uStack_4c = *(undefined4 *)(iVar2 + 0x60);
      uStack_48 = *(undefined4 *)(iVar2 + 100);
      uStack_44 = *(undefined4 *)(iVar2 + 0x68);
      local_40[0] = 0x15;
      FUN_016d4540(&local_98,param_2[1],param_2[2],&local_58,local_40);
      *param_1 = local_98;
      param_1[1] = uStack_94;
      param_1[2] = uStack_90;
      param_1[3] = uStack_8c;
      param_1[4] = uStack_88;
      param_1[5] = local_84;
      param_1[6] = uStack_80;
      param_1[7] = uStack_7c;
      param_1[8] = uStack_78;
      param_1[9] = uStack_74;
      param_1[10] = local_70;
      param_1[0xb] = uStack_6c;
      param_1[0xc] = uStack_68;
      param_1[0xd] = uStack_64;
      param_1[0xe] = uStack_60;
      param_1[0xf] = uStack_5c;
      FUN_016d7f58(&local_e0);
      FUN_016bedfc(local_150);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      FUN_016bedfc(param_3);
      return;
    }
  }
  local_e0._0_4_ = *param_3;
  local_e0._4_4_ = param_3[1];
  uStack_d8 = param_3[2];
  uStack_d4 = param_3[3];
  local_d0 = param_3[4];
  uStack_cc = param_3[5];
  uStack_c8 = param_3[6];
  uStack_c4 = param_3[7];
  uStack_c0 = param_3[8];
  local_1b4 = FUN_016ec68c();
LAB_016d4cf4:
  local_1b8 = 0x22;
  if (*(int *)(iVar6 + 0x1c) != 0) {
    iVar2 = *(int *)(iVar6 + 0x1c) + -1;
    *(int *)(iVar6 + 0x1c) = iVar2;
    iVar4 = *(int *)(iVar6 + 0x18) + iVar2 * 0x70;
    FUN_01bed4e2(local_150,iVar4,0x70);
    iVar2 = local_150[0];
    if (local_150[0] != -0x7fffffff) {
      if (local_150[0] == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d09e08);
      }
      FUN_01bed4e2(&local_e0,iVar4 + 0x24,0x48);
      local_58 = *(undefined4 *)(iVar4 + 0x54);
      uStack_54 = *(undefined4 *)(iVar4 + 0x58);
      uStack_50 = *(undefined4 *)(iVar4 + 0x5c);
      uStack_4c = *(undefined4 *)(iVar4 + 0x60);
      uStack_48 = *(undefined4 *)(iVar4 + 100);
      uStack_44 = *(undefined4 *)(iVar4 + 0x68);
      local_40[0] = 0x15;
      FUN_016d4540(&local_98,param_2[1],param_2[2],&local_58,local_40);
      *param_1 = local_98;
      param_1[1] = uStack_94;
      param_1[2] = uStack_90;
      param_1[3] = uStack_8c;
      param_1[4] = uStack_88;
      param_1[5] = local_84;
      param_1[6] = uStack_80;
      param_1[7] = uStack_7c;
      param_1[8] = uStack_78;
      param_1[9] = uStack_74;
      param_1[10] = local_70;
      param_1[0xb] = uStack_6c;
      param_1[0xc] = uStack_68;
      param_1[0xd] = uStack_64;
      param_1[0xe] = uStack_60;
      param_1[0xf] = uStack_5c;
      FUN_016d7f58(&local_e0);
      FUN_016dd868(&local_1b8);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if (iVar2 == -0x80000000) {
        FUN_016d45e8(local_150);
        return;
      }
      if (iVar2 == -0x7fffffff) {
        return;
      }
      FUN_016bedfc(local_150);
      return;
    }
  }
  *param_1 = local_1b8;
  *(undefined8 *)(param_1 + 1) = local_1b4;
  param_1[3] = uStack_1ac;
  param_1[4] = uStack_1a8;
  param_1[5] = local_1a4;
  param_1[6] = uStack_1a0;
  param_1[7] = uStack_19c;
  param_1[8] = uStack_198;
  param_1[9] = uStack_194;
  param_1[10] = local_190;
  param_1[0xb] = uStack_18c;
  param_1[0xc] = uStack_188;
  param_1[0xd] = uStack_184;
  param_1[0xe] = uStack_180;
  param_1[0xf] = uStack_17c;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  return;
}

