// FUN_00e63e4c @ 00e63e4c size=6804 calls_out=31 calls_in=0
// strings: global_voltage | hashboards | hashboards | hashboards | global_voltage | hashboards

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e63e4c(undefined4 *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 ****ppppuVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****extraout_r1;
  undefined4 *****pppppuVar7;
  undefined4 *****extraout_r2;
  undefined4 *****extraout_r3;
  undefined4 *****extraout_r3_00;
  undefined4 *****pppppuVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *****pppppuVar11;
  undefined4 *****pppppuVar12;
  undefined4 *****pppppuVar13;
  undefined4 *****pppppuVar14;
  undefined4 *****extraout_r12;
  bool bVar15;
  ulonglong unaff_d8;
  ulonglong uVar16;
  ulonglong unaff_d9;
  undefined4 *****local_16c;
  undefined4 *****local_164;
  undefined4 *****local_15c;
  undefined4 *****local_158;
  undefined4 *****local_154;
  undefined4 *****local_150;
  undefined4 *****local_14c;
  undefined4 *****local_148;
  undefined4 *****local_144;
  undefined4 *****local_140;
  undefined4 *****local_13c;
  undefined4 *****local_138;
  undefined4 *****local_134;
  undefined4 ****local_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int iStack_120;
  undefined4 local_11c;
  undefined4 *****local_118;
  undefined4 *****local_114;
  undefined4 *****local_110;
  undefined4 *****pppppuStack_10c;
  undefined4 *****local_108;
  undefined4 *****local_104;
  undefined4 *****local_100;
  undefined4 *****local_fc;
  undefined4 *****pppppuStack_f8;
  undefined4 *****local_f4;
  undefined4 *****local_f0;
  undefined4 *****local_ec;
  undefined4 *****local_e8;
  undefined4 *****local_e4;
  undefined4 *****pppppuStack_e0;
  undefined4 *****local_d8;
  undefined4 *****local_d4;
  undefined4 *****local_d0;
  undefined4 *****local_cc;
  undefined4 *****local_c8;
  undefined4 *****pppppuStack_c4;
  undefined4 *****local_c0;
  undefined4 *****local_bc;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 *****local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined4 *****local_90;
  undefined4 *****local_8c;
  undefined4 *****local_88;
  undefined4 ****local_84;
  undefined4 *****local_80 [2];
  undefined4 local_78;
  undefined4 *****local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined4 *****local_58;
  undefined4 *****local_54;
  undefined4 *****local_50;
  undefined4 *****local_48;
  undefined4 *****local_44;
  undefined4 *****local_40;
  
  pppppuVar12 = &local_130;
  local_130 = (undefined4 ****)*param_2;
  iStack_12c = param_2[1];
  local_128 = param_2[2];
  local_124 = param_2[3];
  iStack_120 = param_2[4];
  pppppuVar11 = (undefined4 *****)param_2[5];
  pppppuVar14 = (undefined4 *****)param_2[6];
  ppppuVar3 = pppppuVar11[4];
  ppppuVar6 = pppppuVar11[5];
  if (ppppuVar6 < ppppuVar3) {
    do {
      uVar9 = (uint)*(byte *)((int)pppppuVar11[3] + (int)ppppuVar6);
      if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
        uVar16 = unaff_d8;
        if (uVar9 == 0x22) {
          local_d8 = (undefined4 *****)&DAT_80000000;
          local_f0 = &local_d8;
          if (ppppuVar3 <= ppppuVar6) goto LAB_00e6402c;
          goto LAB_00e64004;
        }
        if (uVar9 != 0x7b) {
          local_b0 = (undefined4 *****)&DAT_0000000a;
          pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
          goto LAB_00e63ed4;
        }
        cVar1 = *(char *)(pppppuVar11 + 7);
        *(char *)(pppppuVar11 + 7) = cVar1 + -1;
        if (cVar1 == '\x01') {
          local_b0 = (undefined4 *****)&DAT_00000018;
          pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
          goto LAB_00e63ed4;
        }
        ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 1);
        pppppuVar11[5] = ppppuVar6;
        local_78 = (undefined4 *****)&DAT_80000000;
        if (ppppuVar3 <= ppppuVar6) goto LAB_00e63f88;
        goto LAB_00e63f60;
      }
      ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 1);
      pppppuVar11[5] = ppppuVar6;
    } while (ppppuVar3 != ppppuVar6);
  }
  local_b0 = (undefined4 *****)&DAT_00000005;
  pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
LAB_00e63ed4:
  goto LAB_00e63ed8;
  while( true ) {
    ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 1);
    pppppuVar11[5] = ppppuVar6;
    if (ppppuVar3 == ppppuVar6) break;
