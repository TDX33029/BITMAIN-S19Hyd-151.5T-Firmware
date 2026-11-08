// FUN_015cf2a4 @ 015cf2a4 size=3088 calls_out=22 calls_in=1
// strings: 

void FUN_015cf2a4(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint **ppuVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  int iVar23;
  undefined4 uVar24;
  int *piVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 *puVar32;
  int iVar33;
  bool bVar34;
  undefined8 uVar35;
  int local_1c4;
  uint *local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint *local_190;
  undefined4 local_18c;
  uint *local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint **local_178;
  code *local_174;
  uint *local_170;
  code *local_16c;
  undefined1 auStack_160 [12];
  int local_154;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  int local_e0;
  uint *local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint **local_d0;
  code *local_cc;
  uint **local_c8;
  code *local_c4;
  undefined *local_c0;
  
  puVar14 = (uint *)param_2[1];
  if (*param_2 == 0) {
    puVar14 = (uint *)0x0;
  }
  local_1ac = puVar14;
  if (3 < DAT_01d51b00) {
    bVar34 = (char)param_2[5] != '\x02';
    if (bVar34) {
      FUN_01bed4e2((int)&local_1a8 + 1,(int)param_2 + 0x25,0x10);
    }
    else {
      local_1a8 = (uint *)(*(int *)((int)param_2 + 0x1a) << 8);
      uStack_1a4._0_1_ = (undefined1)((uint)*(int *)((int)param_2 + 0x1a) >> 0x18);
    }
    local_1a8 = (uint *)CONCAT31(local_1a8._1_3_,bVar34);
    local_178 = &local_1ac;
    local_17c = (uint *)&LAB_00632348;
    local_c4 = (code *)0x17;
    local_cc = (code *)0x17;
    local_174 = FUN_012fd02c;
    local_16c = FUN_01309a48;
    local_c0 = &DAT_01cfcc28;
    local_c8 = (uint **)0x4b3d9f;
    local_d0 = (uint **)0x4b3d9f;
    local_180 = (char *)(param_2 + 2);
    local_170 = &local_1a8;
    FUN_015fb650(&DAT_005a12fe,&local_180,4,&local_d0);
  }
  piVar8 = (int *)FUN_015dd6a4(param_1 + 0xc0,local_1ac);
  if (piVar8 == (int *)0x0) {
    if (DAT_01d51b00 < 4) {
      return;
    }
    local_d0 = (uint **)(param_2 + 2);
    local_cc = (code *)&LAB_00632348;
    local_174 = (code *)0x17;
    local_17c = (uint *)0x17;
    local_178 = (uint **)0x4b3d9f;
    local_180 = "m";
    local_170 = (uint *)&DAT_01cfcc78;
    FUN_015fb650(&DAT_0058cab4,&local_d0,4,&local_180);
    return;
  }
  piVar25 = param_2 + 5;
  uVar9 = FUN_015f6a28(piVar8[4],piVar8[5],piVar8[6],piVar8[7],piVar25);
  uVar15 = uVar9 >> 0x19;
  iVar23 = *piVar8;
  uVar27 = piVar8[1];
  local_1c4 = 0;
  do {
    uVar9 = uVar27 & uVar9;
    uVar30 = *(uint *)(iVar23 + uVar9);
    uVar10 = uVar30 ^ uVar15 * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                      (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar27;
      uVar10 = uVar10 - 1 & uVar10;
      iVar12 = FUN_015f4844(piVar25,uVar11 * -0x32 + iVar23 + -0x32);
      if (iVar12 != 0) {
        iVar23 = uVar11 * -0x32 + iVar23;
        FUN_015d27c4(piVar8,iVar23);
        if (*(char *)(iVar23 + -0x32) == '\x03') {
          return;
        }
        iVar23 = *piVar25;
        if ((char)iVar23 == '\x02') {
          puVar18 = *(uint **)((int)param_2 + 0x1a);
          local_190 = puVar18;
          iVar12 = FUN_015f2b40(piVar8);
          if ((iVar12 == 0) && (*(int *)(param_1 + 0x1e8) != -1)) {
            local_180 = (char *)0xfb0000e0;
            local_17c = puVar18;
            FUN_01979e70(&local_188,*(int *)(param_1 + 0x1e8),0x24,&local_180);
            if ((char)local_188 == '\x04') {
              if (3 < DAT_01d51b00) {
                local_d0 = &local_190;
                local_cc = FUN_013095bc;
                local_174 = (code *)0x17;
                local_17c = (uint *)&DAT_00000017;
                local_178 = (uint **)0x4b3d9f;
                local_180 = "m";
                local_170 = (uint *)&DAT_01cfcc48;
                FUN_015fb650(&DAT_0058dd03,&local_d0,4,&local_180);
              }
            }
            else {
              uStack_1a4 = local_184;
              local_1a8 = local_188;
              puVar18 = local_188;
              if (3 < DAT_01d51b00) {
                local_c8 = (uint **)&local_1a8;
                local_c4 = FUN_019a7d7c;
                local_d0 = &local_190;
                local_cc = FUN_013095bc;
                local_170 = (uint *)&DAT_01cfcc38;
                local_174 = (code *)0x17;
                local_178 = (uint **)0x4b3d9f;
                local_17c = (uint *)&DAT_00000017;
                local_180 = "m";
                FUN_015fb650(&DAT_00583fb5,&local_d0,4,&local_180);
                puVar18 = (uint *)((uint)local_1a8 & 0xff);
              }
              FUN_0069d8a4(puVar18,uStack_1a4);
            }
          }
          if (piVar8[3] != 0) {
            iVar12 = FUN_015f2b40(piVar8);
            if (iVar12 != 0) goto LAB_015cfd88;
            sVar5 = 0;
            sVar6 = 1;
            goto LAB_015cfa04;
          }
        }
        else {
          puVar18 = *(uint **)((int)param_2 + 0x25);
          FUN_01bed4e2(&uStack_1a4,(int)param_2 + 0x29,0xc);
          local_1a8 = puVar18;
          iVar12 = FUN_015f2bc0(piVar8);
          if ((iVar12 == 0) && (*(int *)(param_1 + 500) != -1)) {
            local_180 = (char *)0x2ff;
            local_17c = (uint *)0x0;
            local_178 = (uint **)0x0;
            local_174 = (code *)0xfb000000;
            local_170 = puVar14;
            FUN_01979e24(&local_190,*(int *)(param_1 + 500),0x15);
            if ((char)local_190 != '\x04') {
              local_184 = local_18c;
              local_188 = local_190;
              puVar18 = local_190;
              if (3 < DAT_01d51b00) {
                local_c8 = &local_188;
                local_c4 = FUN_019a7d7c;
                local_cc = FUN_01308e28;
                local_170 = (uint *)&DAT_01cfcc58;
                local_174 = (code *)0x17;
                local_178 = (uint **)0x4b3d9f;
                local_17c = (uint *)&DAT_00000017;
                local_180 = "m";
                local_d0 = (uint **)&local_1a8;
                FUN_015fb650(&DAT_00583fb5,&local_d0,4,&local_180);
                puVar18 = (uint *)((uint)local_188 & 0xff);
              }
              FUN_0069d8a4(puVar18,local_184);
            }
          }
          if (piVar8[3] != 0) {
            iVar12 = FUN_015f2bc0();
            if (iVar12 != 0) goto LAB_015cfdb8;
            sVar5 = 1;
            sVar6 = 0;
            goto LAB_015cfa04;
          }
        }
        if (3 < DAT_01d51b00) {
          local_d0 = (uint **)(param_2 + 2);
          local_cc = (code *)&LAB_00632348;
          local_174 = (code *)0x17;
          local_17c = (uint *)&DAT_00000017;
          local_178 = (uint **)0x4b3d9f;
          local_180 = "m";
          local_170 = (uint *)&DAT_01cfcc68;
          FUN_015fb650(&DAT_0057aae5,&local_d0,4,&local_180);
        }
        FUN_015dd110(&local_180,param_1 + 0xc0,local_1ac);
        if (local_154 != -0x80000000) {
          FUN_015abb00(&local_180);
        }
        puVar18 = local_1ac;
        uVar9 = FUN_015f7180(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),
                             *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),
                             local_1ac);
        uVar15 = uVar9 >> 0x19;
        iVar12 = *(int *)(param_1 + 0x100);
        uVar27 = *(uint *)(param_1 + 0x104);
        iVar33 = 0;
        goto LAB_015cf6c8;
      }
    }
    if ((uVar30 & 0x80808080 & uVar30 << 1) != 0) {
      return;
    }
    local_1c4 = local_1c4 + 4;
    uVar9 = uVar9 + local_1c4;
  } while( true );
