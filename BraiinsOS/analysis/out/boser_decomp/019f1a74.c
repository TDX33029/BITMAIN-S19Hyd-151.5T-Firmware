// FUN_019f1a74 @ 019f1a74 size=2156 calls_out=10 calls_in=11
// strings: overflow when subtracting duration from instantMatching variant not foundrisingfalling | too much time has elapsed since the interval was supposed to tick

void FUN_019f1a74(uint *param_1,uint *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 extraout_r1;
  undefined1 *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 *puVar36;
  bool bVar37;
  bool bVar38;
  undefined8 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined *puVar44;
  undefined *puVar45;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80 [6];
  undefined1 *local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  undefined1 *local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar17 = param_2[4];
  iVar8 = FUN_019e84a0(uVar17,param_3);
  if (iVar8 != 0) {
    puVar36 = &DAT_3b9aca00;
    goto LAB_019f2288;
  }
  uVar32 = *(uint *)(uVar17 + 0x38);
  uVar30 = *(uint *)(uVar17 + 0x3c);
  puVar36 = *(undefined1 **)(uVar17 + 0x40);
  FUN_019ac130(&local_40,1);
  uVar27 = local_38;
  uVar16 = local_3c;
  uVar13 = local_40;
  puVar44 = &DAT_004c4b40;
  uVar40 = 0;
  uVar42 = 0;
  FUN_019fa158(&local_40,extraout_r1,uVar32,uVar30,puVar36);
  bVar37 = (int)(local_3c - (uVar16 + (local_40 < uVar13))) < 0 !=
           (SBORROW4(local_3c,uVar16) != SBORROW4(local_3c - uVar16,(uint)(local_40 < uVar13)));
  if (uVar13 == local_40 && uVar16 == local_3c) {
    bVar37 = local_38 < uVar27;
  }
  if (bVar37) {
    uVar40 = *param_2;
    uVar42 = param_2[1];
    puVar44 = (undefined *)param_2[2];
    if ((char)param_2[5] == '\0') {
      FUN_019fa158(local_b0 + 0x10,local_3c,uVar32,uVar30,puVar36);
    }
    else {
      if ((char)param_2[5] == '\x01') {
        FUN_019fa158(local_b0 + 0x10,local_3c,uVar13,uVar16,uVar27);
        uVar41 = uVar40;
        uVar43 = uVar42;
        puVar45 = puVar44;
      }
      else {
        uVar41 = uVar40;
        uVar43 = uVar42;
        puVar45 = puVar44;
        FUN_019fa158(&local_40,local_3c,uVar13,uVar16,uVar27);
        uVar7 = local_38;
        uVar6 = local_40;
        local_60 = uVar13;
        local_5c = uVar16;
        local_58 = uVar27;
        local_50 = uVar32;
        local_4c = uVar30;
        local_48 = puVar36;
        FUN_019ac248(&local_40,&local_60,&local_50);
        uVar13 = (uint)((ulonglong)uVar40 * 1000000000);
        lVar4 = (ulonglong)uVar42 * 1000000000 + ((ulonglong)uVar40 * 1000000000 >> 0x20);
        uVar16 = (uint)lVar4;
        uVar27 = (uint)((ulonglong)lVar4 >> 0x20);
        puVar11 = puVar44 + uVar13;
        bVar37 = CARRY4(uVar16,(uint)CARRY4(uVar13,(uint)puVar44));
        uVar16 = uVar16 + CARRY4(uVar13,(uint)puVar44);
        uVar40 = uVar27 + bVar37;
        uVar13 = (uint)CARRY4(uVar27,(uint)bVar37);
        if ((puVar11 == (undefined *)0x0 && uVar40 == 0) && (uVar16 == 0 && uVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_013079d0(&DAT_01d29880);
        }
        uVar27 = (uint)((ulonglong)local_38 * 1000000000);
        lVar4 = (ulonglong)local_34 * 1000000000 + ((ulonglong)local_38 * 1000000000 >> 0x20);
        uVar42 = (uint)lVar4;
        uVar28 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar24 = uVar27 + local_30;
        bVar37 = CARRY4(uVar42,(uint)CARRY4(uVar27,local_30));
        uVar42 = uVar42 + CARRY4(uVar27,local_30);
        uVar33 = uVar28 + bVar37;
        uVar27 = (uint)CARRY4(uVar28,(uint)bVar37);
        bVar37 = (local_40 & 1) != 0;
        if (bVar37) {
          uVar33 = 0;
        }
        if (bVar37) {
          uVar24 = 0;
        }
        if (bVar37) {
          uVar42 = 0;
          uVar27 = 0;
        }
        uVar28 = LZCOUNT(uVar33) + 0x20;
        if (uVar27 != 0) {
          uVar28 = LZCOUNT(uVar27);
        }
        iVar8 = LZCOUNT(uVar24) + 0x20;
        if (uVar42 != 0) {
          iVar8 = LZCOUNT(uVar42);
        }
        if (uVar33 == 0 && uVar27 == 0) {
          uVar28 = iVar8 + 0x40;
        }
        uVar14 = LZCOUNT(uVar40) + 0x20;
        if (uVar13 != 0) {
          uVar14 = LZCOUNT(uVar13);
        }
        iVar8 = LZCOUNT(puVar11) + 0x20;
        if (uVar16 != 0) {
          iVar8 = LZCOUNT(uVar16);
        }
        if (uVar40 == 0 && uVar13 == 0) {
          uVar14 = iVar8 + 0x40;
        }
        bVar37 = uVar14 < uVar28;
        uVar14 = uVar14 - uVar28;
        uVar35 = -(uint)bVar37;
        uVar31 = -(uint)bVar37;
        uVar28 = (uint)bVar37;
        uVar21 = -uVar28;
        bVar37 = ((uint)bVar37 < (uint)((uint)bVar37 < (uint)(uVar14 < 0x80))) <= uVar28;
        uVar34 = uVar27;
        uVar28 = uVar33;
        uVar9 = uVar24;
        uVar22 = uVar42;
        if (((puVar11 == (undefined *)0x0 && uVar40 == 0) && (uVar16 == 0 && uVar13 == 0) ||
            (uVar24 == 0 && uVar33 == 0) && (uVar42 == 0 && uVar27 == 0)) || bVar37) {
          uVar22 = 0;
          uVar9 = 0;
          uVar28 = 0;
          uVar34 = 0;
        }
        if (((((puVar11 != (undefined *)0x0 || uVar40 != 0) || (uVar16 != 0 || uVar13 != 0)) &&
             ((uVar24 != 0 || uVar33 != 0) || (uVar42 != 0 || uVar27 != 0))) && !bVar37) &&
           ((uVar14 != 0x7f || uVar31 != 0) || (uVar35 != 0 || uVar21 != 0))) {
          uVar9 = 0;
          local_80[0] = uVar24;
          local_84 = 0;
          local_88 = 0;
          local_8c = 0;
          local_90 = 0;
          local_80[1] = uVar42;
          local_80[2] = uVar33;
          local_80[3] = uVar27;
          uVar22 = 0x7f - uVar14 & 0x1f;
          iVar8 = -(0x7f - uVar14 >> 3 & 0xc);
          uVar28 = *(uint *)((int)local_b0 + iVar8 + 0x30);
          uVar25 = *(uint *)((int)local_b0 + iVar8 + 0x34);
          uVar18 = *(uint *)((int)local_b0 + iVar8 + 0x38);
          uVar29 = uVar22 ^ 0x1f;
          uVar34 = uVar25 << uVar22 | (uVar28 >> 1) >> uVar29;
          local_b4 = *(int *)((int)local_b0 + iVar8 + 0x3c) << uVar22 | (uVar18 >> 1) >> uVar29;
          uVar18 = uVar18 << uVar22 | (uVar25 >> 1) >> uVar29;
          uVar28 = uVar28 << uVar22;
          local_c0 = uVar14 + 1;
          bVar37 = CARRY4(uVar35,(uint)(0xfffffffe < uVar14));
          uVar35 = uVar35 + (0xfffffffe < uVar14);
          bVar1 = CARRY4(uVar31,(uint)bVar37);
          uVar31 = uVar31 + bVar37;
          iVar8 = uVar21 + bVar1;
          if (!CARRY4(uVar21,(uint)bVar1)) {
            local_94 = 0;
            local_98 = 0;
            uVar22 = local_c0 & 0x1f;
            local_9c = 0;
            local_a0 = 0;
            local_b0[0] = uVar24;
            local_b0[1] = uVar42;
            local_b0[2] = uVar33;
            local_b0[3] = uVar27;
            uVar21 = (local_c0 & 0x7f) >> 5;
            uVar9 = uVar22 ^ 0x1f;
            uVar25 = local_b0[uVar21 + 2] >> uVar22 | (local_b0[uVar21 + 3] << 1) << uVar9;
            uVar19 = local_b0[uVar21 + 1] >> uVar22 | (local_b0[uVar21 + 2] << 1) << uVar9;
            uVar14 = local_b0[uVar21 + 3] >> uVar22;
            uVar15 = local_b0[uVar21] >> uVar22 | (local_b0[uVar21 + 1] << 1) << uVar9;
            bVar37 = uVar16 < (puVar11 != (undefined *)0x0);
            uVar29 = uVar16 - (puVar11 == (undefined *)0x0);
            uVar12 = uVar40 - (uVar16 == 0 && !bVar37);
            uVar21 = 0;
            uVar22 = uVar34;
            local_bc = uVar28;
            local_b8 = uVar18;
            do {
              uVar14 = uVar14 << 1 | uVar25 >> 0x1f;
              uVar26 = uVar25 << 1 | uVar19 >> 0x1f;
              puVar20 = (undefined *)(uVar15 << 1 | local_b4 >> 0x1f);
              uVar23 = uVar19 << 1 | uVar15 >> 0x1f;
              uVar28 = (int)((uVar13 - (uVar40 == 0 && (uVar16 != 0 || bVar37) <= uVar40)) -
                            (uVar14 + (uVar12 <= uVar26 &&
                                      (uint)(uVar23 < uVar29 ||
                                            uVar29 - uVar23 < (uint)(puVar20 <= puVar11 + -1)) <=
                                      uVar12 - uVar26))) >> 0x1f;
              puVar44 = (undefined *)((uint)puVar11 & uVar28);
              uVar18 = uVar40 & uVar28;
              uVar15 = (int)puVar20 - (int)puVar44;
              uVar34 = uVar16 & uVar28;
              bVar1 = uVar23 - uVar34 < (uint)(puVar44 <= puVar20);
              uVar19 = uVar23 - (uVar34 + (puVar44 > puVar20));
              uVar9 = uVar28 & 1;
              uVar25 = uVar26 - (uVar18 + (uVar34 >= uVar23 && !bVar1));
              uVar14 = uVar14 - ((uVar13 & uVar28) +
                                (uint)(uVar26 <= uVar18 &&
                                      (uint)(uVar34 < uVar23 || bVar1) <= uVar26 - uVar18));
              bVar38 = local_c0 != 0;
              local_c0 = local_c0 - 1;
              bVar1 = uVar35 != 0;
              bVar2 = uVar35 < bVar38;
              uVar35 = uVar35 - !bVar38;
              bVar38 = uVar31 == 0;
              bVar3 = (bVar1 || bVar2) <= uVar31;
              uVar31 = uVar31 - (!bVar1 && !bVar2);
              iVar8 = iVar8 - (uint)(bVar38 && bVar3);
              uVar28 = uVar21 | local_bc << 1;
              uVar34 = uVar22 << 1 | local_bc >> 0x1f;
              uVar18 = local_b8 << 1 | uVar22 >> 0x1f;
              local_b4 = local_b4 << 1 | local_b8 >> 0x1f;
              uVar21 = uVar9;
              uVar22 = uVar34;
              local_bc = uVar28;
              local_b8 = uVar18;
            } while ((local_c0 != 0 || uVar31 != 0) || (uVar35 != 0 || iVar8 != 0));
          }
          uVar22 = uVar34 << 1 | uVar28 >> 0x1f;
          uVar9 = uVar9 | uVar28 << 1;
          uVar28 = uVar18 << 1 | uVar34 >> 0x1f;
          uVar34 = local_b4 << 1 | uVar18 >> 0x1f;
        }
        uVar14 = (uint)((ulonglong)uVar9 * ZEXT48(puVar11));
        lVar4 = (ulonglong)uVar9 * (ulonglong)uVar16 + ((ulonglong)uVar9 * ZEXT48(puVar11) >> 0x20);
        uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar5 = (ulonglong)uVar22 * ZEXT48(puVar11);
        uVar35 = (uint)((ulonglong)lVar5 >> 0x20);
        uVar18 = (uint)(lVar4 + lVar5);
        uVar25 = (uint)((ulonglong)uVar40 * (ulonglong)uVar9);
        uVar31 = (uint)(ZEXT48(puVar11) * (ulonglong)uVar28);
        lVar4 = (ulonglong)uVar22 * (ulonglong)uVar16 +
                (ulonglong)
                CONCAT14(CARRY4(uVar21,uVar35) ||
                         CARRY4(uVar21 + uVar35,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                         (int)((ulonglong)(lVar4 + lVar5) >> 0x20)) +
                CONCAT44(uVar34 * (int)puVar11 +
                         uVar28 * uVar16 + (int)(ZEXT48(puVar11) * (ulonglong)uVar28 >> 0x20) +
                         uVar22 * uVar40 +
                         uVar9 * uVar13 + (int)((ulonglong)uVar40 * (ulonglong)uVar9 >> 0x20) +
                         (uint)CARRY4(uVar31,uVar25),uVar31 + uVar25);
        uVar16 = (uint)lVar4;
        bVar37 = uVar42 - uVar18 < (uint)(uVar14 <= uVar24);
        uVar13 = (int)((ulonglong)lVar4 >> 0x20) +
                 (uint)(uVar33 <= uVar16 && (uint)(uVar18 < uVar42 || bVar37) <= uVar33 - uVar16);
        if (uVar27 != uVar13 ||
            uVar27 - uVar13 < (uint)(uVar33 != uVar16 + (uVar18 >= uVar42 && !bVar37))) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("too much time has elapsed since the interval was supposed to tick",0x41,
                       &local_40,&DAT_01d29810,&DAT_01d29890);
        }
        uVar39 = FUN_01bf0ff0(uVar24 - uVar14,uVar42 - (uVar18 + (uVar14 > uVar24)),&DAT_3b9aca00,0)
        ;
        uVar16 = (uint)((ulonglong)uVar39 >> 0x20);
        uVar13 = (uint)uVar39;
        local_80[4] = uVar6 - uVar13;
        uVar27 = local_3c - (uVar16 + (uVar6 < uVar13));
        if ((int)((local_3c ^ uVar16) & (local_3c ^ uVar27)) < 0) {
LAB_019f2294:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("overflow when subtracting duration from instantMatching variant not foundrisingfalling"
                       ,0x2f,&DAT_01d281e4);
        }
        local_68 = (undefined1 *)(uVar7 + (uVar13 * 1000000000 - (uVar24 - uVar14)));
        if ((int)local_68 < 0) {
          bVar37 = local_80[4] == 0;
          local_80[4] = local_80[4] - 1;
          local_80[5] = uVar27 - bVar37;
          if ((int)(uVar27 & (uVar27 ^ local_80[5])) < 0) goto LAB_019f2294;
          local_68 = &DAT_3b9aca00 + (int)local_68;
        }
        else {
          local_80[5] = uVar27;
        }
      }
      uVar40 = uVar41;
      uVar42 = uVar43;
      puVar44 = puVar45;
    }
  }
  else {
    uVar27 = param_2[1];
    uVar16 = uVar32 + *param_2;
    uVar13 = uVar30 + uVar27 + (uint)CARRY4(uVar32,*param_2);
    if ((int)uVar27 < 0 == (int)((uVar30 ^ uVar13) & ~(uVar30 ^ uVar27)) < 0) {
      puVar10 = puVar36 + param_2[2];
      if (&DAT_3b9aca00 <= puVar10) {
        bVar37 = 0xfffffffe < uVar16;
        uVar16 = uVar16 + 1;
        uVar27 = uVar13 + bVar37;
        if ((int)((uVar13 ^ uVar27) & ~uVar13) < 0) goto LAB_019f1c10;
        puVar10 = puVar10 + -1000000000;
        uVar13 = uVar27;
      }
      local_80[4] = uVar16;
      local_80[5] = uVar13;
      local_68 = puVar10;
    }
    else {
LAB_019f1c10:
      FUN_019f9078(local_b0 + 0x10);
    }
  }
  FUN_019f598c(uVar17,0,local_80[4],local_80[5],local_68,0,uVar40,uVar42,puVar44);
  *param_1 = uVar32;
  param_1[1] = uVar30;
LAB_019f2288:
  param_1[2] = (uint)puVar36;
  return;
}