LAB_00e64004:
    uVar9 = *(byte *)((int)pppppuVar11[3] + (int)ppppuVar6) - 9;
    if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)((int)pppppuVar11[3] + (int)ppppuVar6) == 0x22) {
        pppppuVar11[2] = (undefined4 ****)0x0;
        pppppuVar11[5] = (undefined4 ****)((int)ppppuVar6 + 1);
        FUN_01968828(&local_b0,pppppuVar11 + 3,pppppuVar11);
        pppppuVar4 = local_ac;
        if (local_b0 == (undefined4 *****)0x2) goto LAB_00e64044;
        FUN_00e612b0(&local_108,&local_d8,local_ac,(undefined4 *****)local_a8);
        if ((char)local_108 != '\x01') {
          pppppuVar8 = (undefined4 *****)&SUB_00000004;
          pppppuVar4 = (undefined4 *****)((uint)local_108 >> 8 & 0xff);
          if (local_d8 == (undefined4 *****)&DAT_80000000) {
            pppppuVar8 = (undefined4 *****)&DAT_00000008;
          }
          if (pppppuVar8 == (undefined4 *****)&DAT_00000009) goto LAB_00e64068;
          local_70 = CONCAT44(local_d4,local_d8);
          local_68 = CONCAT44(pppppuVar11,local_d0);
          local_60 = CONCAT44(local_60._4_4_,pppppuVar14);
          local_78 = pppppuVar8;
          local_74 = pppppuVar12;
          if (pppppuVar4 != (undefined4 *****)0x0) {
            local_148 = (undefined4 *****)0xe64120;
            FUN_00deb978(&local_b0,&local_78);
            local_84 = (undefined4 ****)((uint)local_b0 ^ 3);
            if (!(local_84 == (undefined4 ****)0x0 && local_ac == (undefined4 *****)0x0)) {
              pppppuVar12 = (undefined4 *****)0x0;
              local_134 = (undefined4 *****)0x2;
              local_140 = (undefined4 *****)0x0;
              local_14c = local_a8._4_4_;
              local_144 = (undefined4 *****)local_a8;
              pppppuVar4 = local_b0;
              uVar16 = local_a0;
              goto LAB_00e646c0;
            }
            pppppuVar4 = (undefined4 *****)local_a8;
            goto LAB_00e64068;
          }
          local_100 = local_d8;
          local_fc = local_d4;
          pppppuStack_f8 = local_d0;
          local_d8 = (undefined4 *****)&DAT_00000007;
          local_108 = pppppuVar8;
          local_104 = pppppuVar12;
          local_d4 = &local_108;
          pppppuStack_c4 = pppppuVar14;
          FUN_00fe327c(&local_b0,&local_d8);
          pppppuVar4 = (undefined4 *****)local_a8;
          if (local_b0 == (undefined4 *****)0x2 && local_ac == (undefined4 *****)0x0) {
            local_d8 = (undefined4 *****)local_a8;
            local_148 = (undefined4 *****)0xe643a8;
            FUN_0196bf0c(pppppuVar14,&local_108);
            local_140 = (undefined4 *****)0x0;
            local_134 = (undefined4 *****)0x2;
            local_84 = extraout_r1;
            local_14c = extraout_r3;
            local_144 = &local_108;
          }
          else {
            local_13c = local_88;
            local_138 = local_8c;
            local_140 = local_ac;
            local_14c = local_a0._4_4_;
            local_144 = (undefined4 *****)local_a0;
            local_134 = local_b0;
            pppppuVar12 = local_a8._4_4_;
            local_148 = local_90;
            uVar16 = local_98;
          }
          if (local_108 == (undefined4 *****)&SUB_00000004 || local_108 == (undefined4 *****)0x2) {
            FUN_019bb7e0(local_100,local_fc);
          }
          if (!(local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0))
          goto LAB_00e646c0;
          goto LAB_00e64068;
        }
        pppppuVar12 = local_104;
      }
      else {
        pppppuVar12 = (undefined4 *****)FUN_012c7788(pppppuVar11,&local_f0,&DAT_01c1cc38);
      }
      pppppuVar4 = (undefined4 *****)FUN_0127dee8(pppppuVar12,pppppuVar11);
      goto LAB_00e64040;
    }
  }
LAB_00e6402c:
  local_b0 = (undefined4 *****)0x5;
  pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
LAB_00e64040:
LAB_00e64044:
  local_b0 = pppppuVar4;
  FUN_0196bf0c(pppppuVar14,&local_130);
  if (local_d8 != (undefined4 *****)&DAT_80000000) {
    FUN_019bb7e0(local_d8,local_d4);
  }
LAB_00e64068:
  local_b0 = pppppuVar4;
  FUN_0196bf0c(pppppuVar14,&local_130);
  goto LAB_00e63ed8;
  while( true ) {
    ppppuVar6 = (undefined4 ****)((int)ppppuVar6 + 1);
    pppppuVar11[5] = ppppuVar6;
    if (ppppuVar3 == ppppuVar6) break;
LAB_00e63f60:
    uVar9 = (uint)*(byte *)((int)pppppuVar11[3] + (int)ppppuVar6);
    if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
      if (uVar9 != 0x22) {
        if (uVar9 == 0x7d) {
          local_b0 = (undefined4 *****)0xa;
          pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
        }
        else {
          local_b0 = (undefined4 *****)0x11;
          pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
        }
        goto LAB_00e63fa0;
      }
      pppppuVar11[2] = (undefined4 ****)0x0;
      pppppuVar11[5] = (undefined4 ****)((int)ppppuVar6 + 1);
      FUN_01968828(&local_b0,pppppuVar11 + 3,pppppuVar11);
      if (local_b0 == (undefined4 *****)0x2) {
        local_d4 = local_ac;
        local_d8 = (undefined4 *****)CONCAT31(local_d8._1_3_,1);
      }
      else {
        FUN_00e612b0(&local_d8,&local_78,local_ac,(undefined4 *****)local_a8);
      }
      if ((char)local_d8 != '\0') {
        pppppuVar4 = (undefined4 *****)FUN_0127dee8(local_d4,pppppuVar11);
        goto LAB_00e63fa0;
      }
      pppppuVar8 = (undefined4 *****)((uint)local_d8 >> 8 & 0xff);
      pppppuVar4 = (undefined4 *****)FUN_0167459c(pppppuVar11);
      if (pppppuVar4 != (undefined4 *****)0x0) goto LAB_00e63fa0;
      pppppuVar4 = (undefined4 *****)&SUB_00000004;
      if (local_78 == (undefined4 *****)&DAT_80000000) {
        pppppuVar4 = (undefined4 *****)&DAT_00000008;
      }
      if (pppppuVar4 == (undefined4 *****)&DAT_00000009) goto LAB_00e641d4;
      if (pppppuVar8 != (undefined4 *****)0x0) {
        local_104 = (undefined4 *****)&local_11c;
        local_108 = (undefined4 *****)&DAT_00000007;
        local_114 = local_78;
        local_110 = local_74;
        pppppuStack_10c = (undefined4 *****)local_70;
        local_48 = &local_f0;
        local_b0 = (undefined4 *****)&DAT_00000007;
        local_a8 = CONCAT44(local_fc,local_100);
        local_a0 = CONCAT44(local_a0._4_4_,pppppuStack_f8);
        local_f0 = (undefined4 *****)&DAT_00000007;
        local_e8 = local_100;
        local_e4 = local_fc;
        pppppuStack_e0 = pppppuStack_f8;
        ppppuVar3 = pppppuVar11[5];
        local_11c = pppppuVar4;
        local_118 = pppppuVar12;
        local_f4 = pppppuVar14;
        local_ec = local_104;
        local_ac = local_104;
        local_44 = pppppuVar14;
        if (pppppuVar11[4] <= ppppuVar3) goto LAB_00e64280;
        goto LAB_00e64258;
      }
      local_104 = &local_f0;
      local_d8 = (undefined4 *****)&DAT_00000007;
      local_e8 = local_78;
      local_e4 = local_74;
      pppppuStack_e0 = (undefined4 *****)local_70;
      local_c0 = &local_108;
      local_b0 = (undefined4 *****)&DAT_00000007;
      local_a8 = CONCAT44(local_cc,local_d0);
      local_a0 = CONCAT44(local_a0._4_4_,local_c8);
      local_108 = (undefined4 *****)&DAT_00000007;
      local_100 = local_d0;
      local_fc = local_cc;
      pppppuStack_f8 = local_c8;
      ppppuVar3 = pppppuVar11[5];
      local_f0 = pppppuVar4;
      local_ec = pppppuVar12;
      local_d4 = local_104;
      local_bc = pppppuVar14;
      local_ac = local_104;
      if (pppppuVar11[4] <= ppppuVar3) goto LAB_00e64448;
      goto LAB_00e64420;
    }
  }
