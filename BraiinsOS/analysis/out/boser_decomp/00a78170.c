// FUN_00a78170 @ 00a78170 size=1180 calls_out=17 calls_in=2
// strings: http://localhost:8081/metrics | /var/log/metrics/metrics.prom | BUG: Malformed URLevent open/boser/boser/src/metrics_scraper/logger.rs:105 | BUG: Parent path doesn't exist | BUG: Cannot create dir | BUG: Ensuring log dir exists

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff98 */
/* WARNING: Switch with 1 destination removed at 0x00a784c0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00a78170(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  undefined1 *puVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  undefined8 uVar46;
  uint uStack_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
  uint local_274;
  uint auStack_270 [4];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint auStack_240 [7];
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint auStack_200 [7];
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint auStack_1c0 [8];
  int *local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  int *local_174;
  int *local_170;
  int local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  int *local_118;
  int local_114;
  int *local_110;
  uint auStack_10c [4];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 uStack_bb;
  undefined1 auStack_b9 [4];
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined2 uStack_b3;
  uint local_b1;
  int iStack_ad;
  undefined1 uStack_a9;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined1 *puStack_98;
  undefined4 local_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 uStack_74;
  int *local_70;
  int *local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_50;
  int iStack_4c;
  int *piStack_48;
  int *piStack_40;
  int iStack_3c;
  int *piStack_38;
  
  FUN_012834b0(&local_170,"http://localhost:8081/metrics",0x1d);
  FUN_01414f00(&local_c0,&local_170);
  if ((char)local_c0 == '\x03') {
    local_170 = (int *)CONCAT31(local_170._1_3_,local_c0._1_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: Malformed URLevent open/boser/boser/src/metrics_scraper/logger.rs:105",0x12,
                 &local_170,&DAT_01c0e980,&DAT_01c0f6dc);
  }
  local_16c = CONCAT13(auStack_b9[0],CONCAT21(uStack_bb,local_bc));
  uStack_168 = CONCAT13(uStack_b5,auStack_b9._1_3_);
  uStack_164 = CONCAT13((undefined1)local_b1,CONCAT21(uStack_b3,uStack_b4));
  uStack_160 = CONCAT13((undefined1)iStack_ad,local_b1._1_3_);
  local_170 = local_c0;
  local_15c = CONCAT13(uStack_a9,iStack_ad._1_3_);
  uStack_158 = uStack_a8;
  uStack_154 = uStack_a4;
  uStack_150 = uStack_a0;
  uStack_14c = local_9c;
  puStack_148 = puStack_98;
  iVar7 = thunk_FUN_01be5118(0x60);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x60);
  }
  iVar23 = 0;
  local_110 = (int *)0x0;
  local_118 = (int *)&SUB_00000004;
  local_114 = iVar7;
  do {
    piVar8 = local_110;
    bVar43 = local_110 < &SUB_00000004;
    piVar12 = local_110 + -1;
    if (local_110 == local_118) {
      FUN_00a20de0(&local_118);
      iVar7 = local_114;
    }
    local_110 = (int *)((int)piVar8 + 1);
    puVar13 = (undefined1 *)(iVar7 + iVar23);
    *puVar13 = 0;
    iVar23 = iVar23 + 0x18;
    *(int **)(puVar13 + 8) = piVar12;
    *(uint *)(puVar13 + 0xc) = -(uint)bVar43;
    *(undefined4 *)(puVar13 + 0x10) = 0;
    *(undefined4 *)(puVar13 + 0x14) = 0;
  } while (local_110 != (int *)&SUB_00000004);
  local_c0 = local_118;
  local_bc = (undefined1)local_114;
  uStack_bb = (undefined2)((uint)local_114 >> 8);
  auStack_b9[0] = (undefined1)((uint)local_114 >> 0x18);
  auStack_b9._1_3_ = 4;
  uStack_b5 = 0;
  iVar7 = 4;
  if (&SUB_00000004 < local_118) {
    iVar7 = FUN_0189bb64(&local_c0,4,8,0x18);
    if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    iVar7 = CONCAT13(uStack_b5,auStack_b9._1_3_);
  }
  iVar23 = CONCAT13(auStack_b9[0],CONCAT21(uStack_bb,local_bc));
  iStack_ad = 0;
  local_b1 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  auStack_b9 = (undefined1  [4])0x0;
  piVar8 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  piVar8[3] = iVar7;
  *(undefined1 *)(piVar8 + 4) = 0;
  *piVar8 = 1;
  piVar8[1] = 1;
  piVar8[2] = iVar23;
  FUN_01bed4e2((undefined1 *)((int)piVar8 + 0x11),&local_c0,0x17);
  piVar8[0x11] = 1;
  piVar8[0x10] = 3;
  piVar8[0x12] = 0;
  piVar8[0xf] = 0;
  piVar8[0xe] = 0;
  *(undefined1 *)(piVar8 + 0xd) = 0;
  piVar8[0xc] = 0;
  *(undefined1 *)(piVar8 + 0xb) = 0;
  piVar8[10] = 1;
  do {
    iVar7 = *piVar8;
    bVar43 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar43);
  *piVar8 = iVar7 + 1;
  if (-1 < iVar7) {
    iStack_ad._0_1_ = (undefined1)((uint)piVar8 >> 0x18);
    uStack_b4 = 0;
    uStack_b3 = 0;
    local_b1 = (int)piVar8 << 8;
    auStack_b9._1_3_ = 0;
    uStack_b5 = 0;
    local_118 = piVar8;
    local_c0 = piVar8;
    FUN_009df188(auStack_b9 + 1);
    local_1a0 = local_170;
    uStack_19c = local_16c;
    uStack_198 = uStack_168;
    uStack_194 = uStack_164;
    uStack_190 = uStack_160;
    local_18c = local_15c;
    uStack_188 = uStack_158;
    uStack_184 = uStack_154;
    uStack_180 = uStack_150;
    uStack_17c = uStack_14c;
    puStack_178 = puStack_148;
    auStack_1c0[5] = 0;
    auStack_1c0[4] = 2;
    auStack_1c0[6] = 0;
    local_174 = piVar8;
    FUN_019afae4(&local_118,"/var/log/metrics/metrics.prom",0x1d);
    uVar46 = FUN_019aff98(local_114,local_110);
    if ((int)uVar46 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("BUG: Parent path doesn\'t exist",0x1e,&DAT_01c2518c);
    }
    local_bc = 1;
    local_c0 = (int *)0x1ff;
    FUN_019a4dfc(&local_170,&local_c0,(int)uVar46,(int)((ulonglong)uVar46 >> 0x20));
    if ((char)local_170 != '\x04') {
      local_bc = (undefined1)local_16c;
      uStack_bb = (undefined2)((uint)local_16c >> 8);
      auStack_b9[0] = (undefined1)((uint)local_16c >> 0x18);
      local_c0 = local_170;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: Cannot create dir",0x16,&local_c0,&DAT_01c103e8,&DAT_01c2519c);
    }
    local_c0 = local_118;
    local_bc = (undefined1)local_114;
    uStack_bb = (undefined2)((uint)local_114 >> 8);
    auStack_b9[0] = (undefined1)((uint)local_114 >> 0x18);
    auStack_b9._1_3_ = SUB43(local_110,0);
    uStack_b5 = (undefined1)((uint)local_110 >> 0x18);
    local_9c = 3;
    puStack_98 = (undefined1 *)0x100000;
    local_90 = 0;
    uStack_b4 = 1;
    uStack_b3 = 1;
    local_b1 = local_b1 & 0xffffff00;
    iStack_ad = (uint)iStack_ad._1_3_ << 8;
    local_94 = 0xffffffff;
    local_7c = 100;
    local_80 = 0;
    local_70 = (int *)0x0;
    local_78 = 0;
    uStack_a0._0_2_ = CONCAT11(2,(undefined1)uStack_a0);
    FUN_012609a0(&local_68,&local_c0);
    if ((char)local_68 != '\x04') {
      local_16c = local_64;
      local_170 = local_68;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: Ensuring log dir exists",0x1c,&local_170,&DAT_01c103e8,&DAT_01c251ac);
    }
    FUN_0126117c(&local_68,&local_c0);
    if ((char)local_68 != '\x04') {
      local_16c = local_64;
      local_170 = local_68;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: Removing stale scheme duplicates",0x25,&local_170,&DAT_01c103e8,
                   &DAT_01c251bc);
    }
    FUN_0125feac(&local_68);
    if ((char)local_68 != '\x04') {
      local_16c = local_64;
      local_170 = local_68;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: Scanning suffixes",0x16,&local_170,&DAT_01c103e8,&DAT_01c251cc);
    }
    FUN_01bed4e2(&local_170,&local_c0,0x54);
    iVar7 = 1;
    iVar23 = 0;
    local_68 = (int *)0x3020100;
    while( true ) {
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
      *(undefined4 *)((int)&local_c0 - iVar23) = 600;
      iVar17 = -iVar23;
      *(undefined4 *)(auStack_b9 + iVar17 + -3) = 0;
      *(undefined4 *)(auStack_b9 + iVar17 + 1) = 0;
      *(undefined4 *)(auStack_b9 + iVar17 + 5) = 0;
      if (iVar7 == 4) break;
      iVar23 = iVar23 + -0x10;
      iVar7 = iVar7 + 1;
    }
    auStack_10c[0] = CONCAT13(auStack_b9[0],CONCAT21(uStack_bb,local_bc));
    auStack_10c[1] = CONCAT13(uStack_b5,auStack_b9._1_3_);
    auStack_10c[2] = CONCAT13((undefined1)local_b1,CONCAT21(uStack_b3,uStack_b4));
    auStack_10c[3] = CONCAT13((undefined1)iStack_ad,local_b1._1_3_);
    local_110 = local_c0;
    uStack_fc = CONCAT13(uStack_a9,iStack_ad._1_3_);
    uStack_f8 = uStack_a8;
    uStack_f4 = uStack_a4;
    uStack_f0 = uStack_a0;
    uStack_ec = local_9c;
    puStack_e8 = puStack_98;
    uStack_e4 = local_94;
    uStack_e0 = local_90;
    uStack_dc = uStack_8c;
    uStack_d8 = uStack_88;
    uStack_d4 = uStack_84;
    local_114 = 4;
    local_118 = (int *)0x0;
    iVar7 = FUN_01298504(0x10,4);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x10);
    }
    iStack_cc = iVar7;
    puVar9 = (undefined4 *)((uint)&piStack_40 | 7);
    uStack_c8 = 0;
    piStack_d0 = (int *)&SUB_00000004;
    iVar23 = 0;
    do {
      uVar20 = auStack_10c[iVar23 * 4 + 1];
      lVar4 = (ulonglong)auStack_10c[iVar23 * 4 + -1] * 1000000000;
      uVar10 = (uint)lVar4;
      uVar28 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar4 = (ulonglong)auStack_10c[iVar23 * 4] * 1000000000;
      uVar25 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar5 = (ulonglong)(uint)((int)auStack_10c[iVar23 * 4] >> 0x1f) * 1000000000;
      uVar14 = (uint)lVar5;
      lVar6 = lVar4 + CONCAT44(uVar14,uVar28);
      uVar16 = (uint)lVar6;
      uVar29 = (uint)((ulonglong)lVar6 >> 0x20);
      uVar11 = (int)uVar20 >> 0x1f;
      bVar43 = CARRY4(uVar16,uVar11) || CARRY4(uVar16 + uVar11,(uint)CARRY4(uVar10,uVar20));
      uVar25 = (int)((ulonglong)lVar5 >> 0x20) + uVar14 +
               (uint)(CARRY4(uVar14,uVar25) ||
                     CARRY4(uVar14 + uVar25,(uint)CARRY4((uint)lVar4,uVar28))) + uVar11 +
               (uint)(CARRY4(uVar29,uVar11) || CARRY4(uVar29 + uVar11,(uint)bVar43));
      uVar14 = (int)uVar25 >> 0x1f;
      uVar36 = uVar10 + uVar20 ^ uVar14;
      uVar39 = uVar16 + uVar11 + (uint)CARRY4(uVar10,uVar20) ^ uVar14;
      uVar16 = uVar36 - uVar14;
      uVar10 = uVar29 + uVar11 + (uint)bVar43 ^ uVar14;
      bVar43 = uVar39 - uVar14 < (uint)(uVar14 <= uVar36);
      uVar29 = uVar39 - (uVar14 + (uVar14 > uVar36));
      uVar28 = uVar10 - (uVar14 + (uVar14 >= uVar39 && !bVar43));
      uVar25 = uVar25 ^ uVar14;
      uVar20 = uVar25 - (uVar14 + (uVar10 <= uVar14 &&
                                  (uint)(uVar14 < uVar39 || bVar43) <= uVar10 - uVar14));
      uVar11 = LZCOUNT(uVar28) + 0x20;
      iVar17 = LZCOUNT(uVar16) + 0x20;
      if (uVar20 != 0) {
        uVar11 = LZCOUNT(uVar20);
      }
      if (uVar29 != 0) {
        iVar17 = LZCOUNT(uVar29);
      }
      if (uVar28 == 0 && uVar20 == 0) {
        uVar11 = iVar17 + 0x40;
      }
      bVar43 = 0x77 < uVar11;
      uVar15 = -uVar11 + 0x77;
      uVar37 = -(uint)bVar43;
      uVar40 = -(uint)bVar43;
      uVar22 = -(uint)bVar43;
      bVar3 = uVar16 != 0;
      bVar2 = uVar28 != 0;
      bVar45 = uVar29 != 0;
      bVar44 = uVar20 != 0;
      bVar43 = (uint)((uint)bVar43 < (uint)((uint)bVar43 < (uint)(uVar15 < 0x80))) <= (uint)bVar43;
      uVar18 = uVar29;
      if ((!bVar3 && !bVar2) && (!bVar45 && !bVar44) || bVar43) {
        uVar18 = 0;
      }
      uVar41 = uVar20;
      uVar21 = uVar28;
      local_274 = uVar16;
      if ((!bVar3 && !bVar2) && (!bVar45 && !bVar44) || bVar43) {
        local_274 = 0;
        uVar21 = 0;
        uVar41 = 0;
      }
      if ((((bVar3 || bVar2) || (bVar45 || bVar44)) && !bVar43) &&
         ((uVar15 != 0x7f || uVar40 != 0) || (uVar37 != 0 || uVar22 != 0))) {
        auStack_1c0[0] = uVar16;
        uStack_1c4 = 0;
        uStack_1c8 = 0;
        uStack_1cc = 0;
        uStack_1d0 = 0;
        auStack_1c0[1] = uVar29;
        auStack_1c0[2] = uVar28;
        auStack_1c0[3] = uVar20;
        uVar21 = 0x7f - uVar15 & 0x1f;
        uVar42 = uVar21 ^ 0x1f;
        iVar17 = -(0x7f - uVar15 >> 3 & 0xc);
        uVar18 = *(uint *)((int)auStack_270 + iVar17 + 0xb0);
        uVar26 = *(uint *)((int)auStack_270 + iVar17 + 0xb4);
        uVar30 = *(uint *)((int)auStack_270 + iVar17 + 0xb8);
        uVar41 = uVar26 << uVar21 | (uVar18 >> 1) >> uVar42;
        uVar18 = uVar18 << uVar21;
        uVar33 = -uVar11 + 0x78;
        uVar24 = *(int *)((int)auStack_270 + iVar17 + 0xbc) << uVar21 | (uVar30 >> 1) >> uVar42;
        uVar11 = uVar30 << uVar21 | (uVar26 >> 1) >> uVar42;
        bVar43 = CARRY4(uVar37,(uint)(0xfffffffe < uVar15));
        uVar37 = uVar37 + (0xfffffffe < uVar15);
        local_274 = 0;
        bVar45 = CARRY4(uVar40,(uint)bVar43);
        uVar40 = uVar40 + bVar43;
        iVar17 = uVar22 + bVar45;
        if (!CARRY4(uVar22,(uint)bVar45)) {
          uStack_1d4 = 0;
          uStack_1d8 = 0;
          uStack_1dc = 0;
          uStack_1e0 = 0;
          uStack_1e4 = uVar20;
          auStack_200[4] = uVar16;
          auStack_200[5] = uVar29;
          auStack_200[6] = uVar28;
          uVar28 = (uVar33 & 0x7f) >> 5;
          uVar20 = uVar33 & 0x1f;
          uVar16 = uVar20 ^ 0x1f;
          uStack_27c = auStack_270[uVar28 + 0x22] >> uVar20 |
                       (auStack_270[uVar28 + 0x23] << 1) << uVar16;
          uStack_280 = auStack_270[uVar28 + 0x21] >> uVar20 |
                       (auStack_270[uVar28 + 0x22] << 1) << uVar16;
          uStack_284 = auStack_270[uVar28 + 0x23] >> uVar20;
          uVar28 = auStack_270[uVar28 + 0x20] >> uVar20 |
                   (auStack_270[uVar28 + 0x21] << 1) << uVar16;
          uVar16 = 0;
          uVar20 = uVar18;
          uStack_278 = uVar11;
          do {
            uStack_284 = uStack_284 << 1 | uStack_27c >> 0x1f;
            uVar22 = uStack_27c << 1 | uStack_280 >> 0x1f;
            uVar18 = uVar28 << 1 | uVar24 >> 0x1f;
            uVar29 = uStack_280 << 1 | uVar28 >> 0x1f;
            uVar11 = (int)-(uStack_284 + ((uint)(-uVar29 < (uint)(uVar18 < 300)) <= -uVar22)) >>
                     0x1f;
            local_274 = uVar11 & 1;
            uVar11 = uVar11 & 300;
            uVar28 = uVar18 - uVar11;
            bVar43 = uVar29 < (uVar11 <= uVar18);
            uStack_280 = uVar29 - (uVar11 > uVar18);
            uStack_27c = uVar22 - (uVar29 == 0 && !bVar43);
            uStack_284 = uStack_284 - (uVar22 == 0 && (uVar29 != 0 || bVar43) <= uVar22);
            bVar45 = uVar33 != 0;
            uVar33 = uVar33 - 1;
            bVar43 = uVar37 != 0;
            bVar44 = uVar37 < bVar45;
            uVar37 = uVar37 - !bVar45;
            bVar45 = uVar40 == 0;
            bVar3 = (bVar43 || bVar44) <= uVar40;
            uVar40 = uVar40 - (!bVar43 && !bVar44);
            iVar17 = iVar17 - (uint)(bVar45 && bVar3);
            uVar18 = uVar16 | uVar20 << 1;
            uVar11 = uStack_278 << 1 | uVar41 >> 0x1f;
            uVar41 = uVar41 << 1 | uVar20 >> 0x1f;
            uVar24 = uVar24 << 1 | uStack_278 >> 0x1f;
            uVar16 = local_274;
            uVar20 = uVar18;
            uStack_278 = uVar11;
          } while ((uVar33 != 0 || uVar40 != 0) || (uVar37 != 0 || iVar17 != 0));
        }
        local_274 = local_274 | uVar18 << 1;
        uVar18 = uVar41 << 1 | uVar18 >> 0x1f;
        uVar21 = uVar11 << 1 | uVar41 >> 0x1f;
        uVar41 = uVar24 << 1 | uVar11 >> 0x1f;
      }
      uVar16 = uVar36 - uVar14;
      bVar43 = uVar39 - uVar14 < (uint)(uVar14 <= uVar36);
      uVar20 = uVar39 - (uVar14 + (uVar14 > uVar36));
      iVar17 = uVar10 - (uVar14 + (uVar14 >= uVar39 && !bVar43));
      iVar38 = uVar25 - (uVar14 + (uVar10 <= uVar14 &&
                                  (uint)(uVar14 < uVar39 || bVar43) <= uVar10 - uVar14));
      uVar11 = LZCOUNT(iVar17) + 0x20;
      if (iVar38 != 0) {
        uVar11 = LZCOUNT(iVar38);
      }
      iVar31 = LZCOUNT(uVar16) + 0x20;
      if (uVar20 != 0) {
        iVar31 = LZCOUNT(uVar20);
      }
      if (iVar17 == 0 && iVar38 == 0) {
        uVar11 = iVar31 + 0x40;
      }
      bVar43 = 0x59 < uVar11;
      uVar37 = -uVar11 + 0x59;
      uVar25 = -(uint)bVar43;
      uVar28 = -(uint)bVar43;
      uVar10 = (uint)bVar43;
      uVar29 = -uVar10;
      local_274 = local_274 ^ uVar14;
      bVar43 = ((uint)bVar43 < (uint)((uint)bVar43 < (uint)(uVar37 < 0x80))) <= uVar10;
      uVar18 = uVar18 ^ uVar14;
      bVar45 = uVar18 - uVar14 < (uint)(uVar14 <= local_274);
      uVar21 = uVar21 ^ uVar14;
      uVar39 = (uVar41 ^ uVar14) -
               (uVar14 + (uVar21 <= uVar14 && (uint)(uVar14 < uVar18 || bVar45) <= uVar21 - uVar14))
      ;
      uVar36 = uVar20;
      uVar10 = uVar16;
      if ((uVar16 == 0 && iVar17 == 0) && (uVar20 == 0 && iVar38 == 0) || bVar43) {
        uVar10 = 0;
        uVar36 = 0;
      }
      if ((((uVar16 != 0 || iVar17 != 0) || (uVar20 != 0 || iVar38 != 0)) && !bVar43) &&
         ((uVar37 != 0x7f || uVar28 != 0) || (uVar25 != 0 || uVar29 != 0))) {
        auStack_200[0] = uVar16;
        uStack_204 = 0;
        uStack_208 = 0;
        uStack_20c = 0;
        uStack_210 = 0;
        auStack_200[1] = uVar20;
        auStack_200[2] = iVar17;
        auStack_200[3] = iVar38;
        uVar10 = 0x7f - uVar37 & 0x1f;
        uVar15 = uVar10 ^ 0x1f;
        iVar31 = -(0x7f - uVar37 >> 3 & 0xc);
        uVar36 = *(uint *)((int)auStack_270 + iVar31 + 0x70);
        uVar22 = *(uint *)((int)auStack_270 + iVar31 + 0x74);
        uVar40 = uVar36 << uVar10;
        uVar36 = uVar22 << uVar10 | (uVar36 >> 1) >> uVar15;
        uStack_278 = -uVar11 + 0x5a;
        bVar43 = CARRY4(uVar25,(uint)(0xfffffffe < uVar37));
        uVar25 = uVar25 + (0xfffffffe < uVar37);
        bVar44 = CARRY4(uVar28,(uint)bVar43);
        uVar28 = uVar28 + bVar43;
        iVar35 = uVar29 + bVar44;
        if (CARRY4(uVar29,(uint)bVar44)) {
          uVar10 = 0;
        }
        else {
          uVar37 = *(uint *)((int)auStack_270 + iVar31 + 0x78);
          uVar29 = *(int *)((int)auStack_270 + iVar31 + 0x7c) << uVar10 | (uVar37 >> 1) >> uVar15;
          uStack_214 = 0;
          uStack_218 = 0;
          uStack_21c = 0;
          uStack_220 = 0;
          uVar24 = uStack_278 & 0x1f;
          auStack_240[5] = uVar20;
          auStack_240[4] = uVar16;
          auStack_240[6] = iVar17;
          iStack_224 = iVar38;
          uVar11 = (uStack_278 & 0x7f) >> 5;
          uVar41 = uVar24 ^ 0x1f;
          uVar20 = auStack_270[uVar11 + 0x12] >> uVar24 |
                   (auStack_270[uVar11 + 0x13] << 1) << uVar41;
          uVar16 = auStack_270[uVar11 + 0x11] >> uVar24 |
                   (auStack_270[uVar11 + 0x12] << 1) << uVar41;
          uVar41 = auStack_270[uVar11 + 0x10] >> uVar24 |
                   (auStack_270[uVar11 + 0x11] << 1) << uVar41;
          uStack_288 = auStack_270[uVar11 + 0x13] >> uVar24;
          uVar11 = 0;
          uStack_284 = uVar37 << uVar10 | (uVar22 >> 1) >> uVar15;
          uStack_280 = uVar40;
          uStack_27c = uVar36;
          do {
            uVar40 = uVar20 << 1 | uVar16 >> 0x1f;
            uVar36 = uVar16 << 1 | uVar41 >> 0x1f;
            uStack_288 = uStack_288 << 1 | uVar20 >> 0x1f;
            uVar16 = uVar41 << 1 | uVar29 >> 0x1f;
            uVar10 = (int)-(uStack_288 +
                           ((uint)(uVar36 < 0x45 || 0x45 - uVar36 < (uint)(uVar16 < 0xd964b800)) <=
                           -uVar40)) >> 0x1f;
            uVar20 = uVar10 & 0xd964b800;
            uVar37 = uVar10 & 0x45;
            uVar41 = uVar16 - uVar20;
            bVar43 = uVar36 - uVar37 < (uint)(uVar20 <= uVar16);
            uVar16 = uVar36 - (uVar37 + (uVar20 > uVar16));
            uVar20 = uVar40 - (uVar37 >= uVar36 && !bVar43);
            uStack_288 = uStack_288 - (uVar40 == 0 && (uVar37 < uVar36 || bVar43) <= uVar40);
            bVar44 = uStack_278 != 0;
            uStack_278 = uStack_278 - 1;
            bVar43 = uVar25 != 0;
            bVar3 = uVar25 < bVar44;
            uVar25 = uVar25 - !bVar44;
            bVar44 = uVar28 == 0;
            bVar2 = (bVar43 || bVar3) <= uVar28;
            uVar28 = uVar28 - (!bVar43 && !bVar3);
            iVar35 = iVar35 - (uint)(bVar44 && bVar2);
            uVar10 = uVar10 & 1;
            uVar40 = uVar11 | uStack_280 << 1;
            uVar36 = uStack_27c << 1 | uStack_280 >> 0x1f;
            uVar29 = uVar29 << 1 | uStack_284 >> 0x1f;
            uVar11 = uVar10;
            uStack_284 = uStack_284 << 1 | uStack_27c >> 0x1f;
            uStack_280 = uVar40;
            uStack_27c = uVar36;
          } while ((uStack_278 != 0 || uVar28 != 0) || (uVar25 != 0 || iVar35 != 0));
        }
        uVar36 = uVar36 << 1 | uVar40 >> 0x1f;
        uVar10 = uVar10 | uVar40 << 1;
      }
      iVar17 = thunk_FUN_01be5118(0x600);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x600);
      }
      iVar38 = 0;
      iVar31 = iVar23 + 1;
      piStack_48 = (int *)0x0;
      piStack_50 = (int *)&DAT_00000040;
      iStack_4c = iVar17;
      do {
        piVar8 = piStack_48;
        bVar43 = piStack_48 < &DAT_00000040;
        piVar12 = piStack_48 + -0x10;
        if (piStack_48 == piStack_50) {
          FUN_00a20de0(&piStack_50);
          iVar17 = iStack_4c;
        }
        piStack_48 = (int *)((int)piVar8 + 1);
        puVar13 = (undefined1 *)(iVar17 + iVar38);
        *puVar13 = 0;
        iVar38 = iVar38 + 0x18;
        *(int **)(puVar13 + 8) = piVar12;
        *(uint *)(puVar13 + 0xc) = -(uint)bVar43;
        *(undefined4 *)(puVar13 + 0x10) = 0;
        *(undefined4 *)(puVar13 + 0x14) = 0;
      } while (piStack_48 != (int *)&DAT_00000040);
      piStack_40 = piStack_50;
      iStack_3c = iStack_4c;
      piStack_38 = piStack_48;
      if ((&DAT_00000040 < piStack_50) &&
         (iVar17 = FUN_0189bb64(&piStack_40,0x40,8,0x18), iVar17 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      piVar8 = piStack_38;
      iVar17 = iStack_3c;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      piVar12 = (int *)thunk_FUN_01be5118(0x50);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x50);
      }
      *(undefined1 *)(piVar12 + 4) = 0;
      *piVar12 = 1;
      piVar12[1] = 1;
      piVar12[2] = iVar17;
      piVar12[3] = (int)piVar8;
      FUN_01bed4e2((undefined1 *)((int)piVar12 + 0x11),&piStack_40,0x17);
      piVar12[0x10] = 0x3f;
      piVar12[0x11] = 1;
      piVar12[0x12] = 0;
      piVar12[0xf] = 0;
      piVar12[0xe] = 0;
      *(undefined1 *)(piVar12 + 0xd) = 0;
      piVar12[0xc] = 0;
      *(undefined1 *)(piVar12 + 0xb) = 0;
      piVar12[10] = 1;
      do {
        iVar17 = *piVar12;
        bVar43 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar43);
      *piVar12 = iVar17 + 1;
      if (iVar17 < 0) goto LAB_00a796fc;
      uStack_60 = 0;
      uStack_5c = 0;
      local_68 = piVar12;
      piStack_58 = piVar12;
      piStack_40 = piVar12;
      FUN_009cca60();
      iVar17 = thunk_FUN_01be5118(0x4b0);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x4b0);
      }
      uVar11 = (int)uVar39 >> 0x1f;
      uVar20 = local_274 - uVar14 ^ uVar11;
      uVar28 = uVar20 - uVar11;
      uVar16 = uVar18 - (uVar14 + (uVar14 > local_274)) ^ uVar11;
      uVar25 = uVar21 - (uVar14 + (uVar14 >= uVar18 && !bVar45)) ^ uVar11;
      bVar43 = uVar16 - uVar11 < (uint)(uVar11 <= uVar20);
      iVar27 = uVar16 - (uVar11 + (uVar11 > uVar20));
      iVar32 = uVar25 - (uVar11 + (uVar11 >= uVar16 && !bVar43));
      iVar35 = LZCOUNT(uVar28) + 0x20;
      uVar20 = LZCOUNT(iVar32) + 0x20;
      iVar38 = (uVar39 ^ uVar11) -
               (uVar11 + (uVar25 <= uVar11 && (uint)(uVar11 < uVar16 || bVar43) <= uVar25 - uVar11))
      ;
      if (iVar38 != 0) {
        uVar20 = LZCOUNT(iVar38);
      }
      if (iVar27 != 0) {
        iVar35 = LZCOUNT(iVar27);
      }
      if (iVar32 == 0 && iVar38 == 0) {
        uVar20 = iVar35 + 0x40;
      }
      bVar43 = 0x62 < uVar20;
      uVar37 = -uVar20 + 0x62;
      uVar16 = -(uint)bVar43;
      uVar29 = -(uint)bVar43;
      uVar25 = (uint)bVar43;
      uVar39 = -uVar25;
      bVar43 = ((uint)bVar43 < (uint)((uint)bVar43 < (uint)(uVar37 < 0x80))) <= uVar25;
      uVar25 = uVar28;
      if ((uVar28 == 0 && iVar32 == 0) && (iVar27 == 0 && iVar38 == 0) || bVar43) {
        uVar25 = 0;
      }
      if ((((uVar28 != 0 || iVar32 != 0) || (iVar27 != 0 || iVar38 != 0)) && !bVar43) &&
         ((uVar37 != 0x7f || uVar29 != 0) || (uVar16 != 0 || uVar39 != 0))) {
        auStack_240[0] = uVar28;
        uStack_244 = 0;
        auStack_240[1] = iVar27;
        uVar40 = 0x7f - uVar37 & 0x1f;
        uStack_248 = 0;
        uStack_24c = 0;
        uStack_250 = 0;
        auStack_240[2] = iVar32;
        auStack_240[3] = iVar38;
        uStack_27c = -uVar20 + 99;
        bVar43 = CARRY4(uVar16,(uint)(0xfffffffe < uVar37));
        uVar16 = uVar16 + (0xfffffffe < uVar37);
        iVar35 = -(0x7f - uVar37 >> 3 & 0xc);
        uVar25 = *(uint *)((int)auStack_270 + iVar35 + 0x30);
        uVar20 = uVar25 << uVar40;
        bVar45 = CARRY4(uVar29,(uint)bVar43);
        uVar29 = uVar29 + bVar43;
        iVar19 = uVar39 + bVar45;
        if (CARRY4(uVar39,(uint)bVar45)) {
          uVar25 = 0;
        }
        else {
          uVar41 = *(uint *)((int)auStack_270 + iVar35 + 0x34);
          uVar18 = *(uint *)((int)auStack_270 + iVar35 + 0x38);
          uVar37 = uVar40 ^ 0x1f;
          uStack_280 = uVar41 << uVar40 | (uVar25 >> 1) >> uVar37;
          uStack_278 = *(int *)((int)auStack_270 + iVar35 + 0x3c) << uVar40 |
                       (uVar18 >> 1) >> uVar37;
          auStack_270[0] = uVar28;
          uStack_254 = 0;
          uStack_258 = 0;
          uStack_25c = 0;
          uStack_260 = 0;
          auStack_270[1] = iVar27;
          auStack_270[2] = iVar32;
          uVar25 = uStack_27c & 0x1f;
          auStack_270[3] = iVar38;
          uVar24 = (uStack_27c & 0x7f) >> 5;
          uVar39 = uVar25 ^ 0x1f;
          uVar22 = auStack_270[uVar24 + 2] >> uVar25 | (auStack_270[uVar24 + 3] << 1) << uVar39;
          uVar15 = auStack_270[uVar24 + 1] >> uVar25 | (auStack_270[uVar24 + 2] << 1) << uVar39;
          uVar21 = auStack_270[uVar24] >> uVar25 | (auStack_270[uVar24 + 1] << 1) << uVar39;
          uVar39 = auStack_270[uVar24 + 3] >> uVar25;
          local_274 = 0;
          uVar37 = uVar18 << uVar40 | (uVar41 >> 1) >> uVar37;
          do {
            uVar39 = uVar39 << 1 | uVar22 >> 0x1f;
            uVar41 = uVar15 << 1 | uVar21 >> 0x1f;
            uVar18 = uVar22 << 1 | uVar15 >> 0x1f;
            puVar34 = (undefined1 *)(uVar21 << 1 | uStack_278 >> 0x1f);
            uVar40 = (int)-(uVar39 + ((uint)(-uVar41 < (uint)(puVar34 < &DAT_3b9aca00)) <= -uVar18))
                     >> 0x1f;
            uVar25 = uVar40 & 1;
            puVar13 = (undefined1 *)(uVar40 & 1000000000);
            uVar21 = (int)puVar34 - (int)puVar13;
            bVar43 = uVar41 < (puVar13 <= puVar34);
            uVar15 = uVar41 - (puVar13 > puVar34);
            uVar22 = uVar18 - (uVar41 == 0 && !bVar43);
            uVar39 = uVar39 - (uVar18 == 0 && (uVar41 != 0 || bVar43) <= uVar18);
            bVar45 = uStack_27c != 0;
            uStack_27c = uStack_27c - 1;
            bVar43 = uVar16 != 0;
            bVar44 = uVar16 < bVar45;
            uVar16 = uVar16 - !bVar45;
            bVar45 = uVar29 == 0;
            bVar3 = (bVar43 || bVar44) <= uVar29;
            uVar29 = uVar29 - (!bVar43 && !bVar44);
            iVar19 = iVar19 - (uint)(bVar45 && bVar3);
            uVar40 = uStack_280 >> 0x1f;
            uStack_278 = uStack_278 << 1 | uVar37 >> 0x1f;
            uStack_280 = uStack_280 << 1 | uVar20 >> 0x1f;
            uVar20 = local_274 | uVar20 << 1;
            uVar37 = uVar37 << 1 | uVar40;
            local_274 = uVar25;
          } while ((uStack_27c != 0 || uVar29 != 0) || (uVar16 != 0 || iVar19 != 0));
        }
        uVar25 = uVar25 | uVar20 << 1;
      }
      local_b1 = CONCAT31(300,(undefined1)local_b1);
      puStack_98 = &DAT_3b9aca00;
      uStack_a4 = 0;
      uStack_a8 = 0;
      iStack_ad = iVar17 << 8;
      uStack_a9 = (undefined1)((uint)iVar17 >> 0x18);
      uStack_b4 = 0;
      uStack_b5 = 0;
      local_90 = auStack_10c[iVar23 * 4 + -1];
      uStack_74 = 0;
      local_bc = 1;
      uStack_bb = 0;
      auStack_b9 = (undefined1  [4])0x0;
      local_c0 = (int *)&DAT_00000001;
      local_78 = (uVar28 + uVar25 * -1000000000 ^ uVar11) - uVar11;
      local_80 = (uVar10 ^ uVar14) - uVar14;
      local_7c = (uVar36 ^ uVar14) - (uVar14 + ((uVar10 ^ uVar14) < uVar14));
      local_70 = piVar12;
      iVar17 = thunk_FUN_01be5118(0x58);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x58);
      }
      FUN_01bed4e2(iVar17,&local_c0,0x58);
      *(int *)(iVar7 + iVar23 * 4) = iVar17;
      iVar23 = iVar31;
    } while (iVar31 != 4);
    uStack_c8 = 4;
    local_68 = piStack_d0;
    local_64 = iStack_cc;
    uStack_60 = 4;
    iVar7 = thunk_FUN_01be5118(0x60);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0x60);
    }
    iVar23 = 0;
    local_110 = (int *)0x0;
    local_118 = (int *)&SUB_00000004;
    local_114 = iVar7;
    do {
      piVar8 = local_110;
      bVar43 = local_110 < &SUB_00000004;
      piVar12 = local_110 + -1;
      if (local_110 == local_118) {
        FUN_00a20de0(&local_118);
        iVar7 = local_114;
      }
      local_110 = (int *)((int)piVar8 + 1);
      puVar13 = (undefined1 *)(iVar7 + iVar23);
      *puVar13 = 0;
      iVar23 = iVar23 + 0x18;
      *(int **)(puVar13 + 8) = piVar12;
      *(uint *)(puVar13 + 0xc) = -(uint)bVar43;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
    } while (local_110 != (int *)&SUB_00000004);
    local_c0 = local_118;
    local_bc = (undefined1)local_114;
    uStack_bb = (undefined2)((uint)local_114 >> 8);
    auStack_b9[0] = (undefined1)((uint)local_114 >> 0x18);
    uStack_b5 = 0;
    piVar8 = (int *)(uint)(uint3)auStack_b9._1_3_;
    if (piVar8 < local_118) {
      iVar7 = FUN_0189bb64(&local_c0,piVar8,8,0x18);
      if (iVar7 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      piVar8 = (int *)CONCAT13(uStack_b5,auStack_b9._1_3_);
    }
    iVar7 = CONCAT13(auStack_b9[0],CONCAT21(uStack_bb,local_bc));
    iStack_ad = 0;
    local_b1 = 0;
    uStack_b5 = 0;
    uStack_b4 = 0;
    uStack_b3 = 0;
    auStack_b9 = (undefined1  [4])0x0;
    piVar12 = (int *)thunk_FUN_01be5118(0x50);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x50);
    }
    piVar12[3] = (int)piVar8;
    *(undefined1 *)(piVar12 + 4) = 0;
    *piVar12 = 1;
    piVar12[1] = 1;
    piVar12[2] = iVar7;
    FUN_01bed4e2((int)piVar12 + 0x11,&local_c0,0x17);
    piVar12[0x11] = 1;
    piVar12[0x10] = 3;
    piVar12[0x12] = 0;
    piVar12[0xf] = 0;
    piVar12[0xe] = 0;
    *(undefined1 *)(piVar12 + 0xd) = 0;
    piVar12[0xc] = 0;
    *(undefined1 *)(piVar12 + 0xb) = 0;
    piVar12[10] = 1;
    do {
      iVar7 = *piVar12;
      bVar43 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar43);
    *piVar12 = iVar7 + 1;
    if (-1 < iVar7) {
      iStack_ad._0_1_ = (undefined1)((uint)piVar12 >> 0x18);
      uStack_b4 = 0;
      uStack_b3 = 0;
      local_b1 = (int)piVar12 << 8;
      auStack_b9._1_3_ = 0;
      uStack_b5 = 0;
      local_c0 = piVar12;
      FUN_009cd11c(auStack_b9 + 1);
      piVar8 = (int *)CONCAT13((undefined1)iStack_ad,local_b1._1_3_);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar43 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar43);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95994(CONCAT13((undefined1)iStack_ad,local_b1._1_3_));
      }
      *param_1 = auStack_1c0[4];
      param_1[1] = auStack_1c0[5];
      param_1[2] = auStack_1c0[6];
      param_1[3] = auStack_1c0[7];
      param_1[4] = local_1a0;
      param_1[5] = uStack_19c;
      param_1[6] = uStack_198;
      param_1[7] = uStack_194;
      param_1[8] = uStack_190;
      param_1[9] = local_18c;
      param_1[10] = uStack_188;
      param_1[0xb] = uStack_184;
      param_1[0xc] = uStack_180;
      param_1[0xd] = uStack_17c;
      param_1[0xe] = puStack_178;
      param_1[0xf] = local_174;
      FUN_01bed4e2(param_1 + 0x10,&local_170,0x54);
      param_1[0x25] = local_68;
      param_1[0x26] = local_64;
      param_1[0x27] = uStack_60;
      param_1[0x28] = piVar12;
      return;
    }
  }
LAB_00a796fc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xa796fc);
  (*pcVar1)();
}

