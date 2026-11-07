// FUN_016625bc @ 016625bc size=1856 calls_out=11 calls_in=1
// strings: ./0123456789ABCDEFGHIJKLMNOPQRST

void FUN_016625bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  code **ppcVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  bool bVar12;
  undefined4 local_350;
  undefined4 local_34c;
  undefined1 auStack_348 [48];
  uint local_318;
  int local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined1 auStack_2d8 [64];
  undefined1 local_298;
  code *local_290 [4];
  undefined4 uStack_280;
  code *local_250;
  undefined1 *puStack_24c;
  undefined4 *puStack_248;
  code *pcStack_244;
  undefined4 uStack_240;
  undefined1 local_210;
  code *local_208 [4];
  undefined4 uStack_1f8;
  code *local_1f0;
  undefined1 *puStack_1ec;
  undefined4 *puStack_1e8;
  code *pcStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [64];
  code *local_170 [4];
  undefined4 uStack_160;
  code *local_130;
  undefined1 *local_12c;
  undefined4 *local_128;
  code *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  code *local_f0;
  undefined1 *local_ec;
  undefined4 *local_e8;
  code *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  code *local_b0;
  code *local_ac;
  undefined4 *local_a8;
  code *local_a4;
  code **local_a0;
  undefined1 *local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  code *local_70;
  undefined1 *puStack_6c;
  undefined4 *puStack_68;
  code *pcStack_64;
  undefined4 uStack_60;
  undefined1 local_30;
  
  uVar10 = param_6;
  local_34c = param_5;
  iVar7 = 0;
  local_350 = param_4;
  FUN_01bed93e(auStack_348,0,0x30);
  FUN_016633f0(&local_b0,param_4,param_5,auStack_348,0x30);
  if (local_b0 == (code *)&DAT_80000004) {
    FUN_016621e4(local_290,param_2,param_3);
    do {
      *(byte *)((int)local_290 + iVar7) = *(byte *)((int)local_290 + iVar7) ^ 0x36;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x40);
    local_f0 = (code *)&DAT_00000001;
    local_e0 = 0x98badcfe;
    local_e4 = (code *)0xefcdab89;
    iVar7 = 0;
    local_ec = (undefined1 *)0x0;
    local_d8 = 0xc3d2e1f0;
    local_dc = 0x10325476;
    local_e8 = (undefined4 *)0x67452301;
    FUN_0196c428(&local_e8,local_290,1);
    do {
      *(byte *)((int)local_290 + iVar7) = *(byte *)((int)local_290 + iVar7) ^ 0x6a;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x40);
    local_300 = 0xc3d2e1f0;
    local_314 = 0;
    local_318 = 1;
    local_308 = 0x98badcfe;
    local_310 = 0x67452301;
    local_30c = 0xefcdab89;
    local_304 = 0x10325476;
    FUN_0196c428(&local_310,local_290,1);
    local_90 = local_318;
    iStack_8c = local_314;
    local_88 = local_310;
    uStack_84 = local_30c;
    local_80 = local_308;
    uStack_7c = local_304;
    uStack_78 = local_300;
    uStack_74 = uStack_2fc;
    local_b0 = local_f0;
    local_ac = (code *)local_ec;
    local_a8 = local_e8;
    local_a4 = local_e4;
    local_a0 = (code **)local_e0;
    local_9c = (undefined1 *)local_dc;
    uStack_98 = local_d8;
    uStack_94 = uStack_d4;
    FUN_01bed93e(auStack_1b0,0,0x40);
    local_1f0 = local_b0;
    puStack_1ec = local_ac;
    puStack_1e8 = local_a8;
    pcStack_1e4 = local_a4;
    uStack_1e0 = local_a0;
    local_1dc = local_9c;
    uStack_1d8 = uStack_98;
    uStack_1d4 = uStack_94;
    uStack_1d0 = local_90;
    iStack_1cc = iStack_8c;
    local_1c8 = local_88;
    uStack_1c4 = uStack_84;
    uStack_1c0 = local_80;
    uStack_1bc = uStack_7c;
    uStack_1b8 = uStack_78;
    uStack_1b4 = uStack_74;
    FUN_01bed4e2(&local_318,&local_1f0,0x80);
    local_a4 = FUN_012fd02c;
    local_a8 = &param_6;
    local_b0 = (code *)&local_350;
    local_ac = (code *)&LAB_018a13b8;
    local_298 = 0;
    FUN_00664898(local_290,&DAT_00595ee1,&local_b0);
    pcVar8 = local_290[2];
    pcVar2 = local_290[1];
    uVar4 = (uint)local_290[2] >> 6;
    if (uVar4 == 0) {
      pcVar3 = local_290[1];
    }
    else {
      bVar12 = CARRY4(local_318,uVar4);
      local_318 = local_318 + uVar4;
      local_314 = local_314 + (uint)bVar12;
      FUN_0196c428(&local_310,local_290[1]);
      pcVar3 = pcVar2 + ((uint)pcVar8 & 0x7fffffc0);
      pcVar8 = (code *)((uint)pcVar8 & 0x3f);
    }
    FUN_01bed4e2(auStack_2d8,pcVar3,pcVar8);
    local_298 = SUB41(pcVar8,0);
    FUN_0134bd64(local_290[0],pcVar2);
    FUN_01bed93e(&local_f0,0,0x14);
    FUN_01bed4e2(&local_b0,&local_318,0x88);
    FUN_01bed93e(local_290,0,0x14);
    FUN_01662d54(&local_318,&local_70,local_290);
    local_70 = local_290[0];
    puStack_6c = local_290[1];
    puStack_68 = (undefined4 *)local_290[2];
    pcStack_64 = local_290[3];
    uStack_60 = uStack_280;
    local_30 = 0x14;
    FUN_01662d54(&local_90,&local_70,&local_f0);
    local_208[0] = local_f0;
    local_208[1] = (code *)local_ec;
    local_208[2] = (code *)local_e8;
    local_208[3] = local_e4;
    uStack_1f8 = local_e0;
    if (1 < uVar10) {
      uVar4 = 1;
      do {
        FUN_016621e4(local_170,param_2,param_3);
        iVar7 = 0;
        do {
          *(byte *)((int)local_170 + iVar7) = *(byte *)((int)local_170 + iVar7) ^ 0x36;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x40);
        iVar7 = 0;
        local_130 = (code *)&DAT_00000001;
        local_120 = 0x98badcfe;
        local_124 = (code *)0xefcdab89;
        local_12c = (undefined1 *)0x0;
        local_118 = 0xc3d2e1f0;
        local_11c = 0x10325476;
        local_128 = (undefined4 *)0x67452301;
        FUN_0196c428(&local_128,local_170,1);
        do {
          *(byte *)((int)local_170 + iVar7) = *(byte *)((int)local_170 + iVar7) ^ 0x6a;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x40);
        local_10c = 0;
        local_110 = 1;
        local_100 = 0x98badcfe;
        local_f8 = 0xc3d2e1f0;
        local_104 = 0xefcdab89;
        local_fc = 0x10325476;
        local_108 = 0x67452301;
        FUN_0196c428(&local_108,local_170,1);
        local_d0 = local_110;
        iStack_cc = local_10c;
        local_c8 = local_108;
        uStack_c4 = local_104;
        local_c0 = local_100;
        uStack_bc = local_fc;
        uStack_b8 = local_f8;
        uStack_b4 = uStack_f4;
        local_f0 = local_130;
        local_ec = local_12c;
        local_e8 = local_128;
        local_e4 = local_124;
        local_e0 = local_120;
        local_dc = local_11c;
        local_d8 = local_118;
        uStack_d4 = uStack_114;
        FUN_01bed93e(&local_70,0,0x40);
        local_b0 = local_f0;
        local_ac = (code *)local_ec;
        local_a8 = local_e8;
        local_a4 = local_e4;
        local_a0 = (code **)local_e0;
        local_9c = (undefined1 *)local_dc;
        uStack_98 = local_d8;
        uStack_94 = uStack_d4;
        local_90 = local_d0;
        iStack_8c = iStack_cc;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        local_80 = local_c0;
        uStack_7c = uStack_bc;
        uStack_78 = uStack_b8;
        uStack_74 = uStack_b4;
        FUN_01bed4e2(local_290,&local_b0,0x80);
        local_250 = local_208[0];
        puStack_24c = local_208[1];
        puStack_248 = (undefined4 *)local_208[2];
        pcStack_244 = local_208[3];
        uStack_240 = uStack_1f8;
        local_210 = 0x14;
        FUN_01bed93e(local_170,0,0x14);
        FUN_01bed4e2(&local_b0,local_290,0x88);
        FUN_01bed93e(&local_f0,0,0x14);
        FUN_01662d54(local_290,&local_70,&local_f0);
        local_70 = local_f0;
        puStack_6c = local_ec;
        puStack_68 = local_e8;
        pcStack_64 = local_e4;
        uStack_60 = local_e0;
        local_30 = 0x14;
        FUN_01662d54(&local_90,&local_70,local_170);
        local_208[0] = local_170[0];
        local_208[1] = local_170[1];
        local_208[2] = local_170[2];
        local_208[3] = local_170[3];
        uStack_1f8 = uStack_160;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar10);
    }
    pcVar2 = (code *)thunk_FUN_01be5118(0x1c);
    if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x1c);
    }
    iVar9 = 0;
    local_ac = pcVar2;
    local_a8 = (undefined4 *)0x0;
    local_b0 = (code *)0x1c;
    iVar7 = 0;
    do {
      iVar5 = 0;
      uVar10 = 0;
      do {
        uVar4 = iVar9 + iVar5;
        iVar5 = iVar5 + 1;
        ppcVar6 = local_208;
        if (uVar4 < 0x14) {
          ppcVar6 = (code **)((int)local_208 + uVar4);
        }
        uVar10 = (uint)*(byte *)ppcVar6 | uVar10 << 8;
      } while (iVar5 != 3);
      iVar5 = 4;
      iVar7 = iVar7 + 1;
      do {
        puVar1 = local_a8;
        uVar4 = 2;
        bVar11 = "./0123456789ABCDEFGHIJKLMNOPQRST"[uVar10 & 0x3f];
        if ((uint)(int)(char)bVar11 < 0x80000000) {
          uVar4 = 1;
        }
        if ((uint)((int)local_b0 - (int)local_a8) < uVar4) {
          FUN_006520b4(&local_b0,local_a8,uVar4,1,1);
          pcVar2 = local_ac;
        }
        if (0x7fffffff < (uint)(int)(char)bVar11) {
          ((byte *)((int)pcVar2 + (int)local_a8))[1] = bVar11 & 0xbf;
          bVar11 = bVar11 >> 6 | 0xc0;
        }
        local_290[2] = (code *)(uVar4 + (int)puVar1);
        iVar5 = iVar5 + -1;
        uVar10 = uVar10 >> 6;
        *(byte *)((int)pcVar2 + (int)local_a8) = bVar11;
        local_a8 = (undefined4 *)local_290[2];
      } while (iVar5 != 0);
      iVar9 = iVar9 + 3;
    } while (iVar7 != 7);
    local_a0 = local_290;
    local_290[0] = local_b0;
    local_290[1] = local_ac;
    local_9c = &LAB_00632348;
    local_a4 = (code *)&LAB_018a13b8;
    local_a8 = &local_350;
    local_ac = FUN_012fd02c;
    local_b0 = (code *)&param_6;
    FUN_00664898(&local_f0,&DAT_0057fccb,&local_b0);
    FUN_0134bd64(local_290[0],local_290[1]);
    param_1[1] = local_f0;
    param_1[2] = local_ec;
    param_1[3] = local_e8;
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
    param_1[1] = local_b0;
    param_1[2] = local_ac;
    param_1[3] = local_a8;
  }
  return;
}