LAB_00e63f88:
  local_b0 = (undefined4 *****)0x3;
  pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
LAB_00e63fa0:
  local_b0 = pppppuVar4;
  FUN_0196bf0c(pppppuVar14,&local_130);
  if (local_78 != (undefined4 *****)&DAT_80000000) {
    FUN_019bb7e0(local_78,local_74);
  }
  goto LAB_00e63fc4;
  while( true ) {
    ppppuVar3 = (undefined4 ****)((int)ppppuVar3 + 1);
    pppppuVar11[5] = ppppuVar3;
    if (pppppuVar11[4] == ppppuVar3) break;
LAB_00e64420:
    uVar9 = (uint)*(byte *)((int)pppppuVar11[3] + (int)ppppuVar3);
    if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
      if (uVar9 != 0x5b) {
        if (uVar9 != 0x7b) {
          pppppuStack_c4 = pppppuVar14;
          pppppuVar4 = (undefined4 *****)FUN_012c7788(pppppuVar11,&local_c0,&DAT_01c1cde8);
          goto LAB_00e656bc;
        }
        cVar1 = *(char *)(pppppuVar11 + 7);
        *(char *)(pppppuVar11 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_b0 = (undefined4 *****)&DAT_00000018;
          pppppuStack_c4 = pppppuVar14;
          pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
          goto LAB_00e6445c;
        }
        pppppuVar11[5] = (undefined4 ****)((int)ppppuVar3 + 1);
        local_a0 = CONCAT71(local_a0._1_7_,1);
        local_a8._0_4_ = local_d0;
        local_144 = (undefined4 *****)((int)&local_a8 + 4);
        local_98 = CONCAT44(local_98._4_4_,pppppuVar14);
        local_148 = (undefined4 *****)&DAT_80000000;
        local_b0 = (undefined4 *****)&DAT_80000000;
        local_48 = (undefined4 *****)0x80000000;
        local_154 = (undefined4 *****)0x2;
        local_16c = (undefined4 *****)&DAT_00567e78;
        local_134 = (undefined4 *****)&DAT_80000000;
        local_164 = (undefined4 *****)0x0;
        local_158 = (undefined4 *****)0x2;
        local_140 = (undefined4 *****)0x0;
        local_15c = (undefined4 *****)0x0;
        pppppuStack_c4 = pppppuVar14;
        local_a0._4_4_ = local_c0;
        goto LAB_00e64a38;
      }
      cVar1 = *(char *)(pppppuVar11 + 7);
      *(char *)(pppppuVar11 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_b0 = (undefined4 *****)&DAT_00000018;
        pppppuStack_c4 = pppppuVar14;
        pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
        goto LAB_00e6445c;
      }
      pppppuVar11[5] = (undefined4 ****)((int)ppppuVar3 + 1);
      local_68 = CONCAT71(local_68._1_7_,1);
      local_78 = (undefined4 *****)0x0;
      pppppuStack_c4 = pppppuVar14;
      local_74 = local_c0;
      local_70._0_4_ = pppppuVar14;
      local_70._4_4_ = pppppuVar11;
      FUN_00e62dc0(&local_b0,&local_78);
      local_140 = local_ac;
      local_134 = local_b0;
      if (local_b0 == (undefined4 *****)&DAT_00000003 && local_ac == (undefined4 *****)0x0) {
LAB_00e64e88:
        pppppuVar12 = (undefined4 *****)local_a8;
        local_148 = (undefined4 *****)&DAT_00000001;
        uVar16 = unaff_d8;
LAB_00e64e8c:
        local_b0 = pppppuVar12;
        FUN_0196bf0c(pppppuVar14,&local_108);
        local_140 = (undefined4 *****)0x0;
        local_134 = (undefined4 *****)0x2;
        local_14c = extraout_r2;
        local_144 = extraout_r3_00;
        local_138 = extraout_r12;
        local_13c = (undefined4 *****)0xe64e9c;
        local_48 = pppppuVar12;
      }
      else {
        if (local_b0 == (undefined4 *****)0x2 && local_ac == (undefined4 *****)0x0) {
          uVar10 = 0;
          local_148 = (undefined4 *****)&DAT_00000001;
LAB_00e651c8:
          pppppuVar12 = (undefined4 *****)FUN_012cc2c0(uVar10,&DAT_01c167fc,&DAT_01d064b8);
          goto LAB_00e64e8c;
        }
        pppppuVar12 = (undefined4 *****)local_a8;
        pppppuVar4 = local_a8._4_4_;
        FUN_00e6318c(&local_b0,&local_78);
        pppppuVar8 = (undefined4 *****)local_70;
        local_148 = local_74;
        uVar16 = local_a8;
        local_14c = local_ac;
        local_144 = local_b0;
        if (local_b0 == (undefined4 *****)&DAT_00000003 && local_ac == (undefined4 *****)0x0)
        goto LAB_00e64e88;
        if (local_b0 == (undefined4 *****)0x2 && local_ac == (undefined4 *****)0x0) {
          uVar10 = 1;
          local_148 = (undefined4 *****)&DAT_00000001;
          uVar16 = unaff_d8;
          goto LAB_00e651c8;
        }
        local_ac = local_78;
        local_a0 = CONCAT44((undefined4 *****)local_70,(undefined4 *****)local_a0);
        local_a8 = CONCAT44(local_a8._4_4_,local_74);
        local_b0 = (undefined4 *****)&DAT_00000001;
        local_78 = (undefined4 *****)((int)local_78 + 1);
        FUN_014db6fc(&local_11c,(int)&local_70 + 4);
        if ((char)local_11c == '\x01') {
LAB_00e65134:
          pppppuVar12 = local_118;
          FUN_0196bf0c(pppppuVar8,local_148);
          goto LAB_00e64e8c;
        }
        if (local_11c._1_1_ == '\0') {
          uVar10 = 2;
          goto LAB_00e651c8;
        }
        FUN_00e78d0c(&local_11c,&local_b0,local_70._4_4_);
        if (local_11c == (undefined4 *****)&DAT_80000000) goto LAB_00e65134;
        local_48 = pppppuVar12;
        local_44 = pppppuVar4;
        local_148 = local_11c;
        local_138 = local_118;
        local_13c = local_114;
      }
      pppppuVar12 = local_44;
      pppppuVar4 = local_48;
      *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
      local_70 = CONCAT44(local_44,local_48);
      local_68 = CONCAT44(local_14c,local_144);
      local_78 = local_134;
      local_74 = local_140;
      local_60 = uVar16;
      local_58 = local_148;
      local_54 = local_138;
      local_50 = local_13c;
      pppppuVar8 = (undefined4 *****)FUN_014d9568(pppppuVar11);
      local_a0 = CONCAT44(local_14c,local_144);
      local_a8 = CONCAT44(pppppuVar12,pppppuVar4);
      local_b0 = local_134;
      local_ac = local_140;
      local_98 = uVar16;
      local_90 = local_148;
      local_8c = local_138;
      local_88 = local_13c;
      local_80[0] = pppppuVar8;
      if (local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
        if (pppppuVar8 != (undefined4 *****)0x0) {
          FUN_00f80260(local_80);
        }
        local_140 = (undefined4 *****)0x0;
        local_134 = (undefined4 *****)0x2;
      }
      else if (pppppuVar8 != (undefined4 *****)0x0) {
        FUN_00b1620c(&local_90);
        local_140 = (undefined4 *****)0x0;
        local_134 = (undefined4 *****)0x2;
        pppppuVar4 = pppppuVar8;
      }
      goto LAB_00e64fd0;
    }
  }