LAB_015cf6c8:
  uVar9 = uVar27 & uVar9;
  uVar30 = *(uint *)(iVar12 + uVar9);
  uVar10 = uVar30 ^ uVar15 * 0x1010101;
  uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
  while (uVar10 != 0) {
    uVar11 = uVar10 >> 8;
    uVar28 = uVar10 >> 0x10;
    uVar1 = uVar10 >> 0x18;
    uVar2 = uVar10 << 0x18;
    uVar10 = uVar10 - 1 & uVar10;
    uVar11 = uVar9 + ((uint)LZCOUNT(uVar2 | (uVar11 & 0xff) << 0x10 | (uVar28 & 0xff) << 8 | uVar1)
                     >> 3) & uVar27;
    if (puVar18 == *(uint **)(iVar12 + -0xb8 + uVar11 * -0xb8)) {
      iVar20 = uVar11 * -0xb8 + iVar12;
      iVar33 = ((int)(uVar11 * 0xb8) >> 3) * -0x1642c859;
      puVar18 = (uint *)(iVar12 + (iVar33 - 4U & uVar27));
      uVar15 = *puVar18;
      uVar9 = *(uint *)(iVar12 + iVar33) & 0x80808080 & *(uint *)(iVar12 + iVar33) << 1;
      uVar22 = 0x80;
      if (((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                         uVar9 >> 0x18) >> 3) +
          ((uint)LZCOUNT(uVar15 & 0x80808080 & uVar15 << 1) >> 3) < 4) {
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        uVar22 = 0xff;
      }
      *(undefined1 *)(iVar12 + iVar33) = uVar22;
      iVar12 = *(int *)(param_1 + 0x10c);
      *(undefined1 *)(puVar18 + 1) = uVar22;
      *(int *)(param_1 + 0x10c) = iVar12 + -1;
      FUN_01bed4e2(&local_d0,iVar20 + -0xb8,0xa8);
      iVar12 = *(int *)(iVar20 + -0x10);
      local_1a8 = *(uint **)(iVar20 + -0xc);
      uStack_1a4 = *(undefined4 *)(iVar20 + -8);
      uStack_1a0 = *(undefined4 *)(iVar20 + -4);
      if (iVar12 == -0x80000000) goto LAB_015cf808;
      FUN_01bed4e2(&local_180,&local_c8,0xa0);
      local_dc = local_1a8;
      uStack_d8 = uStack_1a4;
      uStack_d4 = uStack_1a0;
      local_e0 = iVar12;
      FUN_015d1c80(&local_180);
      FUN_015d1808(auStack_160);
      FUN_0134aee0(iVar12,local_dc,8,8);
      FUN_015d1e5c(auStack_140);
      FUN_015d1230(auStack_120);
      FUN_015d1230(auStack_100);
      goto LAB_015cf9f4;
    }
  }
  if ((uVar30 & 0x80808080 & uVar30 << 1) != 0) goto LAB_015cf808;
  iVar33 = iVar33 + 4;
  uVar9 = uVar9 + iVar33;
  goto LAB_015cf6c8;
