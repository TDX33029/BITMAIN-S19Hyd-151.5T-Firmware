// FUN_0150e610 @ 0150e610 size=1056 calls_out=10 calls_in=0
// strings: 

void FUN_0150e610(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *local_118;
  uint local_10c;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint *local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint *local_78;
  uint local_74;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48 [4];
  undefined1 auStack_38 [20];
  
  if (*param_3 == '\x05') {
    uVar9 = *(uint *)(param_3 + 0xc);
    uVar10 = 0;
    bVar15 = 0x3fffffe < uVar9;
    bVar14 = uVar9 == 0x3ffffff;
    uVar5 = uVar9 * 0x40;
    if (uVar9 < 0x4000000) {
      bVar15 = 0x7ffffffb < uVar5;
      bVar14 = uVar5 == 0x7ffffffc;
      local_118 = param_1;
    }
    if (bVar15 && !bVar14) {
LAB_0150e64c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar5);
    }
    iVar12 = 0;
    if (uVar5 == 0) {
      iVar2 = 4;
      local_10c = 0;
    }
    else {
      uVar10 = 4;
      iVar2 = FUN_01298504(uVar5,4);
      local_10c = uVar9;
      if (iVar2 == 0) goto LAB_0150e64c;
    }
    uVar5 = *(uint *)(param_3 + 4);
    uVar8 = *(uint *)(param_3 + 8);
    if (uVar5 == 0) {
      uVar9 = 0;
    }
    uVar6 = (uint)(uVar5 != 0);
    local_104 = 0;
    local_8c = 0;
    local_9c = 0;
    iVar7 = 1;
    local_108 = iVar2;
    local_a0 = uVar6;
    local_98 = uVar5;
    local_94 = uVar8;
    local_90 = uVar6;
    local_88 = uVar5;
    local_84 = uVar8;
    local_80 = uVar9;
    while( true ) {
      iVar13 = iVar7;
      uVar16 = FUN_01a41998(&local_a0);
      iVar7 = (int)uVar16;
      uVar11 = iVar13 - 1;
      if (iVar7 == 0) break;
      local_bc = *(undefined4 *)(iVar7 + 4);
      local_b8 = *(undefined4 *)(iVar7 + 8);
      local_c0 = 0x80000000;
      local_b4 = param_4;
      FUN_015737d4(&local_100,param_2,(int)((ulonglong)uVar16 >> 0x20),&local_c0,param_5,param_6);
      if (uVar11 == local_10c) {
        FUN_0155ab78(&local_10c);
        iVar2 = local_108;
      }
      puVar3 = (uint *)(iVar2 + iVar12);
      iVar12 = iVar12 + 0x40;
      *puVar3 = local_100;
      puVar3[1] = local_fc;
      puVar3[2] = (uint)local_f8;
      puVar3[3] = local_f4;
      puVar3[4] = local_f0;
      puVar3[5] = local_ec;
      puVar3[6] = uStack_e8;
      puVar3[7] = uStack_e4;
      puVar3[8] = local_e0;
      puVar3[9] = uStack_dc;
      puVar3[10] = local_d8;
      puVar3[0xb] = uStack_d4;
      puVar3[0xc] = uStack_d0;
      puVar3[0xd] = uStack_cc;
      puVar3[0xe] = uStack_c8;
      puVar3[0xf] = uStack_c4;
      iVar7 = iVar13 + 1;
      local_104 = iVar13;
    }
    iVar7 = iVar2;
    do {
      if (iVar12 == 0) {
        local_b0 = 0;
        local_bc = local_10c;
        local_c0 = 0x80000000;
        local_b8 = iVar2;
        local_b4 = uVar11;
        goto LAB_0150e7fc;
      }
      pcVar1 = (char *)(iVar7 + 0x3c);
      iVar12 = iVar12 + -0x40;
      iVar7 = iVar7 + 0x40;
    } while (*pcVar1 != '\0');
    local_b4 = local_10c;
    local_c0 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_bc = 4;
    local_b0 = iVar2;
    uStack_ac = uVar11;
LAB_0150e7fc:
    local_8c = 0;
    local_9c = 0;
    local_a0 = uVar6;
    local_98 = uVar5;
    local_94 = uVar8;
    local_90 = uVar6;
    local_88 = uVar5;
    local_84 = uVar8;
    local_80 = uVar9;
    FUN_0154aa58(&local_100,&local_a0);
    if (local_100 == 0x80000000) {
      puVar3 = (uint *)&DAT_00000008;
      uVar5 = 0;
      local_fc = 0;
    }
    else {
      FUN_01bed4e2((uint)auStack_70 | 3,&local_100,0xc);
      local_100 = CONCAT31(local_100._1_3_,3);
      FUN_01bed4e2((uint)&local_100 | 1,auStack_70,0xf);
      uVar10 = 0;
      uVar5 = local_80 + 1;
      if (local_80 == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      uVar9 = uVar5;
      if (uVar5 < 5) {
        uVar9 = 4;
      }
      iVar12 = uVar9 * 0x18;
      if (0x5555555 < uVar5) {
LAB_0150e8c0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar12);
      }
      if (iVar12 == 0) {
        puVar3 = (uint *)&DAT_00000008;
        uVar9 = 0;
      }
      else {
        uVar10 = 8;
        puVar3 = (uint *)FUN_01298504(iVar12,8);
        if (puVar3 == (uint *)0x0) goto LAB_0150e8c0;
      }
      iVar12 = 0x18;
      *puVar3 = local_100;
      puVar3[1] = local_fc;
      puVar3[2] = (uint)local_f8;
      puVar3[3] = local_f4;
      puVar3[4] = local_f0;
      puVar3[5] = local_ec;
      local_74 = 1;
      local_100 = local_a0;
      local_fc = local_9c;
      local_f8 = (uint *)local_98;
      local_f4 = local_94;
      local_f0 = local_90;
      local_ec = local_8c;
      uStack_e8 = local_88;
      uStack_e4 = local_84;
      local_e0 = local_80;
      local_7c = uVar9;
      local_78 = puVar3;
      while (uVar5 = local_74, FUN_0154aa58(local_48,&local_100), local_48[0] != -0x80000000) {
        FUN_01bed4e2((uint)auStack_38 | 3,local_48,0xc);
        FUN_01bed4e2((uint)&local_60 | 1,auStack_38,0xf);
        local_60 = CONCAT31(local_60._1_3_,3);
        if (uVar5 == local_7c) {
          iVar2 = local_e0 + 1;
          if (local_e0 == 0xffffffff) {
            iVar2 = -1;
          }
          FUN_006520b4(&local_7c,uVar5,iVar2,8,0x18);
          puVar3 = local_78;
        }
        puVar4 = (undefined4 *)((int)puVar3 + iVar12);
        local_74 = uVar5 + 1;
        iVar12 = iVar12 + 0x18;
        *puVar4 = local_60;
        puVar4[1] = uStack_5c;
        puVar4[2] = uStack_58;
        puVar4[3] = uStack_54;
        puVar4[4] = uStack_50;
        puVar4[5] = uStack_4c;
      }
      local_fc = local_7c;
    }
    local_100 = CONCAT31(local_100._1_3_,4);
    local_f8 = puVar3;
    local_f4 = uVar5;
    uVar10 = FUN_01531708(&local_100);
    FUN_0155ff10(&local_c0,uVar10);
    *local_118 = local_c0;
    local_118[1] = local_bc;
    local_118[2] = local_b8;
    local_118[3] = local_b4;
    local_118[4] = local_b0;
    local_118[5] = uStack_ac;
    local_118[6] = local_a8;
  }
  else {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