LAB_00e64448:
  local_b0 = (undefined4 *****)&DAT_00000005;
  pppppuStack_c4 = pppppuVar14;
  pppppuVar4 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
LAB_00e6445c:
  FUN_0196bf0c(pppppuVar14,&local_108);
  local_140 = (undefined4 *****)0x0;
  local_134 = (undefined4 *****)0x2;
  goto LAB_00e64474;
LAB_00e64a38:
  do {
    uVar16 = unaff_d8;
    pppppuVar12 = local_a0._4_4_;
    uVar10 = (undefined4)local_98;
    FUN_01278730(&local_78,local_144);
    if ((char)local_78 == '\x01') {
LAB_00e652c8:
      pppppuVar4 = local_74;
      pppppuVar8 = local_b0;
      local_44 = local_138;
      local_40 = local_13c;
      bVar15 = local_b0 != (undefined4 *****)&DAT_80000000;
      local_48 = local_134;
      local_b0 = (undefined4 *****)&DAT_80000000;
      local_78 = (undefined4 *****)&DAT_00000008;
      if (bVar15) {
        local_70 = CONCAT44(local_ac,pppppuVar8);
        local_78 = (undefined4 *****)0x2;
        local_68 = CONCAT44(local_68._4_4_,(undefined4 *****)local_a8);
      }
      local_74 = pppppuVar12;
      FUN_0196bf0c(uVar10,&local_78);
      if (pppppuVar8 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(pppppuVar8,local_70._4_4_);
      }
      goto LAB_00e65510;
    }
    if (local_78._1_1_ != '\x01') {
      local_44 = local_138;
      local_40 = local_13c;
      local_48 = local_134;
      if (local_154 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
        local_154 = (undefined4 *****)0x0;
        local_140 = (undefined4 *****)0x0;
      }
      local_144 = (undefined4 *****)0x0;
      if (local_158 != (undefined4 *****)0x2 || local_15c != (undefined4 *****)0x0) {
        local_144 = local_158;
      }
      if (local_148 == (undefined4 *****)&DAT_80000000) {
        local_74 = (undefined4 *****)&DAT_0132b6a0;
        local_78 = (undefined4 *****)&local_11c;
        local_118 = (undefined4 *****)&DAT_0000000a;
        local_11c = (undefined4 *****)0x49e508;
        local_148 = (undefined4 *****)&DAT_80000000;
        pppppuVar4 = (undefined4 *****)FUN_019676ac(&DAT_0057cd64,&local_78);
        goto LAB_00e65524;
      }
      if (local_b0 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(local_b0,local_ac);
      }
      local_134 = local_154;
      local_b8 = unaff_d9;
      goto LAB_00e6555c;
    }
    pppppuVar11[2] = (undefined4 ****)0x0;
    pppppuVar11[5] = (undefined4 ****)((int)pppppuVar11[5] + 1);
    FUN_01968828(&local_78,pppppuVar11 + 3);
    pppppuVar4 = local_74;
    if (local_78 == (undefined4 *****)0x2) goto LAB_00e652c8;
    pppppuVar12 = (undefined4 *****)local_70;
    uVar10 = 0;
    pppppuVar8 = pppppuVar12;
    if (((uint)local_78 & 1) == 0) {
      pppppuVar13 = local_150;
      if ((int)(undefined4 *****)local_70 < 0) goto LAB_00e658cc;
      if ((undefined4 *****)local_70 == (undefined4 *****)0x0) {
        pppppuVar8 = (undefined4 *****)0x0;
        local_150 = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_150 = (undefined4 *****)FUN_01298504((undefined4 *****)local_70,1);
        if (local_150 == (undefined4 *****)0x0) goto LAB_00e658c4;
      }
      pppppuVar13 = local_150;
    }
    else {
      pppppuVar13 = local_14c;
      if ((int)(undefined4 *****)local_70 < 0) goto LAB_00e658cc;
      if ((undefined4 *****)local_70 == (undefined4 *****)0x0) {
        pppppuVar8 = (undefined4 *****)0x0;
        local_14c = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_14c = (undefined4 *****)FUN_01298504((undefined4 *****)local_70,1);
        if (local_14c == (undefined4 *****)0x0) {
LAB_00e658c4:
          uVar10 = 1;
          pppppuVar13 = pppppuVar12;
LAB_00e658cc:
          local_40 = local_13c;
          local_48 = local_134;
          local_44 = local_138;
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar10,pppppuVar13);
        }
      }
      pppppuVar13 = local_14c;
    }
    FUN_01bed4e2(pppppuVar13,pppppuVar4,pppppuVar12);
    if (local_b0 != (undefined4 *****)&DAT_80000000) {
      FUN_019bb7e0(local_b0,local_ac);
    }
    local_a8._0_4_ = pppppuVar12;
    unaff_d8 = uVar16;
    local_b0 = pppppuVar8;
    local_ac = pppppuVar13;
    if (pppppuVar12 == (undefined4 *****)&DAT_0000000a) {
      iVar5 = thunk_FUN_01bed842(pppppuVar4,"hashboards",10);
      pppppuVar8 = local_a0._4_4_;
      pppppuVar4 = local_ac;
      pppppuVar12 = local_b0;
      if (iVar5 != 0) goto LAB_00e64bd4;
      if (local_148 != (undefined4 *****)&DAT_80000000) {
        local_118 = (undefined4 *****)&DAT_0000000a;
        local_16c = (undefined4 *****)0x49e508;
LAB_00e6587c:
        local_40 = local_13c;
        local_44 = local_138;
        local_48 = local_134;
        local_11c = local_16c;
        local_78 = (undefined4 *****)&local_11c;
        local_74 = (undefined4 *****)&DAT_0132b6a0;
        pppppuVar4 = (undefined4 *****)FUN_019676ac(&DAT_005ab34f,&local_78);
        goto LAB_00e65510;
      }
      bVar15 = local_b0 == (undefined4 *****)&DAT_80000000;
      local_b0 = (undefined4 *****)&DAT_80000000;
      uVar10 = (undefined4)local_98;
      local_78 = (undefined4 *****)0x2;
      if (bVar15) {
        local_78 = (undefined4 *****)&DAT_00000008;
      }
      local_70 = CONCAT44(local_70._4_4_,pppppuVar12);
      local_148 = local_a0._4_4_;
      local_74 = local_a0._4_4_;
      local_68 = CONCAT44((undefined4)local_98,10);
      pppppuVar13 = (undefined4 *****)FUN_0167459c(pppppuVar11);
      if (pppppuVar13 == (undefined4 *****)0x0) {
        FUN_00e78d0c(&local_11c,&local_78,pppppuVar11);
        if (local_11c != (undefined4 *****)&DAT_80000000) {
          local_138 = local_118;
          local_13c = local_114;
          local_134 = local_11c;
          local_148 = local_11c;
          goto LAB_00e64a38;
        }
LAB_00e657a8:
      }
      else {
        local_118 = pppppuVar13;
        if (pppppuVar12 != (undefined4 *****)&DAT_80000000) {
          FUN_019bb7e0(pppppuVar12,pppppuVar4);
          goto LAB_00e657a8;
        }
      }
      pppppuVar4 = local_118;
      local_44 = local_138;
      local_40 = local_13c;
      local_48 = local_134;
      FUN_0196bf0c(uVar10,pppppuVar8);
      goto LAB_00e65524;
    }
    if (pppppuVar12 != (undefined4 *****)&DAT_0000000e) {
      if (pppppuVar12 == (undefined4 *****)&DAT_00000010) {
        iVar5 = thunk_FUN_01bed842(pppppuVar4,&DAT_00567e78,0x10);
        if (iVar5 != 0) goto LAB_00e64bd4;
        if (local_154 != (undefined4 *****)0x2 || local_164 != (undefined4 *****)0x0) {
          local_118 = (undefined4 *****)&DAT_00000010;
          goto LAB_00e6587c;
        }
        FUN_00e62598(&local_78,&local_b0);
        local_154 = local_78;
        local_164 = local_74;
        unaff_d9 = local_70;
        local_140 = local_74;
        if (local_78 != (undefined4 *****)0x2 || local_74 != (undefined4 *****)0x0)
        goto LAB_00e64a38;
        pppppuVar4 = (undefined4 *****)local_70;
      }
      else {
LAB_00e64bd4:
        pppppuVar4 = (undefined4 *****)FUN_00e620c0(&local_b0);
        if (pppppuVar4 == (undefined4 *****)0x0) goto LAB_00e64a38;
      }
      goto LAB_00e65508;
    }
    iVar5 = thunk_FUN_01bed842(pppppuVar4,"global_voltage",0xe);
    if (iVar5 != 0) goto LAB_00e64bd4;
    if (local_158 != (undefined4 *****)0x2 || local_15c != (undefined4 *****)0x0) {
      local_118 = (undefined4 *****)&DAT_0000000e;
      local_16c = (undefined4 *****)0x49e7e9;
      goto LAB_00e6587c;
    }
    FUN_00e617c4(&local_78,&local_b0);
    local_158 = local_78;
    local_15c = local_74;
    unaff_d8 = local_70;
  } while (!(local_78 == (undefined4 *****)0x2 && local_74 == (undefined4 *****)0x0));
  pppppuVar4 = (undefined4 *****)local_70;