LAB_015cf808:
  local_e0 = -0x80000000;
LAB_015cf9f4:
  sVar6 = 0;
  sVar5 = 0;
LAB_015cfa04:
  puVar31 = *(uint **)(param_1 + 0x60);
  iVar12 = *(int *)(param_1 + 0x6c);
  puVar18 = puVar31 + 1;
  uVar15 = ~*puVar31 & 0x80808080;
LAB_015cfa24:
  if (iVar12 == 0) {
    if ((char)iVar23 == '\x02') {
LAB_015cfd88:
      local_180 = (char *)0x80000003;
      uVar22 = 0;
      local_178._0_1_ = (undefined1)((uint)*(int *)((int)param_2 + 0x1a) >> 0x18);
      local_17c = (uint *)(*(int *)((int)param_2 + 0x1a) << 8);
      FUN_015cc548(param_1,&local_180);
      local_180 = (char *)(*(int *)((int)param_2 + 0x1a) << 8);
      local_17c._0_1_ = (undefined1)((uint)*(int *)((int)param_2 + 0x1a) >> 0x18);
    }
    else {
LAB_015cfdb8:
      FUN_01bed4e2((int)&local_17c + 1,(int)param_2 + 0x25,0x10);
      uVar22 = 1;
      local_180 = (char *)0x80000003;
      local_17c = (uint *)CONCAT31(local_17c._1_3_,1);
      FUN_015cc548(param_1,&local_180);
      FUN_01bed4e2((int)&local_180 + 1,(int)param_2 + 0x25,0x10);
    }
    local_180 = (char *)CONCAT31(local_180._1_3_,uVar22);
    FUN_015cdbdc(param_1,&local_180);
    return;
  }
  puVar29 = puVar18;
  if (uVar15 == 0) {
    do {
      puVar18 = puVar29 + 1;
      uVar15 = *puVar29;
      puVar31 = puVar31 + -0x18;
      puVar29 = puVar18;
    } while ((uVar15 & 0x80808080) == 0x80808080);
    uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
  }
  uVar9 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8
                        | uVar15 >> 0x18) >> 3;
  local_1a8 = puVar31 + uVar9 * -6 + -6;
  uVar27 = puVar31[uVar9 * -6 + -1];
  if (uVar27 != 0) {
    uVar30 = 0;
    uVar11 = puVar31[uVar9 * -6 + -2];
    uVar10 = uVar11;
    do {
      uVar35 = (**(code **)(*(int *)(uVar10 + 0x14) + 0x1c))(*(undefined4 *)(uVar10 + 0x10));
      ppuVar13 = (uint **)uVar35;
      (**(code **)((int)((ulonglong)uVar35 >> 0x20) + 0xc))(&local_180,ppuVar13);
      if (((int *)local_180 != (int *)0xda8c4f1e || local_178 != (uint **)0x19da2243) ||
          (local_17c != (uint *)0xb2415d58 || local_174 != (code *)0xc983ed0b)) {
LAB_015cfb64:
        uVar28 = uVar30 + 1;
        FUN_015e65f0(uVar10);
        if (uVar27 <= uVar28) goto LAB_015cfce0;
        puVar3 = (undefined4 *)(uVar11 + uVar30 * 0x18);
        goto LAB_015cfb8c;
      }
      if (ppuVar13[3] == puVar14) {
        sVar7 = *(short *)(ppuVar13 + 0x11);
        if (sVar7 == 0x1c) {
          if (sVar6 == 0) goto LAB_015cfb50;
        }
        else {
          sVar4 = sVar7;
          if (sVar7 == 1) {
            sVar4 = sVar5;
          }
          if (sVar7 == 1 && sVar4 == 0) {
LAB_015cfb50:
            if (3 < DAT_01d51b00) {
              local_c8 = (uint **)&local_1a8;
              local_c4 = (code *)&LAB_0193a90c;
              local_cc = (code *)&LAB_005fdc1c;
              local_174 = (code *)0x12;
              local_170 = (uint *)&DAT_01cfd838;
              local_17c = (uint *)&DAT_00000012;
              local_178 = (uint **)0x4b3ea3;
              local_180 = "m";
              local_d0 = ppuVar13;
              FUN_015fb650(&DAT_005b1dbd,&local_d0,4,&local_180);
            }
            goto LAB_015cfb64;
          }
        }
      }
      uVar10 = uVar10 + 0x18;
      uVar30 = uVar30 + 1;
    } while (uVar27 != uVar30);
  }
  goto LAB_015cfcf4;
