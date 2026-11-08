// FUN_00b36300 @ 00b36300 size=1472 calls_out=10 calls_in=4
// strings: BUG: missing client statistics

void FUN_00b36300(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int local_194;
  int local_168;
  int local_12c;
  uint local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_100;
  int local_fc;
  int local_f8;
  undefined8 local_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  uint local_d8;
  uint uStack_d4;
  double local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  char local_7c;
  undefined1 local_7b;
  int local_78;
  int local_74;
  uint local_70;
  
  local_108 = 0;
  local_194 = 4;
  local_10c = 4;
  local_110 = 0;
  if (param_3 != 0) {
    iVar5 = param_2 + param_3 * 0x28;
    dVar35 = 0.0;
    do {
      iVar2 = local_108;
      iVar11 = *(int *)(param_2 + 0x24);
      iVar29 = *(int *)(param_2 + 0x20);
      local_f8 = 0;
      local_fc = 8;
      local_100 = 0;
      if (iVar11 != 0) {
        iVar20 = 0;
        iVar23 = 0;
        local_168 = 8;
        do {
          iVar3 = local_f8;
          iVar17 = iVar29 + iVar20;
          local_11c = 0;
          local_114 = 1;
          local_118 = 0;
          if (*(int *)(iVar17 + 0x1a4) != -0x80000000) {
            FUN_006666fc(&local_78,*(undefined4 *)(iVar17 + 0x1a8),*(undefined4 *)(iVar17 + 0x1ac));
            local_11c = 0;
            local_114 = 1;
            local_118 = 0;
            if (local_78 != -0x80000000) {
              local_114 = local_74;
              local_11c = local_70;
              local_118 = local_78;
            }
          }
          cVar4 = '\0';
          iVar30 = 1;
          if (*(int *)(iVar17 + 0x1bc) == -0x80000000) {
            uVar13 = 0;
            iVar28 = 0;
          }
          else {
            FUN_006666fc(&local_78,*(undefined4 *)(iVar17 + 0x1c0),*(undefined4 *)(iVar17 + 0x1c4));
            uVar13 = 0;
            iVar28 = 0;
            if (local_78 != -0x80000000) {
              uVar13 = local_70;
              iVar28 = local_78;
              iVar30 = local_74;
            }
          }
          uVar15 = *(uint *)(iVar17 + 0x20);
          if (*(char *)(iVar17 + 0x1d4) == '\x01') {
            cVar4 = *(char *)(iVar17 + 0x1d5) + '\x01';
          }
          if (uVar15 == 2 && *(int *)(iVar17 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
          }
          uVar1 = *(undefined1 *)(iVar17 + 0x1d6);
          puVar18 = (uint *)(iVar29 + iVar20);
          uVar6 = *puVar18;
          dVar31 = (double)FUN_01bf09c8(puVar18[0x52],puVar18[0x53],puVar18[0x54],puVar18[0x55]);
          dVar32 = (double)FUN_01bf09c8(puVar18[0x5c],puVar18[0x5d],puVar18[0x5e],puVar18[0x5f]);
          uVar37 = FUN_01bf0b64(SUB84(dVar32,0),(int)((ulonglong)dVar32 >> 0x20));
          uVar7 = puVar18[0x46];
          uVar21 = puVar18[0x48];
          uVar24 = puVar18[0x49];
          if (dVar32 < 0.0) {
            uVar37 = 0;
          }
          if (1.844674407370955e+19 < dVar32) {
            uVar37 = 0xffffffffffffffff;
          }
          FUN_01bf0b64(SUB84(dVar31,0),(int)((ulonglong)dVar31 >> 0x20));
          dVar33 = (double)FUN_01bf09c8(uVar21,uVar24,puVar18[0x4a],puVar18[0x4b]);
          uVar38 = FUN_01bf0b64(SUB84(dVar33,0),(int)((ulonglong)dVar33 >> 0x20));
          uVar21 = puVar18[0x5a];
          uVar24 = puVar18[0x5b];
          uVar8 = puVar18[0x50];
          uVar19 = puVar18[0x51];
          dVar36 = dVar33 + dVar31 + dVar32;
          if (dVar33 < 0.0) {
            uVar38 = 0;
          }
          if (1.844674407370955e+19 < dVar33) {
            uVar38 = 0xffffffffffffffff;
          }
          dVar34 = dVar35;
          dVar33 = dVar35;
          if (dVar36 != 0.0) {
            dVar34 = dVar32 / dVar36;
            dVar33 = dVar31 / dVar36;
          }
          dVar31 = dVar35;
          if ((uVar6 & 1) != 0) {
            dVar31 = (double)FUN_01bf09c8(*(undefined4 *)(iVar17 + 8),*(undefined4 *)(iVar17 + 0xc),
                                          *(undefined4 *)(iVar17 + 0x10),
                                          *(undefined4 *)(iVar17 + 0x14));
          }
          uVar25 = *(undefined4 *)(iVar17 + 0x110);
          uVar26 = *(undefined4 *)(iVar17 + 0x114);
          uVar9 = *(undefined4 *)(iVar17 + 0x28);
          uVar12 = *(undefined4 *)(iVar17 + 0x2c);
          uVar14 = *(undefined4 *)(iVar17 + 0x30);
          uVar16 = *(undefined4 *)(iVar17 + 0x34);
          if ((uVar15 & 1) == 0) {
            uVar16 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar9 = 0;
          }
          iVar17 = FUN_012fc0a4(uVar9,uVar12,uVar14,uVar16,&local_78);
          iVar22 = 0x27 - iVar17;
          if (iVar17 == 0x27) {
            iVar27 = 1;
            local_12c = 0;
          }
          else {
            iVar27 = FUN_01298504(iVar22,1);
            if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,iVar22);
            }
            local_12c = iVar22;
          }
          FUN_01bed4e2(iVar27,(int)&local_78 + iVar17,iVar22);
          local_98 = local_11c;
          local_9c = local_114;
          local_a0 = local_118;
          local_88 = local_12c;
          local_e8 = uVar7;
          local_d0 = dVar33;
          local_b8 = dVar34;
          local_b0 = dVar31;
          local_94 = iVar28;
          local_90 = iVar30;
          local_8c = uVar13;
          local_84 = iVar27;
          local_80 = iVar22;
          local_7c = cVar4;
          local_7b = uVar1;
          local_d8 = uVar8;
          uStack_d4 = uVar19;
          local_c0 = uVar21;
          uStack_bc = uVar24;
          local_a8 = uVar25;
          uStack_a4 = uVar26;
          local_c8 = uVar37;
          local_f0 = uVar38;
          if (iVar3 == local_100) {
            FUN_00a20f60(&local_100);
            local_168 = local_fc;
          }
          FUN_01bed4e2(local_168 + iVar23,&local_f0,0x78);
          local_f8 = iVar3 + 1;
          iVar23 = iVar23 + 0x78;
          iVar20 = iVar20 + 0x1d8;
        } while (iVar11 * 0x1d8 != iVar20);
      }
      FUN_006666fc(&local_78,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
      local_e4 = local_100;
      local_e0 = local_fc;
      iStack_dc = local_f8;
      local_f0._0_4_ = local_78;
      local_f0._4_4_ = local_74;
      local_e8 = local_70;
      if (iVar2 == local_110) {
        FUN_014f8acc(&local_110);
        local_194 = local_10c;
      }
      param_2 = param_2 + 0x28;
      local_108 = iVar2 + 1;
      piVar10 = (int *)(local_194 + iVar2 * 0x18);
      *piVar10 = (int)local_f0;
      piVar10[1] = local_f0._4_4_;
      piVar10[2] = local_e8;
      piVar10[3] = local_e4;
      piVar10[4] = local_e0;
      piVar10[5] = iStack_dc;
    } while (param_2 != iVar5);
  }
  *param_1 = local_110;
  param_1[1] = local_10c;
  param_1[2] = local_108;
  return;
}