LAB_00e65508:
  local_40 = local_13c;
  local_44 = local_138;
  local_48 = local_134;
LAB_00e65510:
  if (local_148 != (undefined4 *****)&DAT_80000000) {
    FUN_00b1620c(&local_48);
  }
LAB_00e65524:
  if (local_b0 != (undefined4 *****)&DAT_80000000) {
    FUN_019bb7e0(local_b0,local_ac);
  }
  local_b0 = pppppuVar4;
  FUN_0196bf0c(pppppuVar14,&local_108);
  local_b8 = CONCAT44(local_b8._4_4_,pppppuVar4);
  local_140 = (undefined4 *****)0x0;
  local_134 = (undefined4 *****)0x2;
LAB_00e6555c:
  uVar2 = local_b8;
  *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
  local_74 = local_140;
  local_78 = local_134;
  local_50 = local_13c;
  local_54 = local_138;
  local_58 = local_148;
  local_68 = ZEXT48(local_144);
  local_70 = local_b8;
  local_60 = uVar16;
  pppppuVar8 = (undefined4 *****)FUN_012c7b64(pppppuVar11);
  pppppuVar12 = (undefined4 *****)(uVar2 >> 0x20);
  pppppuVar4 = (undefined4 *****)uVar2;
  local_88 = local_13c;
  local_8c = local_138;
  local_90 = local_148;
  local_b0 = local_134;
  local_a0 = ZEXT48(local_144);
  local_ac = local_140;
  local_a8 = uVar2;
  local_98 = uVar16;
  local_80[0] = pppppuVar8;
  if (local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
    local_140 = (undefined4 *****)0x0;
    local_134 = (undefined4 *****)0x2;
    if (pppppuVar8 != (undefined4 *****)0x0) {
      FUN_00f80260(local_80);
    }
  }
  else if (pppppuVar8 != (undefined4 *****)0x0) {
    FUN_00b1620c(&local_90);
    local_140 = (undefined4 *****)0x0;
    local_134 = (undefined4 *****)0x2;
    pppppuVar4 = pppppuVar8;
  }
  local_14c = (undefined4 *****)0x0;
