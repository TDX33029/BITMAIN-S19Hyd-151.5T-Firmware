// FUN_0102fc68 @ 0102fc68 size=684 calls_out=7 calls_in=3
// strings: 

void FUN_0102fc68(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_1264;
  int local_125c;
  int local_1258;
  int local_1254;
  int local_1250;
  undefined4 local_124c;
  undefined4 local_1248;
  int local_1244;
  int local_1240;
  int local_123c;
  undefined4 local_1238;
  int local_1234;
  int local_1230;
  int iStack_122c;
  int iStack_1228;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar3 = param_2[2];
  iVar6 = param_2[1];
  local_1254 = 8;
  iVar5 = iVar3 * 0x1130 + iVar6;
  local_1264 = 8;
  local_1238 = *param_2;
  local_1248 = 1;
  local_1250 = 0;
  local_1258 = 0;
  local_1244 = 0;
  local_125c = 0;
  local_124c = 0;
  local_1240 = iVar6;
  local_123c = iVar6;
  local_1234 = iVar5;
  if (iVar3 != 0) {
    iVar3 = iVar3 * 0x1130;
    do {
      FUN_01bed4e2(&local_1230,iVar6,0x1130);
      iVar6 = iVar6 + 0x1130;
      if (local_1230 == 3) {
LAB_0102fd5c:
        FUN_0121f860(&local_124c);
      }
      else {
        FUN_014c2740(&local_100,&local_1230);
        iVar2 = local_cc;
        if (local_cc == -0x80000000) goto LAB_0102fd5c;
        local_b8 = local_100;
        uStack_b4 = uStack_fc;
        uStack_b0 = uStack_f8;
        uStack_ac = uStack_f4;
        local_a8 = local_f0;
        uStack_a4 = uStack_ec;
        uStack_a0 = uStack_e8;
        uStack_9c = uStack_e4;
        local_98 = local_e0;
        uStack_94 = uStack_dc;
        uStack_90 = uStack_d8;
        uStack_8c = uStack_d4;
        uStack_88 = uStack_d0;
        local_84 = local_cc;
        local_80 = local_c8;
        uStack_7c = uStack_c4;
        uStack_78 = uStack_c0;
        uStack_74 = uStack_bc;
        if (local_1258 == local_125c) {
          FUN_0132b898(&local_1258,local_125c,1,8,0x48);
          local_1264 = local_1254;
          local_125c = local_1250;
        }
        local_70 = local_100;
        uStack_6c = uStack_fc;
        uStack_68 = uStack_f8;
        uStack_64 = uStack_f4;
        local_60 = local_f0;
        uStack_5c = uStack_ec;
        uStack_58 = uStack_e8;
        uStack_54 = uStack_e4;
        local_50 = local_e0;
        uStack_4c = uStack_dc;
        uStack_48 = uStack_d8;
        uStack_44 = uStack_d4;
        uStack_40 = uStack_d0;
        local_38 = local_c8;
        uStack_34 = uStack_c4;
        uStack_30 = uStack_c0;
        uStack_2c = uStack_bc;
        local_3c = 0x80000000;
        puVar4 = (undefined4 *)(local_1264 + local_125c * 0x48);
        *puVar4 = local_100;
        puVar4[1] = uStack_fc;
        puVar4[2] = uStack_f8;
        puVar4[3] = uStack_f4;
        puVar4[4] = local_f0;
        puVar4[5] = uStack_ec;
        puVar4[6] = uStack_e8;
        puVar4[7] = uStack_e4;
        puVar4[8] = local_e0;
        puVar4[9] = uStack_dc;
        puVar4[10] = uStack_d8;
        puVar4[0xb] = uStack_d4;
        puVar4[0xc] = uStack_d0;
        puVar4[0xd] = iVar2;
        puVar4[0xe] = local_c8;
        puVar4[0xf] = uStack_c4;
        puVar4[0x10] = uStack_c0;
        puVar4[0x11] = uStack_bc;
        local_1250 = local_125c + 1;
        FUN_00db2144(&local_70);
        local_125c = local_125c + 1;
      }
      iVar3 = iVar3 + -0x1130;
    } while (iVar3 != 0);
    local_123c = iVar5;
  }
  FUN_00db216c(&local_1240);
  local_1230 = local_1258;
  iStack_122c = local_1254;
  iStack_1228 = local_1250;
  *param_1 = local_1258;
  param_1[1] = local_1254;
  param_1[2] = local_1250;
  iVar3 = param_2[3];
  uVar1 = *(undefined1 *)((int)param_2 + 0x19);
  param_1[3] = local_1244;
  *(undefined1 *)(param_1 + 4) = uVar1;
  if (iVar3 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar3,param_2[4]);
  return;
}

