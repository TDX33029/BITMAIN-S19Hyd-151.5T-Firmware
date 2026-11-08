// FUN_00fe51bc @ 00fe51bc size=696 calls_out=11 calls_in=1
// strings: 

void FUN_00fe51bc(uint *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_13c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 < 0) {
    uVar10 = FUN_014c82dc(param_2,&local_58,&DAT_01c1603c);
    *param_1 = 0;
    param_1[1] = uVar10;
  }
  else {
    uVar5 = param_2[2];
    iVar8 = param_2[1];
    uVar10 = uVar5;
    if (0x3fff < uVar5) {
      uVar10 = 0x4000;
    }
    uVar11 = thunk_FUN_01bee35a(*param_2,0x2c0);
    puVar6 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
    if ((char)puVar6[4] == '\0') {
      FUN_019ae6ac(&local_58);
      *puVar6 = local_58;
      puVar6[1] = uStack_54;
      puVar6[2] = uStack_50;
      puVar6[3] = uStack_4c;
      *(undefined1 *)(puVar6 + 4) = 1;
    }
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    iVar1 = iVar8 + uVar5 * 0x20;
    *puVar6 = uVar3 + 1;
    puVar6[1] = uVar4 + (0xfffffffe < uVar3);
    FUN_006e57c8(&local_118,uVar10,uVar3,uVar4,puVar6[2],puVar6[3]);
    local_13c = uVar5 & 0x7ffffff;
    puVar2 = (undefined4 *)((uint)&local_f8 | 4);
    uVar10 = 1;
    puVar6 = (uint *)((uint)&local_58 | 4);
    iVar7 = iVar8;
    for (iVar9 = uVar5 << 5; iVar7 = iVar7 + 0x20, iVar9 != 0; iVar9 = iVar9 + -0x20) {
      FUN_014f4a6c(&local_88,iVar8);
      uVar4 = local_80;
      uVar3 = local_84;
      uVar5 = local_88;
      if (local_88 == 0x80000000) {
LAB_00fe5384:
        *param_1 = 0;
        param_1[1] = local_84;
        puVar6 = &local_118;
        goto LAB_00fe5394;
      }
      FUN_00f21790(&local_88,iVar8 + 0x10);
      if (local_78 == 0x80000007) {
        FUN_019bb7e0(uVar5,uVar3);
        local_84 = local_88;
        goto LAB_00fe5384;
      }
      *puVar6 = local_88;
      puVar6[1] = local_84;
      puVar6[2] = local_80;
      puVar6[3] = uStack_7c;
      puVar6[4] = local_78;
      puVar6[5] = uStack_74;
      puVar6[6] = local_70;
      puVar6[7] = uStack_6c;
      puVar6[8] = uStack_68;
      puVar6[9] = uStack_64;
      puVar6[10] = uStack_60;
      puVar6[0xb] = uStack_5c;
      local_f8 = local_58;
      uStack_f4 = uStack_54;
      uStack_f0 = uStack_50;
      uStack_ec = uStack_4c;
      local_e8 = local_48;
      uStack_e4 = uStack_44;
      uStack_e0 = uStack_40;
      uStack_dc = uStack_3c;
      local_d8 = local_38;
      uStack_d4 = uStack_34;
      uStack_d0 = uStack_30;
      uStack_cc = uStack_2c;
      uStack_c8 = uStack_28;
      if (uVar5 == 0x80000000) {
        local_13c = uVar10;
        goto LAB_00fe53b0;
      }
      local_bc = uVar4;
      local_c0 = uVar3;
      local_c4 = uVar5;
      local_b8 = *puVar2;
      uStack_b4 = puVar2[1];
      uStack_b0 = puVar2[2];
      uStack_ac = puVar2[3];
      uStack_a8 = puVar2[4];
      uStack_a4 = puVar2[5];
      local_a0 = puVar2[6];
      uStack_9c = puVar2[7];
      uStack_98 = puVar2[8];
      uStack_94 = puVar2[9];
      uStack_90 = puVar2[10];
      uStack_8c = puVar2[0xb];
      FUN_006e5f2c(&local_58,&local_118,&local_c4);
      if (local_48 != 0x80000007) {
        FUN_00db19c4(&local_58);
      }
      iVar8 = iVar8 + 0x20;
      uVar10 = uVar10 + 1;
    }
    iVar7 = iVar1;
LAB_00fe53b0:
    *param_1 = local_118;
    param_1[1] = uStack_114;
    param_1[2] = uStack_110;
    param_1[3] = uStack_10c;
    param_1[4] = local_108;
    param_1[5] = uStack_104;
    param_1[6] = uStack_100;
    param_1[7] = uStack_fc;
    if (*param_1 != 0) {
      local_58 = *param_1;
      uStack_54 = param_1[1];
      uStack_50 = param_1[2];
      uStack_4c = param_1[3];
      local_48 = param_1[4];
      uStack_44 = param_1[5];
      uStack_40 = param_1[6];
      uStack_3c = param_1[7];
      if (iVar1 != iVar7) {
        local_f8 = local_13c;
        uVar10 = FUN_014dee0c(local_13c + ((uint)(iVar1 - iVar7) >> 5),&local_f8,&DAT_01cfa00c);
        *param_1 = 0;
        param_1[1] = uVar10;
        puVar6 = &local_58;
LAB_00fe5394:
        FUN_006b3bf4(puVar6);
      }
    }
  }
  return;
}