LAB_00e64fd0:
  if (local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
LAB_00e656bc:
    pppppuVar4 = (undefined4 *****)FUN_0127dee8(pppppuVar4,pppppuVar11);
    goto LAB_00e6445c;
  }
LAB_00e64474:
  if (local_108 == (undefined4 *****)&SUB_00000004 || local_108 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_100,local_fc);
  }
  if (local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
    FUN_0196bf0c(pppppuVar14,&local_d8);
    local_140 = (undefined4 *****)0x0;
    local_134 = (undefined4 *****)0x2;
  }
  if (local_d8 == (undefined4 *****)&SUB_00000004 || local_d8 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_d0,local_cc);
  }
  if (local_134 == (undefined4 *****)0x2 && local_140 == (undefined4 *****)0x0) {
    local_b0 = pppppuVar4;
    FUN_0196bf0c(pppppuVar14,&local_f0);
    local_140 = (undefined4 *****)0x0;
    local_134 = (undefined4 *****)0x2;
  }
  if (local_f0 == (undefined4 *****)&SUB_00000004 || local_f0 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_e8,local_e4);
  }
  uVar9 = 0;
  if (local_134 != (undefined4 *****)0x2 || local_140 != (undefined4 *****)0x0) {
    uVar9 = (uint)local_134 ^ 3;
  }
  if (local_140 != (undefined4 *****)0x0 || local_134 != (undefined4 *****)0x2 && uVar9 != 0)
  goto LAB_00e64550;
  goto LAB_00e63fc4;
  while( true ) {
    ppppuVar3 = (undefined4 ****)((int)ppppuVar3 + 1);
    pppppuVar11[5] = ppppuVar3;
    if (pppppuVar11[4] == ppppuVar3) break;
LAB_00e64258:
    uVar9 = (uint)*(byte *)((int)pppppuVar11[3] + (int)ppppuVar3);
    if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) {
      if (uVar9 != 0x5b) {
        if (uVar9 != 0x7b) {
          local_144 = (undefined4 *****)FUN_012c7788(pppppuVar11,&local_48,&DAT_01c1ccf8);
          goto LAB_00e65698;
        }
        cVar1 = *(char *)(pppppuVar11 + 7);
        *(char *)(pppppuVar11 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          pppppuVar11[5] = (undefined4 ****)((int)ppppuVar3 + 1);
          local_a0 = CONCAT71(local_a0._1_7_,1);
          local_b0 = (undefined4 *****)&DAT_80000000;
          local_148 = &local_ac;
          local_138 = (undefined4 *****)((int)&local_a8 + 4);
          local_a8._0_4_ = local_100;
          local_98 = CONCAT44(local_98._4_4_,pppppuVar14);
          local_150 = (undefined4 *****)0x0;
          pppppuVar4 = (undefined4 *****)&DAT_00000003;
          local_a0._4_4_ = local_48;
          goto LAB_00e6475c;
        }
        local_b0 = (undefined4 *****)&DAT_00000018;
        local_144 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
        goto LAB_00e64294;
      }
      cVar1 = *(char *)(pppppuVar11 + 7);
      *(char *)(pppppuVar11 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_b0 = (undefined4 *****)&DAT_00000018;
        local_144 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
        goto LAB_00e64294;
      }
      pppppuVar11[5] = (undefined4 ****)((int)ppppuVar3 + 1);
      local_c8 = (undefined4 *****)CONCAT31(local_c8._1_3_,1);
      local_d8 = (undefined4 *****)&DAT_00000001;
      local_68 = CONCAT44(pppppuVar14,(undefined4)local_68);
      local_70 = CONCAT44(local_70._4_4_,local_48);
      local_74 = (undefined4 *****)0x0;
      local_78 = (undefined4 *****)0x1;
      local_d4 = local_48;
      local_d0 = pppppuVar14;
      local_cc = pppppuVar11;
      FUN_014db6fc(&local_b0,&local_cc);
      if ((char)local_b0 == '\x01') {
        local_144 = local_ac;
LAB_00e64de0:
        FUN_0196bf0c(pppppuVar14,&local_f0);
LAB_00e6502c:
        local_b0 = local_144;
        FUN_0196bf0c(pppppuVar14,&local_f0);
        pppppuVar4 = (undefined4 *****)&DAT_00000003;
        pppppuVar8 = (undefined4 *****)0x0;
        local_a8._4_4_ = pppppuVar12;
      }
      else {
        if (local_b0._1_1_ != '\x01') {
          local_144 = (undefined4 *****)FUN_012cc2c0(0,&DAT_01c167f4,&DAT_01d064b8);
          goto LAB_00e6502c;
        }
        FUN_00e6eba0(&local_b0,&local_78,local_cc);
        local_144 = (undefined4 *****)local_a8;
        if (local_b0 == (undefined4 *****)&DAT_00000003 && local_ac == (undefined4 *****)0x0)
        goto LAB_00e64de0;
        pppppuVar4 = local_b0;
        pppppuVar8 = local_ac;
        unaff_d8 = local_a0;
      }
      *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
      local_70 = CONCAT44(local_a8._4_4_,local_144);
      local_78 = pppppuVar4;
      local_74 = pppppuVar8;
      local_68 = unaff_d8;
      pppppuVar13 = (undefined4 *****)FUN_014d9568(pppppuVar11);
      local_98 = CONCAT44(local_98._4_4_,pppppuVar13);
      local_a8 = CONCAT44(local_a8._4_4_,local_144);
      local_b0 = pppppuVar4;
      local_ac = pppppuVar8;
      local_a0 = unaff_d8;
      if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && pppppuVar8 == (undefined4 *****)0x0) {
        pppppuVar12 = (undefined4 *****)0x0;
        pppppuVar4 = (undefined4 *****)&DAT_00000003;
        if (pppppuVar13 != (undefined4 *****)0x0) {
          FUN_00f80260(&local_98);
        }
      }
      else {
        pppppuVar12 = pppppuVar8;
        if (pppppuVar13 != (undefined4 *****)0x0) {
          pppppuVar12 = (undefined4 *****)0x0;
          pppppuVar4 = (undefined4 *****)&DAT_00000003;
          local_144 = pppppuVar13;
        }
        local_14c = local_a8._4_4_;
      }
      goto LAB_00e65478;
    }
  }
