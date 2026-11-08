// FUN_016510c8 @ 016510c8 size=2412 calls_out=8 calls_in=8
// strings: too much time has elapsed since the interval was supposed to ticksignal sender went away

void FUN_016510c8(uint *param_1,uint *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
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
  bool bVar35;
  bool bVar36;
  undefined8 uVar37;
  undefined *local_fc;
  uint local_f0;
  uint local_ec;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70 [6];
  undefined *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  undefined *local_38;
  uint local_34;
  uint local_30;
  
  uVar33 = param_2[4];
  iVar6 = FUN_01657fc4(uVar33,param_3);
  if (iVar6 != 0) {
    param_1[2] = (uint)&DAT_3b9aca00;
    return;
  }
  uVar32 = *(uint *)(uVar33 + 0x38);
  uVar13 = *(uint *)(uVar33 + 0x3c);
  uVar31 = *(uint *)(uVar33 + 0x40);
  FUN_0165a798(&local_40);
  if (uVar31 < 995000000) {
    puVar14 = &DAT_004c4b40 + uVar31;
    uVar21 = uVar32;
    uVar28 = uVar13;
  }
  else {
    uVar28 = uVar13 + (0xfffffffe < uVar32);
    if ((int)((uVar13 ^ uVar28) & ~uVar13) < 0) goto LAB_0165114c;
    puVar14 = (undefined *)(uVar31 + 0xc4b18140);
    uVar21 = uVar32 + 1;
  }
  bVar35 = (int)(uVar28 - (local_3c + (uVar21 < local_40))) < 0 !=
           (SBORROW4(uVar28,local_3c) != SBORROW4(uVar28 - local_3c,(uint)(uVar21 < local_40)));
  if (local_40 == uVar21 && local_3c == uVar28) {
    bVar35 = puVar14 < local_38;
  }
  if (bVar35) {
    uVar21 = *param_2;
    uVar15 = param_2[1];
    uVar24 = param_2[2];
    if ((char)param_2[5] == '\0') {
      uVar28 = uVar32 + uVar21;
      uVar21 = uVar13 + uVar15 + (uint)CARRY4(uVar32,uVar21);
      if ((int)uVar15 < 0 != (int)((uVar13 ^ uVar21) & ~(uVar13 ^ uVar15)) < 0) goto LAB_0165114c;
      local_fc = (undefined *)(uVar24 + uVar31);
      if (local_fc < &DAT_3b9aca00) {
      }
      else {
        bVar35 = 0xfffffffe < uVar28;
        uVar28 = uVar28 + 1;
        uVar15 = uVar21 + bVar35;
        if ((int)((uVar21 ^ uVar15) & ~uVar21) < 0) goto LAB_0165114c;
        local_fc = local_fc + -1000000000;
        uVar21 = uVar15;
      }
      goto LAB_016519c4;
    }
    if ((char)param_2[5] != '\x01') {
      local_ec = local_40 + uVar21;
      local_f0 = local_3c + uVar15 + (uint)CARRY4(local_40,uVar21);
      if ((int)uVar15 < 0 == (int)((local_3c ^ local_f0) & ~(local_3c ^ uVar15)) < 0) {
        local_fc = local_38 + uVar24;
        if (&DAT_3b9aca00 <= local_fc) {
          bVar35 = 0xfffffffe < local_ec;
          local_ec = local_ec + 1;
          uVar28 = local_f0 + bVar35;
          if ((int)((local_f0 ^ uVar28) & ~local_f0) < 0) goto LAB_0165114c;
          local_fc = local_fc + -1000000000;
          local_f0 = uVar28;
        }
        local_70[4] = local_40;
        local_70[5] = local_3c;
        local_58 = local_38;
        local_50 = uVar32;
        local_4c = uVar13;
        local_48 = uVar31;
        FUN_015f3c24(&local_40,local_a0 + 0x10,&local_50);
        uVar28 = (uint)((ulonglong)uVar21 * 1000000000);
        lVar4 = (ulonglong)uVar15 * 1000000000 + ((ulonglong)uVar21 * 1000000000 >> 0x20);
        uVar15 = (uint)lVar4;
        uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar25 = uVar28 + uVar24;
        bVar35 = CARRY4(uVar15,(uint)CARRY4(uVar28,uVar24));
        uVar15 = uVar15 + CARRY4(uVar28,uVar24);
        uVar28 = uVar21 + bVar35;
        uVar21 = (uint)CARRY4(uVar21,(uint)bVar35);
        if ((uVar25 == 0 && uVar28 == 0) && (uVar15 == 0 && uVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb7c58(&DAT_018acd6c);
        }
        uVar29 = (uint)(ZEXT48(local_38) * 1000000000);
        lVar4 = (ulonglong)local_34 * 1000000000 + (ZEXT48(local_38) * 1000000000 >> 0x20);
        uVar16 = (uint)lVar4;
        uVar24 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar22 = uVar29 + local_30;
        bVar35 = CARRY4(uVar16,(uint)CARRY4(uVar29,local_30));
        uVar16 = uVar16 + CARRY4(uVar29,local_30);
        uVar29 = uVar24 + bVar35;
        uVar24 = (uint)CARRY4(uVar24,(uint)bVar35);
        bVar35 = (local_40 & 1) != 0;
        if (bVar35) {
          uVar29 = 0;
        }
        if (bVar35) {
          uVar22 = 0;
        }
        if (bVar35) {
          uVar16 = 0;
          uVar24 = 0;
        }
        uVar7 = LZCOUNT(uVar29) + 0x20;
        if (uVar24 != 0) {
          uVar7 = LZCOUNT(uVar24);
        }
        iVar6 = LZCOUNT(uVar22) + 0x20;
        if (uVar16 != 0) {
          iVar6 = LZCOUNT(uVar16);
        }
        if (uVar29 == 0 && uVar24 == 0) {
          uVar7 = iVar6 + 0x40;
        }
        uVar10 = LZCOUNT(uVar28) + 0x20;
        if (uVar21 != 0) {
          uVar10 = LZCOUNT(uVar21);
        }
        iVar6 = LZCOUNT(uVar25) + 0x20;
        if (uVar15 != 0) {
          iVar6 = LZCOUNT(uVar15);
        }
        if (uVar28 == 0 && uVar21 == 0) {
          uVar10 = iVar6 + 0x40;
        }
        bVar35 = uVar10 < uVar7;
        uVar10 = uVar10 - uVar7;
        local_b0 = -(uint)bVar35;
        local_b4 = -(uint)bVar35;
        uVar7 = (uint)bVar35;
        uVar9 = -uVar7;
        bVar35 = ((uint)bVar35 < (uint)((uint)bVar35 < (uint)(uVar10 < 0x80))) <= uVar7;
        uVar34 = uVar24;
        uVar23 = uVar29;
        uVar11 = uVar16;
        uVar7 = uVar22;
        if (((uVar25 == 0 && uVar28 == 0) && (uVar15 == 0 && uVar21 == 0) ||
            (uVar22 == 0 && uVar29 == 0) && (uVar16 == 0 && uVar24 == 0)) || bVar35) {
          uVar7 = 0;
          uVar11 = 0;
          uVar23 = 0;
          uVar34 = 0;
        }
        if (((((uVar25 != 0 || uVar28 != 0) || (uVar15 != 0 || uVar21 != 0)) &&
             ((uVar22 != 0 || uVar29 != 0) || (uVar16 != 0 || uVar24 != 0))) && !bVar35) &&
           ((uVar10 != 0x7f || local_b4 != 0) || (local_b0 != 0 || uVar9 != 0))) {
          uVar7 = 0;
          local_70[0] = uVar22;
          local_70[1] = uVar16;
          local_70[2] = uVar29;
          local_70[3] = uVar24;
          local_74 = 0;
          local_78 = 0;
          uVar11 = 0x7f - uVar10 & 0x1f;
          local_7c = 0;
          local_80 = 0;
          iVar6 = -(0x7f - uVar10 >> 3 & 0xc);
          uVar23 = *(uint *)((int)local_a0 + iVar6 + 0x30);
          uVar26 = *(uint *)((int)local_a0 + iVar6 + 0x34);
          uVar17 = *(uint *)((int)local_a0 + iVar6 + 0x38);
          uVar12 = uVar11 ^ 0x1f;
          uVar34 = uVar26 << uVar11 | (uVar23 >> 1) >> uVar12;
          local_a4 = *(int *)((int)local_a0 + iVar6 + 0x3c) << uVar11 | (uVar17 >> 1) >> uVar12;
          uVar23 = uVar23 << uVar11;
          local_ac = uVar10 + 1;
          bVar35 = CARRY4(local_b0,(uint)(0xfffffffe < uVar10));
          local_b0 = local_b0 + (0xfffffffe < uVar10);
          uVar10 = uVar17 << uVar11 | (uVar26 >> 1) >> uVar12;
          bVar1 = CARRY4(local_b4,(uint)bVar35);
          local_b4 = local_b4 + bVar35;
          iVar6 = uVar9 + bVar1;
          if (!CARRY4(uVar9,(uint)bVar1)) {
            local_84 = 0;
            local_88 = 0;
            uVar11 = local_ac & 0x1f;
            local_8c = 0;
            local_90 = 0;
            local_a0[0] = uVar22;
            local_a0[2] = uVar29;
            local_a0[3] = uVar24;
            local_a0[1] = uVar16;
            uVar7 = (local_ac & 0x7f) >> 5;
            uVar9 = uVar11 ^ 0x1f;
            uVar26 = local_a0[uVar7 + 2] >> uVar11 | (local_a0[uVar7 + 3] << 1) << uVar9;
            uVar18 = local_a0[uVar7 + 1] >> uVar11 | (local_a0[uVar7 + 2] << 1) << uVar9;
            uVar30 = local_a0[uVar7] >> uVar11 | (local_a0[uVar7 + 1] << 1) << uVar9;
            uVar9 = local_a0[uVar7 + 3] >> uVar11;
            bVar35 = uVar15 < (uVar25 != 0);
            uVar20 = uVar15 - (uVar25 == 0);
            uVar8 = uVar28 - (uVar15 == 0 && !bVar35);
            uVar11 = 0;
            uVar12 = uVar10;
            uVar17 = uVar34;
            local_b8 = uVar23;
            do {
              uVar27 = uVar26 << 1 | uVar18 >> 0x1f;
              uVar9 = uVar9 << 1 | uVar26 >> 0x1f;
              uVar19 = uVar18 << 1 | uVar30 >> 0x1f;
              uVar26 = uVar30 << 1 | local_a4 >> 0x1f;
              uVar7 = (int)((uVar21 - (uVar28 == 0 && (uVar15 != 0 || bVar35) <= uVar28)) -
                           (uVar9 + (uVar8 <= uVar27 &&
                                    (uint)(uVar19 < uVar20 ||
                                          uVar20 - uVar19 < (uint)(uVar26 <= uVar25 - 1)) <=
                                    uVar8 - uVar27))) >> 0x1f;
              uVar34 = uVar25 & uVar7;
              uVar23 = uVar15 & uVar7;
              uVar30 = uVar26 - uVar34;
              uVar10 = uVar28 & uVar7;
              bVar1 = uVar19 - uVar23 < (uint)(uVar34 <= uVar26);
              uVar18 = uVar19 - (uVar23 + (uVar34 > uVar26));
              uVar26 = uVar27 - (uVar10 + (uVar23 >= uVar19 && !bVar1));
              uVar9 = uVar9 - ((uVar21 & uVar7) +
                              (uint)(uVar27 <= uVar10 &&
                                    (uint)(uVar23 < uVar19 || bVar1) <= uVar27 - uVar10));
              uVar7 = uVar7 & 1;
              bVar36 = local_ac != 0;
              local_ac = local_ac - 1;
              bVar1 = local_b0 != 0;
              bVar2 = local_b0 < bVar36;
              local_b0 = local_b0 - !bVar36;
              bVar36 = local_b4 == 0;
              bVar3 = (bVar1 || bVar2) <= local_b4;
              local_b4 = local_b4 - (!bVar1 && !bVar2);
              iVar6 = iVar6 - (uint)(bVar36 && bVar3);
              uVar23 = uVar11 | local_b8 << 1;
              uVar34 = uVar17 << 1 | local_b8 >> 0x1f;
              uVar10 = uVar12 << 1 | uVar17 >> 0x1f;
              local_a4 = local_a4 << 1 | uVar12 >> 0x1f;
              uVar11 = uVar7;
              uVar12 = uVar10;
              uVar17 = uVar34;
              local_b8 = uVar23;
            } while ((local_ac != 0 || local_b4 != 0) || (local_b0 != 0 || iVar6 != 0));
          }
          uVar11 = uVar34 << 1 | uVar23 >> 0x1f;
          uVar7 = uVar7 | uVar23 << 1;
          uVar23 = uVar10 << 1 | uVar34 >> 0x1f;
          uVar34 = local_a4 << 1 | uVar10 >> 0x1f;
        }
        uVar10 = (uint)((ulonglong)uVar7 * (ulonglong)uVar25);
        lVar4 = (ulonglong)uVar7 * (ulonglong)uVar15 +
                ((ulonglong)uVar7 * (ulonglong)uVar25 >> 0x20);
        uVar26 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar5 = (ulonglong)uVar11 * (ulonglong)uVar25;
        uVar9 = (uint)((ulonglong)lVar5 >> 0x20);
        uVar17 = (uint)(lVar4 + lVar5);
        uVar20 = (uint)((ulonglong)uVar28 * (ulonglong)uVar7);
        uVar12 = (uint)((ulonglong)uVar25 * (ulonglong)uVar23);
        lVar4 = (ulonglong)uVar11 * (ulonglong)uVar15 +
                (ulonglong)
                CONCAT14(CARRY4(uVar26,uVar9) ||
                         CARRY4(uVar26 + uVar9,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                         (int)((ulonglong)(lVar4 + lVar5) >> 0x20)) +
                CONCAT44(uVar34 * uVar25 +
                         uVar23 * uVar15 + (int)((ulonglong)uVar25 * (ulonglong)uVar23 >> 0x20) +
                         uVar11 * uVar28 +
                         uVar7 * uVar21 + (int)((ulonglong)uVar28 * (ulonglong)uVar7 >> 0x20) +
                         (uint)CARRY4(uVar12,uVar20),uVar12 + uVar20);
        uVar21 = (uint)lVar4;
        bVar35 = uVar16 - uVar17 < (uint)(uVar10 <= uVar22);
        if ((uint)(uVar29 == uVar21 + (uVar17 >= uVar16 && !bVar35)) <=
            -(uVar24 - ((int)((ulonglong)lVar4 >> 0x20) +
                       (uint)(uVar29 <= uVar21 &&
                             (uint)(uVar17 < uVar16 || bVar35) <= uVar29 - uVar21)))) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("too much time has elapsed since the interval was supposed to ticksignal sender went away"
                       ,0x41,&local_40,&DAT_018acd10,&DAT_018acd7c);
        }
        uVar37 = FUN_01846088(uVar22 - uVar10,uVar16 - (uVar17 + (uVar10 > uVar22)),&DAT_3b9aca00,0)
        ;
        uVar15 = (uint)((ulonglong)uVar37 >> 0x20);
        uVar21 = (uint)uVar37;
        uVar28 = local_ec - uVar21;
        uVar24 = local_f0 - (uVar15 + (local_ec < uVar21));
        if ((int)((local_f0 ^ uVar15) & (local_f0 ^ uVar24)) < 0) {
LAB_016519e8:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410f07,0x2f,&DAT_018ab610);
        }
        local_fc = local_fc + (uVar21 * 1000000000 - (uVar22 - uVar10));
        if ((int)local_fc < 0) {
          bVar35 = uVar28 == 0;
          uVar28 = uVar28 - 1;
          uVar21 = uVar24 - bVar35;
          if ((int)(uVar24 & (uVar24 ^ uVar21)) < 0) goto LAB_016519e8;
          local_fc = &DAT_3b9aca00 + (int)local_fc;
        }
        else {
          uVar21 = uVar24;
        }
        goto LAB_016519c4;
      }
      goto LAB_0165114c;
    }
    uVar28 = local_40 + uVar21;
    uVar21 = local_3c + uVar15 + (uint)CARRY4(local_40,uVar21);
    if ((int)uVar15 < 0 != (int)((local_3c ^ uVar21) & ~(local_3c ^ uVar15)) < 0) goto LAB_0165114c;
    local_fc = local_38 + uVar24;
    if (local_fc < &DAT_3b9aca00) {
      goto LAB_016519c4;
    }
    bVar35 = 0xfffffffe < uVar28;
    uVar28 = uVar28 + 1;
    uVar15 = uVar21 + bVar35;
    if ((int)((uVar21 ^ uVar15) & ~uVar21) < 0) goto LAB_0165114c;
LAB_016513d8:
    local_fc = local_fc + -1000000000;
    uVar21 = uVar15;
  }
  else {
    uVar15 = param_2[1];
    uVar28 = uVar32 + *param_2;
    uVar21 = uVar13 + uVar15 + (uint)CARRY4(uVar32,*param_2);
    if ((int)uVar15 < 0 == (int)((uVar13 ^ uVar21) & ~(uVar13 ^ uVar15)) < 0) {
      local_fc = (undefined *)(uVar31 + param_2[2]);
      if (local_fc < &DAT_3b9aca00) goto LAB_016519c4;
      bVar35 = 0xfffffffe < uVar28;
      uVar28 = uVar28 + 1;
      uVar15 = uVar21 + bVar35;
      uVar21 = (uVar21 ^ uVar15) & ~uVar21;
      if (-1 < (int)uVar21) goto LAB_016513d8;
    }
    FUN_0165a798(&local_40,uVar21,uVar28);
    uVar28 = local_40 + 0x38640900;
    uVar21 = local_3c + (0xc79bf6ff < local_40);
    if ((int)((local_3c ^ uVar21) & ~local_3c) < 0) {
LAB_0165114c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    local_fc = local_38;
  }
LAB_016519c4:
  FUN_01653364(uVar33,0,uVar28,uVar21,local_fc,0);
  *param_1 = uVar32;
  param_1[1] = uVar13;
  param_1[2] = uVar31;
  return;
}