LAB_015cfb8c:
  do {
    puVar26 = puVar3 + 6;
    uVar35 = (**(code **)(puVar3[0xb] + 0x1c))(puVar3[10]);
    ppuVar13 = (uint **)uVar35;
    (**(code **)((int)((ulonglong)uVar35 >> 0x20) + 0xc))(&local_180,ppuVar13);
    if (((int *)local_180 == (int *)0xda8c4f1e && local_178 == (uint **)0x19da2243) &&
        (local_17c == (uint *)0xb2415d58 && local_174 == (code *)0xc983ed0b)) {
      if ((ppuVar13[3] == puVar14) &&
         (((sVar7 = sVar6, *(short *)(ppuVar13 + 0x11) == 0x1c ||
           (sVar7 = sVar5, *(short *)(ppuVar13 + 0x11) == 1)) && (sVar7 == 0)))) {
        if (3 < DAT_01d51b00) {
          local_c8 = (uint **)&local_1a8;
          local_c4 = (code *)&LAB_0193a90c;
          local_cc = (code *)&LAB_005fdc1c;
          local_174 = (code *)0x12;
          local_170 = (uint *)&DAT_01cfd838;
          local_17c = (uint *)&DAT_00000012;
          local_178 = (uint **)0x4b3ea3;
          local_180 = "m";
          local_d0 = ppuVar13;
          FUN_015fb650(&DAT_005b1dbd,&local_d0,4,&local_180);
        }
        goto LAB_015cfcc4;
      }
      puVar32 = (undefined4 *)(uVar11 + uVar30 * 0x18);
      uVar16 = puVar3[7];
      uVar17 = puVar3[8];
      uVar19 = puVar3[9];
      uVar21 = puVar3[10];
      uVar24 = puVar3[0xb];
      *puVar32 = *puVar26;
      puVar32[1] = uVar16;
      puVar32[2] = uVar17;
      puVar32[3] = uVar19;
      puVar32[4] = uVar21;
      puVar32[5] = uVar24;
      uVar30 = uVar30 + 1;
    }
    else {
LAB_015cfcc4:
      FUN_015e65f0(puVar26);
    }
    uVar28 = uVar28 + 1;
    puVar3 = puVar26;
  } while (uVar28 < uVar27);
LAB_015cfce0:
  puVar31[uVar9 * -6 + -1] = uVar30;
LAB_015cfcf4:
  uVar15 = uVar15 - 1 & uVar15;
  iVar12 = iVar12 + -1;
  goto LAB_015cfa24;
}