LAB_00e64280:
  local_b0 = (undefined4 *****)&DAT_00000005;
  local_144 = (undefined4 *****)FUN_012c6b30(pppppuVar11,&local_b0);
LAB_00e64294:
  FUN_0196bf0c(pppppuVar14,&local_f0);
  pppppuVar12 = (undefined4 *****)0x0;
  pppppuVar4 = (undefined4 *****)&DAT_00000003;
  goto LAB_00e642ac;
  while (local_134 = (undefined4 *****)FUN_00e620c0(&local_b0), local_134 == (undefined4 *****)0x0)
  {
LAB_00e6475c:
    pppppuVar12 = local_a0._4_4_;
    uVar10 = (undefined4)local_98;
    FUN_01278730(&local_78,local_138);
    if ((char)local_78 == '\x01') {
LAB_00e65340:
      local_134 = local_74;
      pppppuVar8 = local_ac;
      pppppuVar4 = local_b0;
      local_b0 = (undefined4 *****)&DAT_80000000;
      if (pppppuVar4 == (undefined4 *****)&DAT_80000000) {
        local_78 = (undefined4 *****)&DAT_00000008;
      }
      else {
        local_78 = (undefined4 *****)0x2;
        local_70 = CONCAT44(local_ac,pppppuVar4);
        local_68 = CONCAT44(local_68._4_4_,(undefined4 *****)local_a8);
      }
      local_74 = pppppuVar12;
      FUN_0196bf0c(uVar10,&local_78);
      if (pppppuVar4 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(pppppuVar4,pppppuVar8);
      }
      break;
    }
    if (local_78._1_1_ != '\x01') {
      if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && local_150 == (undefined4 *****)0x0) {
        pppppuVar4 = (undefined4 *****)0x2;
        local_150 = (undefined4 *****)0x0;
      }
      if (local_b0 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(local_b0,local_ac);
      }
      goto LAB_00e653d4;
    }
    pppppuVar11[2] = (undefined4 ****)0x0;
    pppppuVar11[5] = (undefined4 ****)((int)pppppuVar11[5] + 1);
    FUN_01968828(&local_78,pppppuVar11 + 3);
    pppppuVar8 = local_74;
    if (local_78 == (undefined4 *****)0x2) goto LAB_00e65340;
    pppppuVar12 = (undefined4 *****)local_70;
    pppppuVar13 = (undefined4 *****)0x0;
    if (((uint)local_78 & 1) == 0) {
      pppppuVar7 = local_13c;
      if ((int)(undefined4 *****)local_70 < 0) goto LAB_00e658b8;
      if ((undefined4 *****)local_70 == (undefined4 *****)0x0) {
        local_13c = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_13c = (undefined4 *****)FUN_01298504((undefined4 *****)local_70,1);
        if (local_13c == (undefined4 *****)0x0) goto LAB_00e658b4;
        pppppuVar13 = pppppuVar12;
      }
      pppppuVar7 = local_13c;
    }
    else {
      pppppuVar7 = local_140;
      if ((int)(undefined4 *****)local_70 < 0) goto LAB_00e658b8;
      if ((undefined4 *****)local_70 == (undefined4 *****)0x0) {
        local_140 = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_140 = (undefined4 *****)FUN_01298504((undefined4 *****)local_70,1);
        if (local_140 == (undefined4 *****)0x0) {
LAB_00e658b4:
          pppppuVar13 = (undefined4 *****)&DAT_00000001;
          pppppuVar7 = pppppuVar12;
LAB_00e658b8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(pppppuVar13,pppppuVar7);
        }
        pppppuVar13 = pppppuVar12;
      }
      pppppuVar7 = local_140;
    }
    FUN_01bed4e2(pppppuVar7,pppppuVar8,pppppuVar12);
    if (local_b0 != (undefined4 *****)&DAT_80000000) {
      FUN_019bb7e0(local_b0,local_ac);
    }
    local_a8._0_4_ = pppppuVar12;
    local_b0 = pppppuVar13;
    local_ac = pppppuVar7;
    if (pppppuVar12 == (undefined4 *****)&DAT_00000006) {
      iVar5 = thunk_FUN_01bed842(pppppuVar8,&DAT_00531484,6);
      pppppuVar13 = local_a0._4_4_;
      pppppuVar8 = local_ac;
      pppppuVar12 = local_b0;
      if (iVar5 == 0) {
        if (pppppuVar4 != (undefined4 *****)&DAT_00000003 || local_150 != (undefined4 *****)0x0) {
          local_d4 = (undefined4 *****)&DAT_00000006;
          local_74 = (undefined4 *****)&DAT_0132b6a0;
          local_78 = &local_d8;
          local_d8 = (undefined4 *****)&DAT_00531484;
          local_134 = (undefined4 *****)FUN_019676ac(&DAT_005ab34f,&local_78);
          break;
        }
        uVar10 = (undefined4)local_98;
        bVar15 = local_b0 == (undefined4 *****)&DAT_80000000;
        local_b0 = (undefined4 *****)&DAT_80000000;
        local_78 = (undefined4 *****)0x2;
        if (bVar15) {
          local_78 = (undefined4 *****)&DAT_00000008;
        }
        local_70 = CONCAT44(local_70._4_4_,pppppuVar12);
        local_14c = local_a0._4_4_;
        local_74 = local_a0._4_4_;
        local_68 = CONCAT44((undefined4)local_98,6);
        pppppuVar4 = (undefined4 *****)FUN_0167459c(pppppuVar11);
        if (pppppuVar4 == (undefined4 *****)0x0) {
          FUN_00e6eba0(&local_d8,&local_78,pppppuVar11);
          local_144 = local_d0;
          local_150 = local_d4;
          if (local_d8 != (undefined4 *****)&DAT_00000003 || local_d4 != (undefined4 *****)0x0) {
            unaff_d8 = CONCAT44(pppppuStack_c4,local_c8);
            local_14c = local_cc;
            pppppuVar4 = local_d8;
            goto LAB_00e6475c;
          }
LAB_00e65754:
        }
        else {
          local_d0 = pppppuVar4;
          if (pppppuVar12 != (undefined4 *****)&DAT_80000000) {
            FUN_019bb7e0(pppppuVar12,pppppuVar8);
            goto LAB_00e65754;
          }
        }
        local_134 = local_d0;
        FUN_0196bf0c(uVar10,pppppuVar13);
        break;
      }
    }
  }
  if (local_b0 != (undefined4 *****)&DAT_80000000) {
    FUN_019bb7e0(local_b0,local_ac);
  }
  local_b0 = local_134;
  FUN_0196bf0c(pppppuVar14,&local_f0);
  local_150 = (undefined4 *****)0x0;
  pppppuVar4 = (undefined4 *****)&DAT_00000003;
  local_144 = local_134;
LAB_00e653d4:
  *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
  local_70 = CONCAT44(local_14c,local_144);
  local_78 = pppppuVar4;
  local_74 = local_150;
  local_68 = unaff_d8;
  pppppuVar8 = (undefined4 *****)FUN_012c7b64(pppppuVar11);
  local_a8 = CONCAT44(local_14c,local_144);
  local_98 = CONCAT44(local_98._4_4_,pppppuVar8);
  local_b0 = pppppuVar4;
  local_ac = local_150;
  local_a0 = unaff_d8;
  if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && local_150 == (undefined4 *****)0x0) {
    pppppuVar4 = (undefined4 *****)&DAT_00000003;
    if (pppppuVar8 != (undefined4 *****)0x0) {
      FUN_00f80260(&local_98);
    }
    pppppuVar12 = (undefined4 *****)0x0;
  }
  else {
    pppppuVar12 = local_150;
    if (pppppuVar8 != (undefined4 *****)0x0) {
      pppppuVar12 = (undefined4 *****)0x0;
      pppppuVar4 = (undefined4 *****)&DAT_00000003;
      local_144 = pppppuVar8;
    }
  }
LAB_00e65478:
  if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && pppppuVar12 == (undefined4 *****)0x0) {
LAB_00e65698:
    local_144 = (undefined4 *****)FUN_0127dee8(local_144,pppppuVar11);
    goto LAB_00e64294;
  }
LAB_00e642ac:
  if (local_f0 == (undefined4 *****)&SUB_00000004 || local_f0 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_e8,local_e4);
  }
  if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && pppppuVar12 == (undefined4 *****)0x0) {
    FUN_0196bf0c(pppppuVar14,&local_108);
    pppppuVar4 = (undefined4 *****)&DAT_00000003;
    pppppuVar12 = (undefined4 *****)0x0;
  }
  if (local_108 == (undefined4 *****)&SUB_00000004 || local_108 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_100,local_fc);
  }
  if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && pppppuVar12 == (undefined4 *****)0x0) {
    local_b0 = local_144;
    FUN_0196bf0c(pppppuVar14,&local_11c);
    pppppuVar4 = (undefined4 *****)&DAT_00000003;
    pppppuVar12 = (undefined4 *****)0x0;
  }
  if (local_11c == (undefined4 *****)&SUB_00000004 || local_11c == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_114,local_110);
  }
  pppppuVar8 = local_144;
  if (pppppuVar4 == (undefined4 *****)&DAT_00000003 && pppppuVar12 == (undefined4 *****)0x0) {
LAB_00e641d4:
    pppppuVar4 = pppppuVar8;
LAB_00e63fc4:
    local_b0 = pppppuVar4;
    FUN_0196bf0c(pppppuVar14,&local_130);
    *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
  }
  else {
    local_140 = (undefined4 *****)0x0;
    local_134 = (undefined4 *****)0x2;
    uVar16 = unaff_d8;
LAB_00e64550:
    *(char *)(pppppuVar11 + 7) = *(char *)(pppppuVar11 + 7) + '\x01';
    local_84 = pppppuVar11[5];
    local_90 = local_148;
    local_88 = local_13c;
    local_8c = local_138;
    local_a0 = CONCAT44(local_14c,local_144);
    local_a8 = CONCAT44(pppppuVar12,pppppuVar4);
    local_b0 = local_134;
    local_ac = local_140;
    local_98 = uVar16;
    if (local_84 < pppppuVar11[4]) {
      while( true ) {
        uVar9 = *(byte *)((int)pppppuVar11[3] + (int)local_84) - 9;
        if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) break;
        local_84 = (undefined4 ****)((int)local_84 + 1);
        pppppuVar11[5] = local_84;
        if (pppppuVar11[4] == local_84) goto LAB_00e645e4;
      }
      if (*(byte *)((int)pppppuVar11[3] + (int)local_84) != 0x7d) {
        local_78 = (undefined4 *****)&DAT_0000000a;
        pppppuVar4 = (undefined4 *****)FUN_012c6bfc(pppppuVar11,&local_78);
        goto LAB_00e645f8;
      }
      pppppuVar11[5] = (undefined4 ****)((int)local_84 + 1);
      if (!(local_134 != (undefined4 *****)&DAT_00000003 || local_140 != (undefined4 *****)0x0))
      goto LAB_00e63ed8;
LAB_00e646c0:
      *(ulonglong *)(param_1 + 6) = uVar16;
      param_1[8] = local_148;
      param_1[9] = local_138;
      param_1[10] = local_13c;
      param_1[0xb] = local_84;
      *param_1 = local_134;
      param_1[1] = local_140;
      param_1[2] = pppppuVar4;
      param_1[3] = pppppuVar12;
      param_1[4] = local_144;
      param_1[5] = local_14c;
      goto LAB_00e63ef4;
    }
LAB_00e645e4:
    local_78 = (undefined4 *****)&DAT_00000003;
    pppppuVar4 = (undefined4 *****)FUN_012c6bfc(pppppuVar11,&local_78);
LAB_00e645f8:
    if (local_134 != (undefined4 *****)0x2 || local_140 != (undefined4 *****)0x0) {
      FUN_00a210b0(&local_b0);
    }
  }
LAB_00e63ed8:
  FUN_0196bf0c(pppppuVar14,&local_130);
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = pppppuVar4;
LAB_00e63ef4:
  if (local_130 == (undefined4 ****)0x4 || local_130 == (undefined4 ****)0x2) {
    FUN_019bb7e0(local_128,local_124);
  }
  return;
}

